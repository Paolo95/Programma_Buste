/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QPushButton *BtnEsci;
    QPushButton *BtnLogin;
    QLabel *lblUsername;
    QLabel *lblPassword;
    QLineEdit *txtUsername;
    QLineEdit *txtPassword;
    QPushButton *BtnInfo;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(303, 280);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(303, 280));
        Login->setMaximumSize(QSize(303, 280));
        QIcon icon;
        icon.addFile(QStringLiteral("Immagini/Recycle bin icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BtnEsci = new QPushButton(centralWidget);
        BtnEsci->setObjectName(QStringLiteral("BtnEsci"));
        BtnEsci->setGeometry(QRect(160, 190, 75, 23));
        BtnLogin = new QPushButton(centralWidget);
        BtnLogin->setObjectName(QStringLiteral("BtnLogin"));
        BtnLogin->setGeometry(QRect(60, 190, 75, 23));
        lblUsername = new QLabel(centralWidget);
        lblUsername->setObjectName(QStringLiteral("lblUsername"));
        lblUsername->setGeometry(QRect(50, 60, 71, 16));
        lblPassword = new QLabel(centralWidget);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setGeometry(QRect(50, 90, 71, 16));
        txtUsername = new QLineEdit(centralWidget);
        txtUsername->setObjectName(QStringLiteral("txtUsername"));
        txtUsername->setGeometry(QRect(130, 60, 113, 20));
        txtPassword = new QLineEdit(centralWidget);
        txtPassword->setObjectName(QStringLiteral("txtPassword"));
        txtPassword->setGeometry(QRect(130, 90, 113, 20));
        BtnInfo = new QPushButton(centralWidget);
        BtnInfo->setObjectName(QStringLiteral("BtnInfo"));
        BtnInfo->setGeometry(QRect(270, 0, 31, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Immagini/Info icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnInfo->setIcon(icon1);
        Login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 303, 22));
        Login->setMenuBar(menuBar);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusBar->sizePolicy().hasHeightForWidth());
        statusBar->setSizePolicy(sizePolicy1);
        statusBar->setContextMenuPolicy(Qt::CustomContextMenu);
        statusBar->setLayoutDirection(Qt::LeftToRight);
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "GeRiCo", nullptr));
        BtnEsci->setText(QApplication::translate("Login", "Esci", nullptr));
        BtnLogin->setText(QApplication::translate("Login", "Login", nullptr));
        lblUsername->setText(QApplication::translate("Login", "Username", nullptr));
        lblPassword->setText(QApplication::translate("Login", "Password", nullptr));
        BtnInfo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
