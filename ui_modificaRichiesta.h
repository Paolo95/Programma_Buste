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
    QGroupBox *grpMastelli;
    QLabel *lblUmido;
    QComboBox *comboBoxUmido;
    QLabel *lblVetro;
    QComboBox *comboBoxVetro;
    QGroupBox *grpBuste;
    QLabel *lblRosse;
    QLabel *lblBlu;
    QLabel *lblVerdi;
    QLabel *lblBianche;
    QComboBox *comboBoxRosse;
    QComboBox *comboBoxBlu;
    QComboBox *comboBoxVerdi;
    QComboBox *comboBoxBianche;
    QPushButton *BtnMaterialeEsci;
    QPushButton *btnSalva;
    QGroupBox *grpCalendari;
    QComboBox *comboBoxCalendari;
    QGroupBox *grpSecchi;
    QComboBox *comboBoxSecchi240;
    QComboBox *comboBoxSecchi1100;
    QLabel *lblSecchi240;
    QLabel *lblSecchi1100;
    QGroupBox *grpDataRichiesta;
    QDateEdit *dateEditRichiesta;

    void setupUi(QDialog *ModificaRichiesta)
    {
        if (ModificaRichiesta->objectName().isEmpty())
            ModificaRichiesta->setObjectName(QStringLiteral("ModificaRichiesta"));
        ModificaRichiesta->resize(753, 259);
        ModificaRichiesta->setMinimumSize(QSize(753, 259));
        ModificaRichiesta->setMaximumSize(QSize(753, 259));
        grpMastelli = new QGroupBox(ModificaRichiesta);
        grpMastelli->setObjectName(QStringLiteral("grpMastelli"));
        grpMastelli->setGeometry(QRect(410, 120, 141, 91));
        lblUmido = new QLabel(grpMastelli);
        lblUmido->setObjectName(QStringLiteral("lblUmido"));
        lblUmido->setGeometry(QRect(10, 30, 51, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblUmido->setFont(font);
        comboBoxUmido = new QComboBox(grpMastelli);
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->setObjectName(QStringLiteral("comboBoxUmido"));
        comboBoxUmido->setGeometry(QRect(10, 60, 41, 22));
        lblVetro = new QLabel(grpMastelli);
        lblVetro->setObjectName(QStringLiteral("lblVetro"));
        lblVetro->setGeometry(QRect(80, 30, 41, 16));
        lblVetro->setFont(font);
        comboBoxVetro = new QComboBox(grpMastelli);
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->setObjectName(QStringLiteral("comboBoxVetro"));
        comboBoxVetro->setGeometry(QRect(80, 60, 41, 22));
        grpBuste = new QGroupBox(ModificaRichiesta);
        grpBuste->setObjectName(QStringLiteral("grpBuste"));
        grpBuste->setGeometry(QRect(280, 10, 421, 101));
        lblRosse = new QLabel(grpBuste);
        lblRosse->setObjectName(QStringLiteral("lblRosse"));
        lblRosse->setGeometry(QRect(10, 30, 91, 16));
        lblRosse->setFont(font);
        lblBlu = new QLabel(grpBuste);
        lblBlu->setObjectName(QStringLiteral("lblBlu"));
        lblBlu->setGeometry(QRect(110, 30, 71, 16));
        lblBlu->setFont(font);
        lblVerdi = new QLabel(grpBuste);
        lblVerdi->setObjectName(QStringLiteral("lblVerdi"));
        lblVerdi->setGeometry(QRect(190, 30, 91, 16));
        lblVerdi->setFont(font);
        lblBianche = new QLabel(grpBuste);
        lblBianche->setObjectName(QStringLiteral("lblBianche"));
        lblBianche->setGeometry(QRect(300, 30, 101, 16));
        lblBianche->setFont(font);
        comboBoxRosse = new QComboBox(grpBuste);
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->setObjectName(QStringLiteral("comboBoxRosse"));
        comboBoxRosse->setGeometry(QRect(30, 60, 41, 22));
        comboBoxBlu = new QComboBox(grpBuste);
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->setObjectName(QStringLiteral("comboBoxBlu"));
        comboBoxBlu->setGeometry(QRect(120, 60, 41, 22));
        comboBoxVerdi = new QComboBox(grpBuste);
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->setObjectName(QStringLiteral("comboBoxVerdi"));
        comboBoxVerdi->setGeometry(QRect(210, 60, 41, 22));
        comboBoxBianche = new QComboBox(grpBuste);
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->setObjectName(QStringLiteral("comboBoxBianche"));
        comboBoxBianche->setGeometry(QRect(330, 60, 41, 22));
        BtnMaterialeEsci = new QPushButton(ModificaRichiesta);
        BtnMaterialeEsci->setObjectName(QStringLiteral("BtnMaterialeEsci"));
        BtnMaterialeEsci->setGeometry(QRect(662, 220, 75, 23));
        btnSalva = new QPushButton(ModificaRichiesta);
        btnSalva->setObjectName(QStringLiteral("btnSalva"));
        btnSalva->setGeometry(QRect(510, 220, 131, 25));
        grpCalendari = new QGroupBox(ModificaRichiesta);
        grpCalendari->setObjectName(QStringLiteral("grpCalendari"));
        grpCalendari->setGeometry(QRect(270, 120, 120, 91));
        comboBoxCalendari = new QComboBox(grpCalendari);
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->setObjectName(QStringLiteral("comboBoxCalendari"));
        comboBoxCalendari->setGeometry(QRect(30, 40, 41, 22));
        grpSecchi = new QGroupBox(ModificaRichiesta);
        grpSecchi->setObjectName(QStringLiteral("grpSecchi"));
        grpSecchi->setGeometry(QRect(20, 120, 231, 91));
        comboBoxSecchi240 = new QComboBox(grpSecchi);
        comboBoxSecchi240->addItem(QString());
        comboBoxSecchi240->addItem(QString());
        comboBoxSecchi240->addItem(QString());
        comboBoxSecchi240->addItem(QString());
        comboBoxSecchi240->addItem(QString());
        comboBoxSecchi240->addItem(QString());
        comboBoxSecchi240->setObjectName(QStringLiteral("comboBoxSecchi240"));
        comboBoxSecchi240->setGeometry(QRect(30, 60, 41, 22));
        comboBoxSecchi1100 = new QComboBox(grpSecchi);
        comboBoxSecchi1100->addItem(QString());
        comboBoxSecchi1100->addItem(QString());
        comboBoxSecchi1100->addItem(QString());
        comboBoxSecchi1100->addItem(QString());
        comboBoxSecchi1100->addItem(QString());
        comboBoxSecchi1100->addItem(QString());
        comboBoxSecchi1100->setObjectName(QStringLiteral("comboBoxSecchi1100"));
        comboBoxSecchi1100->setGeometry(QRect(150, 60, 41, 22));
        lblSecchi240 = new QLabel(grpSecchi);
        lblSecchi240->setObjectName(QStringLiteral("lblSecchi240"));
        lblSecchi240->setGeometry(QRect(10, 30, 91, 16));
        lblSecchi240->setFont(font);
        lblSecchi1100 = new QLabel(grpSecchi);
        lblSecchi1100->setObjectName(QStringLiteral("lblSecchi1100"));
        lblSecchi1100->setGeometry(QRect(120, 30, 101, 16));
        lblSecchi1100->setFont(font);
        grpDataRichiesta = new QGroupBox(ModificaRichiesta);
        grpDataRichiesta->setObjectName(QStringLiteral("grpDataRichiesta"));
        grpDataRichiesta->setGeometry(QRect(20, 10, 241, 101));
        dateEditRichiesta = new QDateEdit(grpDataRichiesta);
        dateEditRichiesta->setObjectName(QStringLiteral("dateEditRichiesta"));
        dateEditRichiesta->setGeometry(QRect(50, 60, 110, 26));

        retranslateUi(ModificaRichiesta);

        QMetaObject::connectSlotsByName(ModificaRichiesta);
    } // setupUi

    void retranslateUi(QDialog *ModificaRichiesta)
    {
        ModificaRichiesta->setWindowTitle(QApplication::translate("ModificaRichiesta", "Modifica Richiesta", nullptr));
        grpMastelli->setTitle(QApplication::translate("ModificaRichiesta", "Mastelli", nullptr));
        lblUmido->setText(QApplication::translate("ModificaRichiesta", "Umido", nullptr));
        comboBoxUmido->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxUmido->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxUmido->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxUmido->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxUmido->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxUmido->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        lblVetro->setText(QApplication::translate("ModificaRichiesta", "Vetro", nullptr));
        comboBoxVetro->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxVetro->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxVetro->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxVetro->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxVetro->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxVetro->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        grpBuste->setTitle(QApplication::translate("ModificaRichiesta", "Buste", nullptr));
        lblRosse->setText(QApplication::translate("ModificaRichiesta", "Buste Rosse", nullptr));
        lblBlu->setText(QApplication::translate("ModificaRichiesta", "Buste Blu", nullptr));
        lblVerdi->setText(QApplication::translate("ModificaRichiesta", "Buste Verdi", nullptr));
        lblBianche->setText(QApplication::translate("ModificaRichiesta", "Buste Bianche", nullptr));
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

        BtnMaterialeEsci->setText(QApplication::translate("ModificaRichiesta", "Esci", nullptr));
        btnSalva->setText(QApplication::translate("ModificaRichiesta", "Modifica richiesta", nullptr));
        grpCalendari->setTitle(QApplication::translate("ModificaRichiesta", "Calendari", nullptr));
        comboBoxCalendari->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxCalendari->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxCalendari->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxCalendari->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxCalendari->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxCalendari->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        grpSecchi->setTitle(QApplication::translate("ModificaRichiesta", "Richiesta secchi", nullptr));
        comboBoxSecchi240->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxSecchi240->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxSecchi240->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxSecchi240->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxSecchi240->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxSecchi240->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        comboBoxSecchi1100->setItemText(0, QApplication::translate("ModificaRichiesta", "0", nullptr));
        comboBoxSecchi1100->setItemText(1, QApplication::translate("ModificaRichiesta", "1", nullptr));
        comboBoxSecchi1100->setItemText(2, QApplication::translate("ModificaRichiesta", "2", nullptr));
        comboBoxSecchi1100->setItemText(3, QApplication::translate("ModificaRichiesta", "3", nullptr));
        comboBoxSecchi1100->setItemText(4, QApplication::translate("ModificaRichiesta", "4", nullptr));
        comboBoxSecchi1100->setItemText(5, QApplication::translate("ModificaRichiesta", "5", nullptr));

        lblSecchi240->setText(QApplication::translate("ModificaRichiesta", "Secchi 240 lt", nullptr));
        lblSecchi1100->setText(QApplication::translate("ModificaRichiesta", "Secchi 1100 lt", nullptr));
        grpDataRichiesta->setTitle(QApplication::translate("ModificaRichiesta", "Data Richiesta", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificaRichiesta: public Ui_ModificaRichiesta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICARICHIESTA_H
