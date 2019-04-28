/********************************************************************************
** Form generated from reading UI file 'mainMenu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QWidget *centralwidget;
    QPushButton *BtnMenuEsci;
    QPushButton *BtnMenuLogin;
    QPushButton *BtnConsegnaMateriale;
    QPushButton *btnCentroFiera;
    QPushButton *btnBiblioteca;
    QPushButton *btnAnagrafica;
    QPushButton *btnStatistiche;
    QPushButton *btnImpostazioni;
    QPushButton *btnGestioneRichieste;
    QPushButton *btnGestioneMateriale;
    QPushButton *btnGestioneArrivi;
    QLabel *lblImmagine;
    QLabel *lblReminder;
    QListView *tblReminders;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName(QStringLiteral("MainMenu"));
        MainMenu->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainMenu->sizePolicy().hasHeightForWidth());
        MainMenu->setSizePolicy(sizePolicy);
        MainMenu->setMinimumSize(QSize(800, 600));
        MainMenu->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(MainMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BtnMenuEsci = new QPushButton(centralwidget);
        BtnMenuEsci->setObjectName(QStringLiteral("BtnMenuEsci"));
        BtnMenuEsci->setGeometry(QRect(660, 490, 111, 71));
        QIcon icon;
        icon.addFile(QStringLiteral("Immagini/close_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnMenuEsci->setIcon(icon);
        BtnMenuEsci->setIconSize(QSize(45, 45));
        BtnMenuLogin = new QPushButton(centralwidget);
        BtnMenuLogin->setObjectName(QStringLiteral("BtnMenuLogin"));
        BtnMenuLogin->setGeometry(QRect(410, 350, 191, 51));
        BtnConsegnaMateriale = new QPushButton(centralwidget);
        BtnConsegnaMateriale->setObjectName(QStringLiteral("BtnConsegnaMateriale"));
        BtnConsegnaMateriale->setGeometry(QRect(10, 110, 191, 111));
        btnCentroFiera = new QPushButton(centralwidget);
        btnCentroFiera->setObjectName(QStringLiteral("btnCentroFiera"));
        btnCentroFiera->setGeometry(QRect(410, 110, 191, 111));
        btnBiblioteca = new QPushButton(centralwidget);
        btnBiblioteca->setObjectName(QStringLiteral("btnBiblioteca"));
        btnBiblioteca->setGeometry(QRect(10, 230, 191, 111));
        btnBiblioteca->setIconSize(QSize(60, 60));
        btnAnagrafica = new QPushButton(centralwidget);
        btnAnagrafica->setObjectName(QStringLiteral("btnAnagrafica"));
        btnAnagrafica->setGeometry(QRect(210, 230, 191, 111));
        btnStatistiche = new QPushButton(centralwidget);
        btnStatistiche->setObjectName(QStringLiteral("btnStatistiche"));
        btnStatistiche->setGeometry(QRect(10, 350, 191, 111));
        btnImpostazioni = new QPushButton(centralwidget);
        btnImpostazioni->setObjectName(QStringLiteral("btnImpostazioni"));
        btnImpostazioni->setGeometry(QRect(410, 410, 191, 51));
        btnGestioneRichieste = new QPushButton(centralwidget);
        btnGestioneRichieste->setObjectName(QStringLiteral("btnGestioneRichieste"));
        btnGestioneRichieste->setGeometry(QRect(210, 110, 191, 111));
        btnGestioneMateriale = new QPushButton(centralwidget);
        btnGestioneMateriale->setObjectName(QStringLiteral("btnGestioneMateriale"));
        btnGestioneMateriale->setGeometry(QRect(210, 350, 191, 111));
        btnGestioneArrivi = new QPushButton(centralwidget);
        btnGestioneArrivi->setObjectName(QStringLiteral("btnGestioneArrivi"));
        btnGestioneArrivi->setGeometry(QRect(410, 230, 191, 111));
        lblImmagine = new QLabel(centralwidget);
        lblImmagine->setObjectName(QStringLiteral("lblImmagine"));
        lblImmagine->setGeometry(QRect(10, 10, 781, 91));
        lblImmagine->setLayoutDirection(Qt::LeftToRight);
        lblImmagine->setAutoFillBackground(true);
        lblImmagine->setPixmap(QPixmap(QString::fromUtf8("Immagini/poliservice_logo.jpg")));
        lblImmagine->setAlignment(Qt::AlignCenter);
        lblReminder = new QLabel(centralwidget);
        lblReminder->setObjectName(QStringLiteral("lblReminder"));
        lblReminder->setGeometry(QRect(10, 470, 91, 17));
        tblReminders = new QListView(centralwidget);
        tblReminders->setObjectName(QStringLiteral("tblReminders"));
        tblReminders->setGeometry(QRect(10, 490, 591, 71));
        MainMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainMenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainMenu->setMenuBar(menubar);

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *MainMenu)
    {
        MainMenu->setWindowTitle(QApplication::translate("MainMenu", "GeRiCo", nullptr));
        BtnMenuEsci->setText(QApplication::translate("MainMenu", "   Esci", nullptr));
        BtnMenuLogin->setText(QApplication::translate("MainMenu", "Torna al Login", nullptr));
        BtnConsegnaMateriale->setText(QApplication::translate("MainMenu", "Consegna Materiale", nullptr));
        btnCentroFiera->setText(QApplication::translate("MainMenu", "Centro fiera", nullptr));
        btnBiblioteca->setText(QApplication::translate("MainMenu", "Biblioteca", nullptr));
        btnAnagrafica->setText(QApplication::translate("MainMenu", "Anagrafica", nullptr));
        btnStatistiche->setText(QApplication::translate("MainMenu", "Statistiche", nullptr));
        btnImpostazioni->setText(QApplication::translate("MainMenu", "Impostazioni", nullptr));
        btnGestioneRichieste->setText(QApplication::translate("MainMenu", "Gestione Richieste", nullptr));
        btnGestioneMateriale->setText(QApplication::translate("MainMenu", "Gestione Materiale", nullptr));
        btnGestioneArrivi->setText(QApplication::translate("MainMenu", "Gestione Arrivi", nullptr));
        lblImmagine->setText(QString());
        lblReminder->setText(QApplication::translate("MainMenu", "Reminders:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
