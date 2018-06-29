/********************************************************************************
** Form generated from reading UI file 'modificaRichiesta.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICARICHIESTA_H
#define UI_MODIFICARICHIESTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ModificaRichiesta
{
public:
    QPushButton *BtnMaterialeEsci;
    QPushButton *btnSalva;
    QGroupBox *grpDataRichiesta;
    QDateEdit *dateEditRichiesta;
    QGroupBox *grpCalendari;
    QComboBox *comboBoxCalendari;
    QGroupBox *grpBuste;
    QLabel *lblRosse;
    QLabel *lblBlu;
    QLabel *lblVerdi;
    QLabel *lblBianche;
    QComboBox *comboBoxRosse;
    QComboBox *comboBoxBlu;
    QComboBox *comboBoxVerdi;
    QComboBox *comboBoxBianche;
    QGroupBox *grpSecchi360;
    QComboBox *comboBoxSecchiUmido360;
    QComboBox *comboBoxSecchiVetro360;
    QLabel *lblSecchiUmido360;
    QLabel *lblSecchiVetro360;
    QGroupBox *grpMastelli;
    QLabel *lblUmidoMastelli;
    QComboBox *comboBoxMastelliUmido;
    QLabel *lblVetroMastelli;
    QComboBox *comboBoxMastelliVetro;
    QGroupBox *grpSecchi240;
    QComboBox *comboBoxSecchiUmido240;
    QComboBox *comboBoxSecchiVetro240;
    QLabel *lblSecchiUmido240;
    QLabel *lblSecchiVetro240;

    void setupUi(QDialog *ModificaRichiesta)
    {
        if (ModificaRichiesta->objectName().isEmpty())
            ModificaRichiesta->setObjectName(QStringLiteral("ModificaRichiesta"));
        ModificaRichiesta->resize(753, 259);
        ModificaRichiesta->setMinimumSize(QSize(753, 259));
        ModificaRichiesta->setMaximumSize(QSize(753, 400));
        BtnMaterialeEsci = new QPushButton(ModificaRichiesta);
        BtnMaterialeEsci->setObjectName(QStringLiteral("BtnMaterialeEsci"));
        BtnMaterialeEsci->setGeometry(QRect(642, 210, 75, 23));
        btnSalva = new QPushButton(ModificaRichiesta);
        btnSalva->setObjectName(QStringLiteral("btnSalva"));
        btnSalva->setGeometry(QRect(490, 210, 131, 25));
        grpDataRichiesta = new QGroupBox(ModificaRichiesta);
        grpDataRichiesta->setObjectName(QStringLiteral("grpDataRichiesta"));
        grpDataRichiesta->setGeometry(QRect(20, 10, 241, 91));
        dateEditRichiesta = new QDateEdit(grpDataRichiesta);
        dateEditRichiesta->setObjectName(QStringLiteral("dateEditRichiesta"));
        dateEditRichiesta->setGeometry(QRect(40, 40, 110, 26));
        grpCalendari = new QGroupBox(ModificaRichiesta);
        grpCalendari->setObjectName(QStringLiteral("grpCalendari"));
        grpCalendari->setGeometry(QRect(550, 10, 120, 91));
        comboBoxCalendari = new QComboBox(grpCalendari);
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->setObjectName(QStringLiteral("comboBoxCalendari"));
        comboBoxCalendari->setGeometry(QRect(30, 40, 41, 22));
        grpBuste = new QGroupBox(ModificaRichiesta);
        grpBuste->setObjectName(QStringLiteral("grpBuste"));
        grpBuste->setGeometry(QRect(270, 10, 271, 91));
        lblRosse = new QLabel(grpBuste);
        lblRosse->setObjectName(QStringLiteral("lblRosse"));
        lblRosse->setGeometry(QRect(20, 20, 51, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblRosse->setFont(font);
        lblBlu = new QLabel(grpBuste);
        lblBlu->setObjectName(QStringLiteral("lblBlu"));
        lblBlu->setGeometry(QRect(90, 20, 31, 21));
        lblBlu->setFont(font);
        lblVerdi = new QLabel(grpBuste);
        lblVerdi->setObjectName(QStringLiteral("lblVerdi"));
        lblVerdi->setGeometry(QRect(140, 20, 41, 21));
        lblVerdi->setFont(font);
        lblBianche = new QLabel(grpBuste);
        lblBianche->setObjectName(QStringLiteral("lblBianche"));
        lblBianche->setGeometry(QRect(200, 20, 61, 21));
        lblBianche->setFont(font);
        comboBoxRosse = new QComboBox(grpBuste);
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->setObjectName(QStringLiteral("comboBoxRosse"));
        comboBoxRosse->setGeometry(QRect(20, 40, 41, 22));
        comboBoxRosse->setStyleSheet(QStringLiteral("background-color: rgba(255, 0, 0, 50);"));
        comboBoxBlu = new QComboBox(grpBuste);
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->setObjectName(QStringLiteral("comboBoxBlu"));
        comboBoxBlu->setGeometry(QRect(80, 40, 41, 22));
        comboBoxBlu->setStyleSheet(QStringLiteral("background-color: rgba(9, 47, 252, 50);"));
        comboBoxVerdi = new QComboBox(grpBuste);
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->setObjectName(QStringLiteral("comboBoxVerdi"));
        comboBoxVerdi->setGeometry(QRect(140, 40, 41, 22));
        comboBoxVerdi->setStyleSheet(QStringLiteral("background-color: rgba(3, 251, 63, 50);"));
        comboBoxBianche = new QComboBox(grpBuste);
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->setObjectName(QStringLiteral("comboBoxBianche"));
        comboBoxBianche->setGeometry(QRect(200, 40, 41, 22));
        grpSecchi360 = new QGroupBox(ModificaRichiesta);
        grpSecchi360->setObjectName(QStringLiteral("grpSecchi360"));
        grpSecchi360->setGeometry(QRect(320, 110, 141, 91));
        comboBoxSecchiUmido360 = new QComboBox(grpSecchi360);
        comboBoxSecchiUmido360->addItem(QString());
        comboBoxSecchiUmido360->addItem(QString());
        comboBoxSecchiUmido360->addItem(QString());
        comboBoxSecchiUmido360->addItem(QString());
        comboBoxSecchiUmido360->addItem(QString());
        comboBoxSecchiUmido360->addItem(QString());
        comboBoxSecchiUmido360->setObjectName(QStringLiteral("comboBoxSecchiUmido360"));
        comboBoxSecchiUmido360->setGeometry(QRect(10, 40, 41, 22));
        comboBoxSecchiUmido360->setStyleSheet(QStringLiteral("background-color: rgba(193, 94, 7, 50);"));
        comboBoxSecchiVetro360 = new QComboBox(grpSecchi360);
        comboBoxSecchiVetro360->addItem(QString());
        comboBoxSecchiVetro360->addItem(QString());
        comboBoxSecchiVetro360->addItem(QString());
        comboBoxSecchiVetro360->addItem(QString());
        comboBoxSecchiVetro360->addItem(QString());
        comboBoxSecchiVetro360->addItem(QString());
        comboBoxSecchiVetro360->setObjectName(QStringLiteral("comboBoxSecchiVetro360"));
        comboBoxSecchiVetro360->setGeometry(QRect(80, 40, 41, 22));
        comboBoxSecchiVetro360->setStyleSheet(QStringLiteral("background-color: rgba(106, 144, 126, 50);"));
        lblSecchiUmido360 = new QLabel(grpSecchi360);
        lblSecchiUmido360->setObjectName(QStringLiteral("lblSecchiUmido360"));
        lblSecchiUmido360->setGeometry(QRect(10, 20, 51, 16));
        lblSecchiUmido360->setFont(font);
        lblSecchiVetro360 = new QLabel(grpSecchi360);
        lblSecchiVetro360->setObjectName(QStringLiteral("lblSecchiVetro360"));
        lblSecchiVetro360->setGeometry(QRect(80, 20, 51, 16));
        lblSecchiVetro360->setFont(font);
        grpMastelli = new QGroupBox(ModificaRichiesta);
        grpMastelli->setObjectName(QStringLiteral("grpMastelli"));
        grpMastelli->setGeometry(QRect(20, 110, 141, 91));
        lblUmidoMastelli = new QLabel(grpMastelli);
        lblUmidoMastelli->setObjectName(QStringLiteral("lblUmidoMastelli"));
        lblUmidoMastelli->setGeometry(QRect(10, 20, 51, 16));
        lblUmidoMastelli->setFont(font);
        comboBoxMastelliUmido = new QComboBox(grpMastelli);
        comboBoxMastelliUmido->addItem(QString());
        comboBoxMastelliUmido->addItem(QString());
        comboBoxMastelliUmido->addItem(QString());
        comboBoxMastelliUmido->addItem(QString());
        comboBoxMastelliUmido->addItem(QString());
        comboBoxMastelliUmido->addItem(QString());
        comboBoxMastelliUmido->setObjectName(QStringLiteral("comboBoxMastelliUmido"));
        comboBoxMastelliUmido->setGeometry(QRect(10, 40, 41, 22));
        comboBoxMastelliUmido->setStyleSheet(QStringLiteral("background-color: rgba(193, 94, 7, 50);"));
        lblVetroMastelli = new QLabel(grpMastelli);
        lblVetroMastelli->setObjectName(QStringLiteral("lblVetroMastelli"));
        lblVetroMastelli->setGeometry(QRect(80, 20, 41, 16));
        lblVetroMastelli->setFont(font);
        comboBoxMastelliVetro = new QComboBox(grpMastelli);
        comboBoxMastelliVetro->addItem(QString());
        comboBoxMastelliVetro->addItem(QString());
        comboBoxMastelliVetro->addItem(QString());
        comboBoxMastelliVetro->addItem(QString());
        comboBoxMastelliVetro->addItem(QString());
        comboBoxMastelliVetro->addItem(QString());
        comboBoxMastelliVetro->setObjectName(QStringLiteral("comboBoxMastelliVetro"));
        comboBoxMastelliVetro->setGeometry(QRect(80, 40, 41, 22));
        comboBoxMastelliVetro->setStyleSheet(QStringLiteral("background-color: rgba(106, 144, 126, 50);"));
        grpSecchi240 = new QGroupBox(ModificaRichiesta);
        grpSecchi240->setObjectName(QStringLiteral("grpSecchi240"));
        grpSecchi240->setGeometry(QRect(170, 110, 141, 91));
        comboBoxSecchiUmido240 = new QComboBox(grpSecchi240);
        comboBoxSecchiUmido240->addItem(QString());
        comboBoxSecchiUmido240->addItem(QString());
        comboBoxSecchiUmido240->addItem(QString());
        comboBoxSecchiUmido240->addItem(QString());
        comboBoxSecchiUmido240->addItem(QString());
        comboBoxSecchiUmido240->addItem(QString());
        comboBoxSecchiUmido240->setObjectName(QStringLiteral("comboBoxSecchiUmido240"));
        comboBoxSecchiUmido240->setGeometry(QRect(10, 40, 41, 22));
        comboBoxSecchiUmido240->setStyleSheet(QStringLiteral("background-color: rgba(193, 94, 7, 50);"));
        comboBoxSecchiVetro240 = new QComboBox(grpSecchi240);
        comboBoxSecchiVetro240->addItem(QString());
        comboBoxSecchiVetro240->addItem(QString());
        comboBoxSecchiVetro240->addItem(QString());
        comboBoxSecchiVetro240->addItem(QString());
        comboBoxSecchiVetro240->addItem(QString());
        comboBoxSecchiVetro240->addItem(QString());
        comboBoxSecchiVetro240->setObjectName(QStringLiteral("comboBoxSecchiVetro240"));
        comboBoxSecchiVetro240->setGeometry(QRect(80, 40, 41, 22));
        comboBoxSecchiVetro240->setStyleSheet(QStringLiteral("background-color: rgba(106, 144, 126, 50);"));
        lblSecchiUmido240 = new QLabel(grpSecchi240);
        lblSecchiUmido240->setObjectName(QStringLiteral("lblSecchiUmido240"));
        lblSecchiUmido240->setGeometry(QRect(10, 20, 51, 16));
        lblSecchiUmido240->setFont(font);
        lblSecchiVetro240 = new QLabel(grpSecchi240);
        lblSecchiVetro240->setObjectName(QStringLiteral("lblSecchiVetro240"));
        lblSecchiVetro240->setGeometry(QRect(80, 20, 51, 16));
        lblSecchiVetro240->setFont(font);

        retranslateUi(ModificaRichiesta);

        QMetaObject::connectSlotsByName(ModificaRichiesta);
    } // setupUi

    void retranslateUi(QDialog *ModificaRichiesta)
    {
        ModificaRichiesta->setWindowTitle(QApplication::translate("ModificaRichiesta", "Modifica Richiesta", nullptr));
        BtnMaterialeEsci->setText(QApplication::translate("ModificaRichiesta", "Esci", nullptr));
        btnSalva->setText(QApplication::translate("ModificaRichiesta", "Modifica richiesta", nullptr));
        grpDataRichiesta->setTitle(QApplication::translate("ModificaRichiesta", "Data Richiesta", nullptr));
        grpCalendari->setTitle(QApplication::translate("ModificaRichiesta", "Calendari", nullptr));
        comboBoxCalendari->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxCalendari->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxCalendari->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxCalendari->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxCalendari->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxCalendari->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        grpBuste->setTitle(QApplication::translate("ModificaRichiesta", "Buste", nullptr));
        lblRosse->setText(QApplication::translate("ModificaRichiesta", "Rosse", nullptr));
        lblBlu->setText(QApplication::translate("ModificaRichiesta", "Blu", nullptr));
        lblVerdi->setText(QApplication::translate("ModificaRichiesta", "Verdi", nullptr));
        lblBianche->setText(QApplication::translate("ModificaRichiesta", "Bianche", nullptr));
        comboBoxRosse->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxRosse->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxRosse->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxRosse->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxRosse->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxRosse->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        comboBoxBlu->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxBlu->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxBlu->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxBlu->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxBlu->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxBlu->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        comboBoxVerdi->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxVerdi->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxVerdi->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxVerdi->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxVerdi->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxVerdi->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        comboBoxBianche->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxBianche->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxBianche->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxBianche->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxBianche->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxBianche->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        grpSecchi360->setTitle(QApplication::translate("ModificaRichiesta", "Secchi 360 lt", nullptr));
        comboBoxSecchiUmido360->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxSecchiUmido360->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxSecchiUmido360->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxSecchiUmido360->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxSecchiUmido360->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxSecchiUmido360->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        comboBoxSecchiVetro360->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxSecchiVetro360->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxSecchiVetro360->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxSecchiVetro360->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxSecchiVetro360->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxSecchiVetro360->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        lblSecchiUmido360->setText(QApplication::translate("ModificaRichiesta", "Umido", nullptr));
        lblSecchiVetro360->setText(QApplication::translate("ModificaRichiesta", "Vetro", nullptr));
        grpMastelli->setTitle(QApplication::translate("ModificaRichiesta", "Mastelli", nullptr));
        lblUmidoMastelli->setText(QApplication::translate("ModificaRichiesta", "Umido", nullptr));
        comboBoxMastelliUmido->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxMastelliUmido->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxMastelliUmido->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxMastelliUmido->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxMastelliUmido->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxMastelliUmido->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        lblVetroMastelli->setText(QApplication::translate("ModificaRichiesta", "Vetro", nullptr));
        comboBoxMastelliVetro->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxMastelliVetro->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxMastelliVetro->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxMastelliVetro->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxMastelliVetro->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxMastelliVetro->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        grpSecchi240->setTitle(QApplication::translate("ModificaRichiesta", "Secchi 240 lt", nullptr));
        comboBoxSecchiUmido240->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxSecchiUmido240->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxSecchiUmido240->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxSecchiUmido240->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxSecchiUmido240->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxSecchiUmido240->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        comboBoxSecchiVetro240->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxSecchiVetro240->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxSecchiVetro240->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxSecchiVetro240->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxSecchiVetro240->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxSecchiVetro240->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        lblSecchiUmido240->setText(QApplication::translate("ModificaRichiesta", "Umido", nullptr));
        lblSecchiVetro240->setText(QApplication::translate("ModificaRichiesta", "Vetro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificaRichiesta: public Ui_ModificaRichiesta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARICHIESTA_H
