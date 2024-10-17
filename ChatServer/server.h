#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QList>
#include <QMap>

class Server : public QTcpServer
{
    Q_OBJECT
public:
    QByteArray Data;
    QList<QTcpSocket*> listSocket;
    QMap<QByteArray, QTcpSocket*> listUser;
    QList<QString> check;
    QByteArray toNick;
public slots:
    void serverOn();
    void incomingConnection(qintptr socketDescriptor);
    void sreadyRead();
    void registration(QTcpSocket* socket);
    void sendToClient();
    void socDisc();
};

#endif // SERVER_H
