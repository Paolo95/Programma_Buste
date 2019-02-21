/********************************************************************************
** Form generated from reading UI file 'centroFiera.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTROFIERA_H
#define UI_CENTROFIERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CentroFiera
{
public:
    QWidget *centralwidget;
    QGroupBox *grpResoconto;
    QLabel *lblUltimoArrivo;
    QLabel *lblDataArrivo;
    QGroupBox *grpBuste;
    QLabel *lblRosse;
    QLabel *lblBlu;
    QLabel *lblVerdi;
    QLabel *lblBianche;
    QLineEdit *txtRosse;
    QLineEdit *txtBlu;
    QLineEdit *txtVerdi;
    QLineEdit *txtBianche;
    QGroupBox *grpMastelli;
    QLabel *lblMastelliUmido;
    QLabel *lblMastelliVetro;
    QLineEdit *txtMastelliUmido;
    QLineEdit *txtMastelliVetro;
    QGroupBox *grpCalendari;
    QLineEdit *txtCalendari;
    QGroupBox *grpSecchi240;
    QLabel *lblSecchiUmido240;
    QLabel *lblSecchiVetro240;
    QLineEdit *txtSecchiUmido240;
    QLineEdit *txtSecchiVetro240;
    QGroupBox *grpSecchi360;
    QLabel *lblSecchiUmido360;
    QLabel *lblSecchiVetro360;
    QLineEdit *txtSecchiUmido360;
    QLineEdit *txtSecchiVetro360;
    QPushButton *btnEsci;
    QGroupBox *grpArrivo;
    QPushButton *btnAggiungi;
    QTableView *tblArrivo;
    QPushButton *btnElimina;
    QCommandLinkButton *commandLinkBtnConferma;
    QLabel *lblCategoria;
    QLabel *lblTipologia;
    QLabel *lblDimensione;
    QComboBox *comboBoxCategoria;
    QComboBox *comboBoxTipologia;
    QComboBox *comboBoxDimensione;
    QLabel *lblQuantita;
    QSpinBox *spinBoxQuantita;
    QLabel *lblData;
    QDateEdit *dateEditArrivo;
    QPushButton *btnPulisci;
    QPushButton *btnVaiArrivi;

    void setupUi(QMainWindow *CentroFiera)
    {
        if (CentroFiera->objectName().isEmpty())
            CentroFiera->setObjectName(QStringLiteral("CentroFiera"));
        CentroFiera->resize(800, 600);
        centralwidget = new QWidget(CentroFiera);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        grpResoconto = new QGroupBox(centralwidget);
        grpResoconto->setObjectName(QStringLiteral("grpResoconto"));
        grpResoconto->setGeometry(QRect(10, 10, 771, 251));
        lblUltimoArrivo = new QLabel(grpResoconto);
        lblUltimoArrivo->setObjectName(QStringLiteral("lblUltimoArrivo"));
        lblUltimoArrivo->setGeometry(QRect(540, 30, 101, 21));
        lblDataArrivo = new QLabel(grpResoconto);
        lblDataArrivo->setObjectName(QStringLiteral("lblDataArrivo"));
        lblDataArrivo->setGeometry(QRect(640, 30, 121, 21));
        grpBuste = new QGroupBox(grpResoconto);
        grpBuste->setObjectName(QStringLiteral("grpBuste"));
        grpBuste->setGeometry(QRect(10, 30, 371, 91));
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
        txtRosse->setAlignment(Qt::AlignCenter);
        txtRosse->setReadOnly(true);
        txtBlu = new QLineEdit(grpBuste);
        txtBlu->setObjectName(QStringLiteral("txtBlu"));
        txtBlu->setGeometry(QRect(100, 50, 81, 21));
        txtBlu->setStyleSheet(QStringLiteral("background-color: rgba(9, 47, 252, 50);"));
        txtBlu->setAlignment(Qt::AlignCenter);
        txtBlu->setReadOnly(true);
        txtVerdi = new QLineEdit(grpBuste);
        txtVerdi->setObjectName(QStringLiteral("txtVerdi"));
        txtVerdi->setGeometry(QRect(190, 50, 81, 21));
        txtVerdi->setStyleSheet(QStringLiteral("background-color: rgba(3, 251, 63, 50);"));
        txtVerdi->setAlignment(Qt::AlignCenter);
        txtVerdi->setReadOnly(true);
        txtBianche = new QLineEdit(grpBuste);
        txtBianche->setObjectName(QStringLiteral("txtBianche"));
        txtBianche->setGeometry(QRect(280, 50, 81, 21));
        txtBianche->setAlignment(Qt::AlignCenter);
        txtBianche->setReadOnly(true);
        grpMastelli = new QGroupBox(grpResoconto);
        grpMastelli->setObjectName(QStringLiteral("grpMastelli"));
        grpMastelli->setGeometry(QRect(10, 140, 141, 91));
        lblMastelliUmido = new QLabel(grpMastelli);
        lblMastelliUmido->setObjectName(QStringLiteral("lblMastelliUmido"));
        lblMastelliUmido->setGeometry(QRect(10, 30, 51, 16));
        lblMastelliUmido->setFont(font);
        lblMastelliVetro = new QLabel(grpMastelli);
        lblMastelliVetro->setObjectName(QStringLiteral("lblMastelliVetro"));
        lblMastelliVetro->setGeometry(QRect(80, 30, 41, 16));
        lblMastelliVetro->setFont(font);
        txtMastelliUmido = new QLineEdit(grpMastelli);
        txtMastelliUmido->setObjectName(QStringLiteral("txtMastelliUmido"));
        txtMastelliUmido->setGeometry(QRect(10, 50, 51, 21));
        txtMastelliUmido->setStyleSheet(QStringLiteral(""));
        txtMastelliUmido->setAlignment(Qt::AlignCenter);
        txtMastelliUmido->setReadOnly(true);
        txtMastelliVetro = new QLineEdit(grpMastelli);
        txtMastelliVetro->setObjectName(QStringLiteral("txtMastelliVetro"));
        txtMastelliVetro->setGeometry(QRect(80, 50, 51, 21));
        txtMastelliVetro->setStyleSheet(QStringLiteral(""));
        txtMastelliVetro->setAlignment(Qt::AlignCenter);
        txtMastelliVetro->setReadOnly(true);
        grpCalendari = new QGroupBox(grpResoconto);
        grpCalendari->setObjectName(QStringLiteral("grpCalendari"));
        grpCalendari->setGeometry(QRect(400, 30, 120, 91));
        txtCalendari = new QLineEdit(grpCalendari);
        txtCalendari->setObjectName(QStringLiteral("txtCalendari"));
        txtCalendari->setGeometry(QRect(30, 50, 51, 21));
        txtCalendari->setStyleSheet(QStringLiteral(""));
        txtCalendari->setAlignment(Qt::AlignCenter);
        txtCalendari->setReadOnly(true);
        grpSecchi240 = new QGroupBox(grpResoconto);
        grpSecchi240->setObjectName(QStringLiteral("grpSecchi240"));
        grpSecchi240->setGeometry(QRect(170, 140, 141, 91));
        lblSecchiUmido240 = new QLabel(grpSecchi240);
        lblSecchiUmido240->setObjectName(QStringLiteral("lblSecchiUmido240"));
        lblSecchiUmido240->setGeometry(QRect(10, 30, 51, 16));
        lblSecchiUmido240->setFont(font);
        lblSecchiVetro240 = new QLabel(grpSecchi240);
        lblSecchiVetro240->setObjectName(QStringLiteral("lblSecchiVetro240"));
        lblSecchiVetro240->setGeometry(QRect(80, 30, 51, 16));
        lblSecchiVetro240->setFont(font);
        txtSecchiUmido240 = new QLineEdit(grpSecchi240);
        txtSecchiUmido240->setObjectName(QStringLiteral("txtSecchiUmido240"));
        txtSecchiUmido240->setGeometry(QRect(10, 50, 51, 21));
        txtSecchiUmido240->setStyleSheet(QStringLiteral(""));
        txtSecchiUmido240->setAlignment(Qt::AlignCenter);
        txtSecchiUmido240->setReadOnly(true);
        txtSecchiVetro240 = new QLineEdit(grpSecchi240);
        txtSecchiVetro240->setObjectName(QStringLiteral("txtSecchiVetro240"));
        txtSecchiVetro240->setGeometry(QRect(80, 50, 51, 21));
        txtSecchiVetro240->setStyleSheet(QStringLiteral(""));
        txtSecchiVetro240->setAlignment(Qt::AlignCenter);
        txtSecchiVetro240->setReadOnly(true);
        grpSecchi360 = new QGroupBox(grpResoconto);
        grpSecchi360->setObjectName(QStringLiteral("grpSecchi360"));
        grpSecchi360->setGeometry(QRect(330, 140, 141, 91));
        lblSecchiUmido360 = new QLabel(grpSecchi360);
        lblSecchiUmido360->setObjectName(QStringLiteral("lblSecchiUmido360"));
        lblSecchiUmido360->setGeometry(QRect(10, 30, 51, 16));
        lblSecchiUmido360->setFont(font);
        lblSecchiVetro360 = new QLabel(grpSecchi360);
        lblSecchiVetro360->setObjectName(QStringLiteral("lblSecchiVetro360"));
        lblSecchiVetro360->setGeometry(QRect(80, 30, 51, 16));
        lblSecchiVetro360->setFont(font);
        txtSecchiUmido360 = new QLineEdit(grpSecchi360);
        txtSecchiUmido360->setObjectName(QStringLiteral("txtSecchiUmido360"));
        txtSecchiUmido360->setGeometry(QRect(10, 50, 51, 21));
        txtSecchiUmido360->setStyleSheet(QStringLiteral(""));
        txtSecchiUmido360->setAlignment(Qt::AlignCenter);
        txtSecchiUmido360->setReadOnly(true);
        txtSecchiVetro360 = new QLineEdit(grpSecchi360);
        txtSecchiVetro360->setObjectName(QStringLiteral("txtSecchiVetro360"));
        txtSecchiVetro360->setGeometry(QRect(80, 50, 51, 21));
        txtSecchiVetro360->setStyleSheet(QStringLiteral(""));
        txtSecchiVetro360->setAlignment(Qt::AlignCenter);
        txtSecchiVetro360->setReadOnly(true);
        btnEsci = new QPushButton(centralwidget);
        btnEsci->setObjectName(QStringLiteral("btnEsci"));
        btnEsci->setGeometry(QRect(690, 550, 89, 25));
        grpArrivo = new QGroupBox(centralwidget);
        grpArrivo->setObjectName(QStringLiteral("grpArrivo"));
        grpArrivo->setGeometry(QRect(10, 280, 641, 301));
        btnAggiungi = new QPushButton(grpArrivo);
        btnAggiungi->setObjectName(QStringLiteral("btnAggiungi"));
        btnAggiungi->setGeometry(QRect(10, 260, 81, 31));
        tblArrivo = new QTableView(grpArrivo);
        tblArrivo->setObjectName(QStringLiteral("tblArrivo"));
        tblArrivo->setGeometry(QRect(10, 120, 451, 121));
        tblArrivo->setSelectionMode(QAbstractItemView::SingleSelection);
        tblArrivo->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblArrivo->setGridStyle(Qt::SolidLine);
        tblArrivo->verticalHeader()->setVisible(false);
        btnElimina = new QPushButton(grpArrivo);
        btnElimina->setObjectName(QStringLiteral("btnElimina"));
        btnElimina->setGeometry(QRect(100, 260, 91, 31));
        commandLinkBtnConferma = new QCommandLinkButton(grpArrivo);
        commandLinkBtnConferma->setObjectName(QStringLiteral("commandLinkBtnConferma"));
        commandLinkBtnConferma->setGeometry(QRect(320, 260, 141, 31));
        lblCategoria = new QLabel(grpArrivo);
        lblCategoria->setObjectName(QStringLiteral("lblCategoria"));
        lblCategoria->setGeometry(QRect(250, 30, 71, 17));
        lblTipologia = new QLabel(grpArrivo);
        lblTipologia->setObjectName(QStringLiteral("lblTipologia"));
        lblTipologia->setGeometry(QRect(380, 30, 67, 17));
        lblDimensione = new QLabel(grpArrivo);
        lblDimensione->setObjectName(QStringLiteral("lblDimensione"));
        lblDimensione->setGeometry(QRect(490, 30, 91, 17));
        comboBoxCategoria = new QComboBox(grpArrivo);
        comboBoxCategoria->setObjectName(QStringLiteral("comboBoxCategoria"));
        comboBoxCategoria->setGeometry(QRect(230, 60, 121, 25));
        comboBoxTipologia = new QComboBox(grpArrivo);
        comboBoxTipologia->setObjectName(QStringLiteral("comboBoxTipologia"));
        comboBoxTipologia->setGeometry(QRect(360, 60, 121, 25));
        comboBoxDimensione = new QComboBox(grpArrivo);
        comboBoxDimensione->setObjectName(QStringLiteral("comboBoxDimensione"));
        comboBoxDimensione->setGeometry(QRect(490, 60, 81, 25));
        lblQuantita = new QLabel(grpArrivo);
        lblQuantita->setObjectName(QStringLiteral("lblQuantita"));
        lblQuantita->setGeometry(QRect(140, 30, 71, 17));
        spinBoxQuantita = new QSpinBox(grpArrivo);
        spinBoxQuantita->setObjectName(QStringLiteral("spinBoxQuantita"));
        spinBoxQuantita->setGeometry(QRect(150, 60, 48, 26));
        lblData = new QLabel(grpArrivo);
        lblData->setObjectName(QStringLiteral("lblData"));
        lblData->setGeometry(QRect(20, 30, 81, 17));
        dateEditArrivo = new QDateEdit(grpArrivo);
        dateEditArrivo->setObjectName(QStringLiteral("dateEditArrivo"));
        dateEditArrivo->setGeometry(QRect(10, 60, 110, 26));
        btnPulisci = new QPushButton(grpArrivo);
        btnPulisci->setObjectName(QStringLiteral("btnPulisci"));
        btnPulisci->setGeometry(QRect(490, 140, 141, 25));
        btnVaiArrivi = new QPushButton(grpArrivo);
        btnVaiArrivi->setObjectName(QStringLiteral("btnVaiArrivi"));
        btnVaiArrivi->setGeometry(QRect(490, 180, 141, 41));
        CentroFiera->setCentralWidget(centralwidget);

        retranslateUi(CentroFiera);

        QMetaObject::connectSlotsByName(CentroFiera);
    } // setupUi

    void retranslateUi(QMainWindow *CentroFiera)
    {
        CentroFiera->setWindowTitle(QApplication::translate("CentroFiera", "Centro Fiera", nullptr));
        grpResoconto->setTitle(QApplication::translate("CentroFiera", "Resoconto dei materiali", nullptr));
        lblUltimoArrivo->setText(QApplication::translate("CentroFiera", "Ultimo arrivo:", nullptr));
        lblDataArrivo->setText(QString());
        grpBuste->setTitle(QApplication::translate("CentroFiera", "Buste", nullptr));
        lblRosse->setText(QApplication::translate("CentroFiera", "Rosse", nullptr));
        lblBlu->setText(QApplication::translate("CentroFiera", "Blu", nullptr));
        lblVerdi->setText(QApplication::translate("CentroFiera", "Verdi", nullptr));
        lblBianche->setText(QApplication::translate("CentroFiera", "Bianche", nullptr));
        grpMastelli->setTitle(QApplication::translate("CentroFiera", "Mastelli", nullptr));
        lblMastelliUmido->setText(QApplication::translate("CentroFiera", "Umido", nullptr));
        lblMastelliVetro->setText(QApplication::translate("CentroFiera", "Vetro", nullptr));
        grpCalendari->setTitle(QApplication::translate("CentroFiera", "Calendari", nullptr));
        grpSecchi240->setTitle(QApplication::translate("CentroFiera", "Secchi 240 lt", nullptr));
        lblSecchiUmido240->setText(QApplication::translate("CentroFiera", "Umido", nullptr));
        lblSecchiVetro240->setText(QApplication::translate("CentroFiera", "Vetro", nullptr));
        grpSecchi360->setTitle(QApplication::translate("CentroFiera", "Secchi 360 lt", nullptr));
        lblSecchiUmido360->setText(QApplication::translate("CentroFiera", "Umido", nullptr));
        lblSecchiVetro360->setText(QApplication::translate("CentroFiera", "Vetro", nullptr));
        btnEsci->setText(QApplication::translate("CentroFiera", "Esci", nullptr));
        grpArrivo->setTitle(QApplication::translate("CentroFiera", "Gestione Arrivo", nullptr));
        btnAggiungi->setText(QApplication::translate("CentroFiera", "Aggiungi", nullptr));
        btnElimina->setText(QApplication::translate("CentroFiera", "Elimina", nullptr));
        commandLinkBtnConferma->setText(QApplication::translate("CentroFiera", "Conferma Arrivo", nullptr));
        lblCategoria->setText(QApplication::translate("CentroFiera", "Categoria", nullptr));
        lblTipologia->setText(QApplication::translate("CentroFiera", "Tipologia", nullptr));
        lblDimensione->setText(QApplication::translate("CentroFiera", "Dimensione", nullptr));
        lblQuantita->setText(QApplication::translate("CentroFiera", "Quantit\303\240", nullptr));
        lblData->setText(QApplication::translate("CentroFiera", "Data Arrivo", nullptr));
        btnPulisci->setText(QApplication::translate("CentroFiera", "Pulisci", nullptr));
        btnVaiArrivi->setText(QApplication::translate("CentroFiera", "Vai a gestione arrivi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CentroFiera: public Ui_CentroFiera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTROFIERA_H
