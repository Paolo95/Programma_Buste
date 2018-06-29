/********************************************************************************
** Form generated from reading UI file 'centroFiera.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTROFIERA_H
#define UI_CENTROFIERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CentroFiera
{
public:
    QWidget *centralwidget;
    QGroupBox *grpResoconto;
    QLabel *lblUltimoagg;
    QLabel *lblDataAggiornamento;
    QGroupBox *grpBuste;
    QLabel *lblRosse;
    QLabel *lblBlu;
    QLabel *lblVerdi;
    QLabel *lblBianche;
    QLineEdit *txtRosse;
    QLineEdit *txtBlu;
    QLineEdit *txtVerdi;
    QLineEdit *txtBianche;

    void setupUi(QMainWindow *CentroFiera)
    {
        if (CentroFiera->objectName().isEmpty())
            CentroFiera->setObjectName(QStringLiteral("CentroFiera"));
        CentroFiera->resize(800, 600);
        centralwidget = new QWidget(CentroFiera);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        grpResoconto = new QGroupBox(centralwidget);
        grpResoconto->setObjectName(QStringLiteral("grpResoconto"));
        grpResoconto->setGeometry(QRect(10, 10, 771, 221));
        lblUltimoagg = new QLabel(grpResoconto);
        lblUltimoagg->setObjectName(QStringLiteral("lblUltimoagg"));
        lblUltimoagg->setGeometry(QRect(450, 30, 161, 31));
        lblDataAggiornamento = new QLabel(grpResoconto);
        lblDataAggiornamento->setObjectName(QStringLiteral("lblDataAggiornamento"));
        lblDataAggiornamento->setGeometry(QRect(630, 30, 121, 31));
        grpBuste = new QGroupBox(grpResoconto);
        grpBuste->setObjectName(QStringLiteral("grpBuste"));
        grpBuste->setGeometry(QRect(10, 80, 371, 91));
        lblRosse = new QLabel(grpBuste);
        lblRosse->setObjectName(QStringLiteral("lblRosse"));
        lblRosse->setGeometry(QRect(30, 30, 51, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblRosse->setFont(font);
        lblBlu = new QLabel(grpBuste);
        lblBlu->setObjectName(QStringLiteral("lblBlu"));
        lblBlu->setGeometry(QRect(130, 30, 31, 20));
        lblBlu->setFont(font);
        lblVerdi = new QLabel(grpBuste);
        lblVerdi->setObjectName(QStringLiteral("lblVerdi"));
        lblVerdi->setGeometry(QRect(210, 30, 41, 16));
        lblVerdi->setFont(font);
        lblBianche = new QLabel(grpBuste);
        lblBianche->setObjectName(QStringLiteral("lblBianche"));
        lblBianche->setGeometry(QRect(290, 30, 61, 16));
        lblBianche->setFont(font);
        txtRosse = new QLineEdit(grpBuste);
        txtRosse->setObjectName(QStringLiteral("txtRosse"));
        txtRosse->setGeometry(QRect(10, 50, 81, 21));
        txtRosse->setStyleSheet(QStringLiteral("background-color: rgba(255, 0, 0, 50);"));
        txtRosse->setReadOnly(true);
        txtBlu = new QLineEdit(grpBuste);
        txtBlu->setObjectName(QStringLiteral("txtBlu"));
        txtBlu->setGeometry(QRect(100, 50, 81, 21));
        txtBlu->setStyleSheet(QStringLiteral("background-color: rgba(9, 47, 252, 50);"));
        txtBlu->setReadOnly(true);
        txtVerdi = new QLineEdit(grpBuste);
        txtVerdi->setObjectName(QStringLiteral("txtVerdi"));
        txtVerdi->setGeometry(QRect(190, 50, 81, 21));
        txtVerdi->setStyleSheet(QStringLiteral("background-color: rgba(3, 251, 63, 50);"));
        txtVerdi->setReadOnly(true);
        txtBianche = new QLineEdit(grpBuste);
        txtBianche->setObjectName(QStringLiteral("txtBianche"));
        txtBianche->setGeometry(QRect(280, 50, 81, 21));
        txtBianche->setReadOnly(true);
        CentroFiera->setCentralWidget(centralwidget);

        retranslateUi(CentroFiera);

        QMetaObject::connectSlotsByName(CentroFiera);
    } // setupUi

    void retranslateUi(QMainWindow *CentroFiera)
    {
        CentroFiera->setWindowTitle(QApplication::translate("CentroFiera", "Centro Fiera", nullptr));
        grpResoconto->setTitle(QApplication::translate("CentroFiera", "Resoconto dei materiali", nullptr));
        lblUltimoagg->setText(QApplication::translate("CentroFiera", "Ultimo aggiornamento:", nullptr));
        lblDataAggiornamento->setText(QString());
        grpBuste->setTitle(QApplication::translate("CentroFiera", "Buste", nullptr));
        lblRosse->setText(QApplication::translate("CentroFiera", "Rosse", nullptr));
        lblBlu->setText(QApplication::translate("CentroFiera", "Blu", nullptr));
        lblVerdi->setText(QApplication::translate("CentroFiera", "Verdi", nullptr));
        lblBianche->setText(QApplication::translate("CentroFiera", "Bianche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CentroFiera: public Ui_CentroFiera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTROFIERA_H
