#include "server.h"
#include <QTcpSocket>

void Server::serverOn()
{
    if(this->listen(QHostAddress::Any, 5555))
    {
        qDebug()<<"Listenning";
    }
    else
    {
        qDebug()<<"Not listenning";
    }
}

void Server::incomingConnection(qintptr socketDescriptor)
{
    auto socket = new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);
    connect(socket, SIGNAL(readyRead()),this, SLOT(sreadyRead()));
    connect(socket, SIGNAL(disconnected()), this, SLOT(socDisc()));
    qDebug()<<socketDescriptor<<"Client connected";
    socket->write("Вы подключены");
    listSocket.append(socket);
}

void Server::sreadyRead()
{
    QString nick;
    auto socket = static_cast<QTcpSocket*>(sender());
    Data = socket->readAll();
    if(Data != nullptr)
    {
        if(Data.contains("#rg"))
        {
            QByteArray temp = Data.left(Data.indexOf("#rg"));
            if(!listUser.isEmpty())
            {
                if(listUser.contains(temp))
                {
                    socket->write("~ds");
                }
                else
                {
                    registration(socket);
                }
            }
            else
            {
                registration(socket);
            }
        }
        else
        {
            nick = Data.left(Data.indexOf("~nm~"));
            toNick = Data.right(Data.length() - Data.indexOf("~to~") - 4);
            qDebug()<<"Message: "<<Data;
            if(nick == toNick)
            {
                static_cast<QTcpSocket*>(sender())->write(Data);
            }
            else if(Data.contains("~All"))
            {
                sendToClient();
            }
            else
            {
                socket->write(Data);
                listUser[toNick]->write(Data);
            }
        }
    }
    qDebug()<<Data;
}

void Server::registration(QTcpSocket* socket)
{
    qDebug()<<"New connection: ";
    listUser[Data.left(Data.indexOf("#rg"))] = socket;
    qDebug()<<Data.left(Data.indexOf("#rg"))<<socket << listUser.value(Data.left(Data.indexOf("#rg")));
    Data = "$All$";
    QMapIterator<QByteArray, QTcpSocket*> i(listUser);
    while (i.hasNext())
    {
        i.next();
        Data += i.key() + "$";
    }
    sendToClient();
}

void Server::sendToClient()
{
    for(int i = 0; i < listSocket.size(); i++)
    {
         listSocket[i]->write(Data);
    }
}

void Server::socDisc()
{
    qDebug()<<"Disconnected";
    listSocket.removeAll(static_cast<QTcpSocket*>(sender()));
    listUser.remove(listUser.key(static_cast<QTcpSocket*>(sender())));
    static_cast<QTcpSocket*>(sender())->deleteLater();
    for(int i = 0; i < listSocket.size(); i++)
    {
       auto socket = listSocket[i];
       socket->write(" ~nm~:Пользователь вышел~to~All");
    }
}
