#include "client.h"
#include "ui_client.h"
#include <QList>
#include <QVector>
#include <QMessageBox>
#include <math.h>

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Client)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    connect(socket, SIGNAL(readyRead()), this, SLOT(sockRead()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(socDisc()));
    ui->statusbar->showMessage(date.currentDate().toString("dd.MM.yyyy"));
}

Client::~Client()
{
    delete ui;
}

QString Client::encrypt(QString startText)
{
    QString cryptKey = ui->lineKey->text();
    QString finishText;
    QVector<int> result;
    for(int i = 0; i < ui->textInput->toPlainText().length(); i++)
    {
        char x = (int)startText[i].unicode();
        result.push_back(((int)startText[i].unicode() + (int)cryptKey[i%cryptKey.length()].unicode()));

    }
    for(int i = 0; i < ui->textInput->toPlainText().length(); i++)
    {
        finishText += (QString::number(result[i])) + ",";
    }
    return finishText;
}

QString Client::decrypt(QString startText)
{
    QStringList tempBuf = startText.split(",", QString::SkipEmptyParts);
    QVector<int> res;
    QString cryptKey = ui->lineKey->text();
    QString finishText;
    for (int i = 0; i < tempBuf.length(); i++)
    {
        int buf = (int)tempBuf[i].toInt() - (int)cryptKey[i%cryptKey.length()].unicode();
        QString translate = (QString)((char)buf);
        QChar strTocha = QChar(buf);
        finishText += strTocha;
    }
    return finishText;
}

void Client::forOutput(int key)
{
    switch (key)
    {
    case 0: {
        use.clear();
        use = Data.split('$');
        ui->listUsers->clear();
        for(int i = 1; i < use.length(); i++)
        {
            ui->listUsers->addItem(use[i]);
        }
        ui->textMessage->append(use[0]);
        break;
    }
    case 1: {
        Data.truncate(Data.indexOf("~to~"));
        auto mes = Data.right(Data.length() - Data.indexOf("~nm~:") - 5);
        Data.truncate(Data.indexOf("~nm~"));
        ui->textMessage->append("<font color=\"#aaffff\">"+QTime::currentTime().toString("hh:mm") + "</font>  <b>" + Data + "</b> : " + mes);
        break;
    }
    case 2: {
        Data.truncate(Data.indexOf("~to~"));
        auto mes = decrypt(Data.right(Data.length() - Data.indexOf("~nm~:") - 5));
        Data.truncate(Data.indexOf("~nm~"));
        ui->textMessage->append(QTime::currentTime().toString("hh:mm") + "  <b>" + Data + "</b> : " + mes);
        break;
    }
    }
}

void Client::alert()
{
    if(Data != ui->lineUser->text() && Data != ui->listUsers->currentText())
    {
        QMessageBox::StandardButton reply = QMessageBox::question(this, "Оповещение", "Вам пришло сообщение от \nпользователя " + Data.left(Data.indexOf("~nm~")), QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            for (int i = 1; i < use.length(); i++)
            {
                if(Data == ui->listUsers->itemText(i))
                {
                    ui->listUsers->setCurrentText(ui->listUsers->itemText(i));
                }
            }
        }
        else
        {
            qDebug()<<"Нет, так нет)";
        }
    }
}

void Client::sockRead()
{
    if(socket->waitForConnected(500))
    {
        socket->waitForReadyRead(500);
        Data = socket->readAll();
        if(Data.contains("$"))
        {
            forOutput(0);
        }
        else if(Data.right(Data.length() - Data.indexOf("~to~") - 4) == "All" && ui->rBtnEncrypt->isChecked())
        {
           forOutput(2);
        }
        else if(ui->rBtnEncrypt->isChecked())
        {
            ui->textMessage->append("******************************");
            ui->textMessage->append("<i>Личное сообщение от пользователя</i>");
            forOutput(2);
            ui->textMessage->append("******************************");
            alert();
        }
        else if(Data.right(Data.length() - Data.indexOf("~to~") - 4) == "All")
        {
            forOutput(1);
        }
        else
        {
            if(Data.contains("~ds"))
            {
                        QMessageBox::critical(this, "Ошибка авторизации", "К сожалению, указанное Вами имя уже используется другим пользователем.\nВведите другое имя и попытайтесь подключиться снова");
                        socDisc();
                        ui->lineUser->setReadOnly(false);
                        ui->lineUser->clear();
            }
            else
            {
                ui->textMessage->append("******************************");
                ui->textMessage->append("<i>Личное сообщение от пользователя</i>");
                forOutput(1);
                ui->textMessage->append("******************************");
            }
        }
    }
}

void Client::sendToServer()
{
    if(!ui->textInput->toPlainText().isEmpty())
    {
        if(ui->rBtnEncrypt->isChecked())
        {
            if(ui->lineKey->text().isEmpty() || ui->lineKey->text() == " ")
            {
                QMessageBox::critical(this, "", "Введите ключ в соответсвующем поле");
            }
            else
            {
                Data = ui->lineUser->text().toUtf8() + "~nm~:" + encrypt(ui->textInput->toPlainText()).toUtf8() + "~to~" + ui->listUsers->currentText().toUtf8();
                socket->write(Data);
            }
        }
        else
        {
            Data = ui->lineUser->text().toUtf8() + "~nm~:" + ui->textInput->toPlainText().toUtf8() + "~to~" + ui->listUsers->currentText().toUtf8();
            socket->write(Data);
        }
    }
}

void Client::socDisc()
{
    socket->disconnectFromHost();
}


void Client::on_btnEnter_clicked()
{
    sendToServer();
    ui->textInput->clear();
}

void Client::on_btnDiscon_clicked()
{
    socDisc();
    ui->lineUser->setReadOnly(false);
    ui->lineUser->clear();
}

void Client::on_btnConnection_clicked()
{
    if(ui->lineUser->text() != " ")
    {
        if(!ui->lineUser->text().isEmpty() && !ui->lineUser->isReadOnly())
        {
            socket->connectToHost("127.0.0.1", 5555);
            socket->write(ui->lineUser->text().toUtf8() + "#rg");
            ui->lineUser->setReadOnly(true);
        }
    }
}
