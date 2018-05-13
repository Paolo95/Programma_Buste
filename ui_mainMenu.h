/********************************************************************************
** Form generated from reading UI file 'mainMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QPushButton *BtnMenuEsci;
    QPushButton *BtnMenuLogin;
    QPushButton *BtnConsegnaMateriale;
    QPushButton *pushButton_2;
    QGraphicsView *graphicsView;
    QPushButton *BtnConsegnaMateriale_2;
    QPushButton *BtnConsegnaMateriale_3;
    QPushButton *BtnConsegnaMateriale_4;
    QPushButton *BtnConsegnaMateriale_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(800, 510);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainMenu->sizePolicy().hasHeightForWidth());
        MainMenu->setSizePolicy(sizePolicy);
        MainMenu->setMinimumSize(QSize(800, 510));
        MainMenu->setMaximumSize(QSize(800, 510));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BtnMenuEsci = new QPushButton(centralwidget);
        BtnMenuEsci->setObjectName(QStringLiteral("BtnMenuEsci"));
        BtnMenuEsci->setGeometry(QRect(580, 420, 191, 41));
        BtnMenuLogin = new QPushButton(centralwidget);
        BtnMenuLogin->setObjectName(QStringLiteral("BtnMenuLogin"));
        BtnMenuLogin->setGeometry(QRect(580, 370, 191, 41));
        BtnConsegnaMateriale = new QPushButton(centralwidget);
        BtnConsegnaMateriale->setObjectName(QStringLiteral("BtnConsegnaMateriale"));
        BtnConsegnaMateriale->setGeometry(QRect(10, 110, 191, 111));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 110, 191, 111));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 391, 91));
        graphicsView->setFrameShape(QFrame::NoFrame);
        BtnConsegnaMateriale_2 = new QPushButton(centralwidget);
        BtnConsegnaMateriale_2->setObjectName(QStringLiteral("BtnConsegnaMateriale_2"));
        BtnConsegnaMateriale_2->setGeometry(QRect(10, 230, 191, 111));
        BtnConsegnaMateriale_3 = new QPushButton(centralwidget);
        BtnConsegnaMateriale_3->setObjectName(QStringLiteral("BtnConsegnaMateriale_3"));
        BtnConsegnaMateriale_3->setGeometry(QRect(210, 230, 191, 111));
        BtnConsegnaMateriale_4 = new QPushButton(centralwidget);
        BtnConsegnaMateriale_4->setObjectName(QStringLiteral("BtnConsegnaMateriale_4"));
        BtnConsegnaMateriale_4->setGeometry(QRect(10, 350, 191, 111));
        BtnConsegnaMateriale_5 = new QPushButton(centralwidget);
        BtnConsegnaMateriale_5->setObjectName(QStringLiteral("BtnConsegnaMateriale_5"));
        BtnConsegnaMateriale_5->setGeometry(QRect(210, 350, 191, 111));
        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(MainMenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainMenu->setStatusBar(statusbar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "GeRiCo", nullptr));
        BtnMenuEsci->setText(QApplication::translate("MainMenu", "Esci", nullptr));
        BtnMenuLogin->setText(QApplication::translate("MainMenu", "Torna al Login", nullptr));
        BtnConsegnaMateriale->setText(QApplication::translate("MainMenu", "Consegna Materiale", nullptr));
        pushButton_2->setText(QApplication::translate("MainMenu", "Centro fiera", nullptr));
        BtnConsegnaMateriale_2->setText(QApplication::translate("MainMenu", "Biblioteca", nullptr));
        BtnConsegnaMateriale_3->setText(QApplication::translate("MainMenu", "Anagrafica", nullptr));
        BtnConsegnaMateriale_4->setText(QApplication::translate("MainMenu", "Statistiche", nullptr));
        BtnConsegnaMateriale_5->setText(QApplication::translate("MainMenu", "Impostazioni", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
