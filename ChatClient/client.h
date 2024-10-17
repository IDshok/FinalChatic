#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QDate>

QT_BEGIN_NAMESPACE
namespace Ui { class Client; }
QT_END_NAMESPACE

class Client : public QMainWindow
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();
    QTcpSocket* socket;
    QByteArray Data;
    QList<QByteArray> use;
    QDate date;
    QString encrypt(QString startText);
    QString decrypt(QString startText);
    void readDecrypt();
    void forOutput(int key);
    void alert();
public slots:
    void sockRead();
    void sendToServer();
    void socDisc();
private slots:
    void on_btnEnter_clicked();

    void on_btnDiscon_clicked();

    void on_btnConnection_clicked();



private:
    Ui::Client *ui;
};
#endif // CLIENT_H
