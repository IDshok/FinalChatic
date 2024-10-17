/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QWidget *centralwidget;
    QTextEdit *textInput;
    QTextEdit *textMessage;
    QPushButton *btnDiscon;
    QComboBox *listUsers;
    QRadioButton *rBtnEncrypt;
    QPushButton *btnEnter;
    QPushButton *btnConnection;
    QLabel *nmOfUser;
    QLineEdit *lineUser;
    QLineEdit *lineKey;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(452, 480);
        Client->setMaximumSize(QSize(452, 480));
        Client->setStyleSheet(QString::fromUtf8("background-color: rgb(67, 68, 69);"));
        centralwidget = new QWidget(Client);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textInput = new QTextEdit(centralwidget);
        textInput->setObjectName(QString::fromUtf8("textInput"));
        textInput->setGeometry(QRect(20, 316, 295, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textInput->sizePolicy().hasHeightForWidth());
        textInput->setSizePolicy(sizePolicy);
        textInput->setMinimumSize(QSize(0, 0));
        textInput->setMaximumSize(QSize(16777215, 16777215));
        textInput->setStyleSheet(QString::fromUtf8("background-color: #a2a2a2;\n"
"padding: 7px;\n"
"border-radius: 5px;\n"
"color: #f2f2f2;"));
        textInput->setReadOnly(false);
        textMessage = new QTextEdit(centralwidget);
        textMessage->setObjectName(QString::fromUtf8("textMessage"));
        textMessage->setGeometry(QRect(20, 60, 295, 245));
        sizePolicy.setHeightForWidth(textMessage->sizePolicy().hasHeightForWidth());
        textMessage->setSizePolicy(sizePolicy);
        textMessage->setMinimumSize(QSize(0, 0));
        textMessage->setMaximumSize(QSize(16777215, 16777215));
        textMessage->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background-color: #a4a4a4;\n"
"padding: 7px;\n"
"border-radius: 6px;\n"
"color: #f2f2f2;\n"
"}"));
        textMessage->setReadOnly(true);
        btnDiscon = new QPushButton(centralwidget);
        btnDiscon->setObjectName(QString::fromUtf8("btnDiscon"));
        btnDiscon->setGeometry(QRect(340, 60, 93, 28));
        btnDiscon->setStyleSheet(QString::fromUtf8("QPushButton#btnDiscon{\n"
"background-color: #767778;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #858687;\n"
"border-style: solid;\n"
"color: #f2f2f2;\n"
"}\n"
"QPushButton#btnDiscon:hover{\n"
"background-color: #878889;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #a9aaab;\n"
"border-style: solid;\n"
"color: #ffffff;\n"
"}\n"
"QPushButton#btnDiscon:pressed{\n"
"background-color: #575859;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #878889;\n"
"border-style: solid;\n"
"color: #efefef;\n"
"}"));
        listUsers = new QComboBox(centralwidget);
        listUsers->setObjectName(QString::fromUtf8("listUsers"));
        listUsers->setGeometry(QRect(340, 100, 93, 28));
        listUsers->setStyleSheet(QString::fromUtf8("background-color: #767778;\n"
"selection-background-color: rgb(222, 222, 222);\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #858687;\n"
"border-style: solid;\n"
"color: #f2f2f2;"));
        rBtnEncrypt = new QRadioButton(centralwidget);
        rBtnEncrypt->setObjectName(QString::fromUtf8("rBtnEncrypt"));
        rBtnEncrypt->setGeometry(QRect(280, 395, 151, 22));
        rBtnEncrypt->setStyleSheet(QString::fromUtf8("color: #f2f2f2;"));
        btnEnter = new QPushButton(centralwidget);
        btnEnter->setObjectName(QString::fromUtf8("btnEnter"));
        btnEnter->setGeometry(QRect(340, 330, 93, 33));
        btnEnter->setStyleSheet(QString::fromUtf8("QPushButton#btnEnter{\n"
"background-color: #767778;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #858687;\n"
"border-style: solid;\n"
"color: #f2f2f2;\n"
"}\n"
"QPushButton#btnEnter:hover{\n"
"background-color: #878889;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #a9aaab;\n"
"border-style: solid;\n"
"color: #ffffff;\n"
"}\n"
"QPushButton#btnEnter:pressed{\n"
"background-color: #575859;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #878889;\n"
"border-style: solid;\n"
"color: #efefef;\n"
"}"));
        btnConnection = new QPushButton(centralwidget);
        btnConnection->setObjectName(QString::fromUtf8("btnConnection"));
        btnConnection->setGeometry(QRect(340, 20, 93, 28));
        btnConnection->setStyleSheet(QString::fromUtf8("QPushButton#btnConnection{\n"
"background-color: #767778;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #858687;\n"
"border-style: solid;\n"
"color: #f2f2f2;\n"
"}\n"
"QPushButton#btnConnection:hover{\n"
"background-color: #878889;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #a9aaab;\n"
"border-style: solid;\n"
"color: #ffffff;\n"
"}\n"
"QPushButton#btnConnection:pressed{\n"
"background-color: #575859;\n"
"padding: 5px;\n"
"border-radius: 5px;\n"
"border-width: 2px;\n"
"border-color: #878889;\n"
"border-style: solid;\n"
"color: #efefef;\n"
"}"));
        nmOfUser = new QLabel(centralwidget);
        nmOfUser->setObjectName(QString::fromUtf8("nmOfUser"));
        nmOfUser->setGeometry(QRect(20, 20, 135, 30));
        nmOfUser->setMaximumSize(QSize(16777215, 16777215));
        nmOfUser->setStyleSheet(QString::fromUtf8("color: #f2f2f2;"));
        lineUser = new QLineEdit(centralwidget);
        lineUser->setObjectName(QString::fromUtf8("lineUser"));
        lineUser->setGeometry(QRect(160, 20, 155, 30));
        lineUser->setMaximumSize(QSize(16777215, 16777215));
        lineUser->setStyleSheet(QString::fromUtf8("background-color: #a2a2a2;\n"
"padding: 7px;\n"
"border-radius: 5px;\n"
"color: white;"));
        lineKey = new QLineEdit(centralwidget);
        lineKey->setObjectName(QString::fromUtf8("lineKey"));
        lineKey->setGeometry(QRect(20, 390, 221, 30));
        lineKey->setStyleSheet(QString::fromUtf8("background-color: #a2a2a2;\n"
"padding: 7px;\n"
"border-radius: 5px;\n"
"color: #f2f2f2;"));
        Client->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Client);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 452, 26));
        Client->setMenuBar(menubar);
        statusbar = new QStatusBar(Client);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setLayoutDirection(Qt::LeftToRight);
        statusbar->setStyleSheet(QString::fromUtf8("color: #f2f2f2;\n"
"font-weight: bold;"));
        Client->setStatusBar(statusbar);

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QMainWindow *Client)
    {
        Client->setWindowTitle(QCoreApplication::translate("Client", "Client", nullptr));
        textInput->setPlaceholderText(QCoreApplication::translate("Client", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265...", nullptr));
#if QT_CONFIG(tooltip)
        btnDiscon->setToolTip(QCoreApplication::translate("Client", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265 <b>Shift+Esc</b>, \321\207\321\202\320\276\320\261\321\213 \320\277\320\276\320\272\320\270\320\275\321\203\321\202\321\214 \321\207\320\260\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDiscon->setText(QCoreApplication::translate("Client", "\320\236\321\202\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(shortcut)
        btnDiscon->setShortcut(QCoreApplication::translate("Client", "Shift+Esc", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        listUsers->setToolTip(QCoreApplication::translate("Client", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\321\221\320\275\320\275\321\213\321\205 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        rBtnEncrypt->setText(QCoreApplication::translate("Client", "\320\222\320\272\320\273. \320\264\320\273\321\217 \321\210\320\270\321\204\321\200\320\276\320\262\320\272\320\270", nullptr));
#if QT_CONFIG(tooltip)
        btnEnter->setToolTip(QCoreApplication::translate("Client", "<b>Ctrl+Enter</b> - \320\264\320\273\321\217 \320\276\321\202\320\277\321\200\320\260\320\262\320\272\320\270 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEnter->setText(QCoreApplication::translate("Client", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        btnEnter->setShortcut(QCoreApplication::translate("Client", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnConnection->setToolTip(QCoreApplication::translate("Client", "\320\235\320\260\320\266\320\274\320\270\321\202\320\265 <b>Shift+Enter</b>, \321\207\321\202\320\276\320\261\321\213 \320\277\321\200\320\270\321\201\320\276\320\265\320\264\320\270\320\275\320\270\321\202\321\214\321\201\321\217 \320\272 \321\207\320\260\321\202\321\203", nullptr));
#endif // QT_CONFIG(tooltip)
        btnConnection->setText(QCoreApplication::translate("Client", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
#if QT_CONFIG(shortcut)
        btnConnection->setShortcut(QCoreApplication::translate("Client", "Shift+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        nmOfUser->setText(QCoreApplication::translate("Client", "<b>\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217</b>", nullptr));
        lineUser->setPlaceholderText(QCoreApplication::translate("Client", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217...", nullptr));
#if QT_CONFIG(tooltip)
        lineKey->setToolTip(QCoreApplication::translate("Client", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 \320\272\320\273\321\216\321\207\320\260 \321\210\320\270\321\204\321\200\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        lineKey->setPlaceholderText(QCoreApplication::translate("Client", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\273\321\216\321\207...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
