/********************************************************************************
** Form generated from reading UI file 'consegnaMateriale.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSEGNAMATERIALE_H
#define UI_CONSEGNAMATERIALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Consegna_Materiale
{
public:
    QWidget *centralwidget;
    QPushButton *BtnMaterialeEsci;
    QTableView *tblRicerca;
    QGroupBox *grpRicercaCittadino;
    QPushButton *BtnCerca;
    QLineEdit *txtVia;
    QLabel *lblCognome;
    QLabel *lblNome;
    QLabel *lblVia;
    QLineEdit *txtCivico;
    QLabel *lblCivico;
    QLineEdit *txtCognome;
    QLineEdit *txtNome;
    QLabel *lblRagioneSociale;
    QLineEdit *txtRagioneSociale;
    QRadioButton *rBtnPrivato;
    QRadioButton *rBtnAzienda;
    QPushButton *BtnElenco;
    QGroupBox *grpBuste;
    QLabel *lblRosse;
    QLabel *lblBlu;
    QLabel *lblVerdi;
    QLabel *lblBianche;
    QComboBox *comboBoxRosse;
    QComboBox *comboBoxBlu;
    QComboBox *comboBoxVerdi;
    QComboBox *comboBoxBianche;
    QGroupBox *grpCalendari;
    QComboBox *comboBoxCalendari;
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
    QLabel *lblUltimaConsegna;
    QLabel *lblDataUltimaRichiestaDb;
    QCommandLinkButton *cmdLinkBtnVerifica;
    QPushButton *btnSalva;
    QGroupBox *grpSecchi360;
    QComboBox *comboBoxSecchiUmido360;
    QComboBox *comboBoxSecchiVetro360;
    QLabel *lblSecchiUmido360;
    QLabel *lblSecchiVetro360;

    void setupUi(QMainWindow *Consegna_Materiale)
    {
        if (Consegna_Materiale->objectName().isEmpty())
            Consegna_Materiale->setObjectName(QStringLiteral("Consegna_Materiale"));
        Consegna_Materiale->resize(800, 600);
        Consegna_Materiale->setMinimumSize(QSize(800, 600));
        Consegna_Materiale->setMaximumSize(QSize(800, 600));
        centralwidget = new QWidget(Consegna_Materiale);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        BtnMaterialeEsci = new QPushButton(centralwidget);
        BtnMaterialeEsci->setObjectName(QStringLiteral("BtnMaterialeEsci"));
        BtnMaterialeEsci->setGeometry(QRect(690, 540, 75, 23));
        tblRicerca = new QTableView(centralwidget);
        tblRicerca->setObjectName(QStringLiteral("tblRicerca"));
        tblRicerca->setGeometry(QRect(10, 180, 781, 111));
        tblRicerca->setSelectionMode(QAbstractItemView::SingleSelection);
        tblRicerca->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblRicerca->setGridStyle(Qt::SolidLine);
        tblRicerca->verticalHeader()->setVisible(false);
        grpRicercaCittadino = new QGroupBox(centralwidget);
        grpRicercaCittadino->setObjectName(QStringLiteral("grpRicercaCittadino"));
        grpRicercaCittadino->setGeometry(QRect(10, 10, 611, 161));
        BtnCerca = new QPushButton(grpRicercaCittadino);
        BtnCerca->setObjectName(QStringLiteral("BtnCerca"));
        BtnCerca->setGeometry(QRect(510, 130, 75, 23));
        txtVia = new QLineEdit(grpRicercaCittadino);
        txtVia->setObjectName(QStringLiteral("txtVia"));
        txtVia->setGeometry(QRect(120, 100, 211, 20));
        lblCognome = new QLabel(grpRicercaCittadino);
        lblCognome->setObjectName(QStringLiteral("lblCognome"));
        lblCognome->setGeometry(QRect(10, 70, 81, 21));
        lblNome = new QLabel(grpRicercaCittadino);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(340, 70, 41, 16));
        lblVia = new QLabel(grpRicercaCittadino);
        lblVia->setObjectName(QStringLiteral("lblVia"));
        lblVia->setGeometry(QRect(10, 100, 61, 16));
        txtCivico = new QLineEdit(grpRicercaCittadino);
        txtCivico->setObjectName(QStringLiteral("txtCivico"));
        txtCivico->setGeometry(QRect(390, 100, 31, 20));
        lblCivico = new QLabel(grpRicercaCittadino);
        lblCivico->setObjectName(QStringLiteral("lblCivico"));
        lblCivico->setGeometry(QRect(340, 100, 21, 16));
        txtCognome = new QLineEdit(grpRicercaCittadino);
        txtCognome->setObjectName(QStringLiteral("txtCognome"));
        txtCognome->setGeometry(QRect(120, 70, 211, 20));
        txtNome = new QLineEdit(grpRicercaCittadino);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(390, 70, 211, 20));
        lblRagioneSociale = new QLabel(grpRicercaCittadino);
        lblRagioneSociale->setObjectName(QStringLiteral("lblRagioneSociale"));
        lblRagioneSociale->setGeometry(QRect(10, 30, 111, 41));
        txtRagioneSociale = new QLineEdit(grpRicercaCittadino);
        txtRagioneSociale->setObjectName(QStringLiteral("txtRagioneSociale"));
        txtRagioneSociale->setGeometry(QRect(120, 40, 211, 20));
        rBtnPrivato = new QRadioButton(grpRicercaCittadino);
        rBtnPrivato->setObjectName(QStringLiteral("rBtnPrivato"));
        rBtnPrivato->setGeometry(QRect(390, 30, 82, 17));
        rBtnAzienda = new QRadioButton(grpRicercaCittadino);
        rBtnAzienda->setObjectName(QStringLiteral("rBtnAzienda"));
        rBtnAzienda->setGeometry(QRect(510, 30, 82, 17));
        BtnElenco = new QPushButton(centralwidget);
        BtnElenco->setObjectName(QStringLiteral("BtnElenco"));
        BtnElenco->setGeometry(QRect(634, 40, 121, 51));
        grpBuste = new QGroupBox(centralwidget);
        grpBuste->setObjectName(QStringLiteral("grpBuste"));
        grpBuste->setGeometry(QRect(10, 360, 271, 91));
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
        grpCalendari = new QGroupBox(centralwidget);
        grpCalendari->setObjectName(QStringLiteral("grpCalendari"));
        grpCalendari->setGeometry(QRect(290, 360, 120, 91));
        comboBoxCalendari = new QComboBox(grpCalendari);
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->addItem(QString());
        comboBoxCalendari->setObjectName(QStringLiteral("comboBoxCalendari"));
        comboBoxCalendari->setGeometry(QRect(30, 40, 41, 22));
        grpMastelli = new QGroupBox(centralwidget);
        grpMastelli->setObjectName(QStringLiteral("grpMastelli"));
        grpMastelli->setGeometry(QRect(430, 360, 141, 91));
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
        grpSecchi240 = new QGroupBox(centralwidget);
        grpSecchi240->setObjectName(QStringLiteral("grpSecchi240"));
        grpSecchi240->setGeometry(QRect(580, 360, 141, 91));
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
        lblUltimaConsegna = new QLabel(centralwidget);
        lblUltimaConsegna->setObjectName(QStringLiteral("lblUltimaConsegna"));
        lblUltimaConsegna->setGeometry(QRect(10, 310, 171, 21));
        lblUltimaConsegna->setFont(font);
        lblDataUltimaRichiestaDb = new QLabel(centralwidget);
        lblDataUltimaRichiestaDb->setObjectName(QStringLiteral("lblDataUltimaRichiestaDb"));
        lblDataUltimaRichiestaDb->setGeometry(QRect(180, 310, 131, 21));
        lblDataUltimaRichiestaDb->setFont(font);
        cmdLinkBtnVerifica = new QCommandLinkButton(centralwidget);
        cmdLinkBtnVerifica->setObjectName(QStringLiteral("cmdLinkBtnVerifica"));
        cmdLinkBtnVerifica->setGeometry(QRect(690, 300, 91, 41));
        btnSalva = new QPushButton(centralwidget);
        btnSalva->setObjectName(QStringLiteral("btnSalva"));
        btnSalva->setGeometry(QRect(570, 540, 111, 25));
        grpSecchi360 = new QGroupBox(centralwidget);
        grpSecchi360->setObjectName(QStringLiteral("grpSecchi360"));
        grpSecchi360->setGeometry(QRect(10, 460, 141, 91));
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
        Consegna_Materiale->setCentralWidget(centralwidget);

        retranslateUi(Consegna_Materiale);

        QMetaObject::connectSlotsByName(Consegna_Materiale);
    } // setupUi

    void retranslateUi(QMainWindow *Consegna_Materiale)
    {
        Consegna_Materiale->setWindowTitle(QApplication::translate("Consegna_Materiale", "Gestione Materiale", nullptr));
        BtnMaterialeEsci->setText(QApplication::translate("Consegna_Materiale", "Esci", nullptr));
        grpRicercaCittadino->setTitle(QApplication::translate("Consegna_Materiale", "Ricerca Cittadino", nullptr));
        BtnCerca->setText(QApplication::translate("Consegna_Materiale", "Cerca", nullptr));
        lblCognome->setText(QApplication::translate("Consegna_Materiale", "Cognome", nullptr));
        lblNome->setText(QApplication::translate("Consegna_Materiale", "Nome", nullptr));
        lblVia->setText(QApplication::translate("Consegna_Materiale", "Via/Viale", nullptr));
        lblCivico->setText(QApplication::translate("Consegna_Materiale", "N\302\260", nullptr));
        lblRagioneSociale->setText(QApplication::translate("Consegna_Materiale", "Ragione sociale", nullptr));
        rBtnPrivato->setText(QApplication::translate("Consegna_Materiale", "Privato", nullptr));
        rBtnAzienda->setText(QApplication::translate("Consegna_Materiale", "Azienda", nullptr));
        BtnElenco->setText(QApplication::translate("Consegna_Materiale", "Elenco completo", nullptr));
        grpBuste->setTitle(QApplication::translate("Consegna_Materiale", "Buste", nullptr));
        lblRosse->setText(QApplication::translate("Consegna_Materiale", "Rosse", nullptr));
        lblBlu->setText(QApplication::translate("Consegna_Materiale", "Blu", nullptr));
        lblVerdi->setText(QApplication::translate("Consegna_Materiale", "Verdi", nullptr));
        lblBianche->setText(QApplication::translate("Consegna_Materiale", "Bianche", nullptr));
        comboBoxRosse->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxRosse->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxRosse->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxRosse->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxRosse->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxRosse->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        comboBoxBlu->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxBlu->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxBlu->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxBlu->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxBlu->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxBlu->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        comboBoxVerdi->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxVerdi->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxVerdi->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxVerdi->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxVerdi->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxVerdi->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        comboBoxBianche->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxBianche->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxBianche->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxBianche->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxBianche->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxBianche->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        grpCalendari->setTitle(QApplication::translate("Consegna_Materiale", "Calendari", nullptr));
        comboBoxCalendari->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxCalendari->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxCalendari->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxCalendari->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxCalendari->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxCalendari->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        grpMastelli->setTitle(QApplication::translate("Consegna_Materiale", "Mastelli", nullptr));
        lblUmidoMastelli->setText(QApplication::translate("Consegna_Materiale", "Umido", nullptr));
        comboBoxMastelliUmido->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxMastelliUmido->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxMastelliUmido->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxMastelliUmido->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxMastelliUmido->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxMastelliUmido->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        lblVetroMastelli->setText(QApplication::translate("Consegna_Materiale", "Vetro", nullptr));
        comboBoxMastelliVetro->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxMastelliVetro->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxMastelliVetro->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxMastelliVetro->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxMastelliVetro->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxMastelliVetro->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        grpSecchi240->setTitle(QApplication::translate("Consegna_Materiale", "Secchi 240 lt", nullptr));
        comboBoxSecchiUmido240->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxSecchiUmido240->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxSecchiUmido240->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxSecchiUmido240->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxSecchiUmido240->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxSecchiUmido240->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        comboBoxSecchiVetro240->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxSecchiVetro240->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxSecchiVetro240->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxSecchiVetro240->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxSecchiVetro240->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxSecchiVetro240->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        lblSecchiUmido240->setText(QApplication::translate("Consegna_Materiale", "Umido", nullptr));
        lblSecchiVetro240->setText(QApplication::translate("Consegna_Materiale", "Vetro", nullptr));
        lblUltimaConsegna->setText(QApplication::translate("Consegna_Materiale", "Data ultima consegna :", nullptr));
        lblDataUltimaRichiestaDb->setText(QString());
        cmdLinkBtnVerifica->setText(QApplication::translate("Consegna_Materiale", "Verifica", nullptr));
        btnSalva->setText(QApplication::translate("Consegna_Materiale", "Salva richiesta", nullptr));
        grpSecchi360->setTitle(QApplication::translate("Consegna_Materiale", "Secchi 360 lt", nullptr));
        comboBoxSecchiUmido360->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxSecchiUmido360->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxSecchiUmido360->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxSecchiUmido360->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxSecchiUmido360->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxSecchiUmido360->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        comboBoxSecchiVetro360->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxSecchiVetro360->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxSecchiVetro360->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxSecchiVetro360->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxSecchiVetro360->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxSecchiVetro360->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        lblSecchiUmido360->setText(QApplication::translate("Consegna_Materiale", "Umido", nullptr));
        lblSecchiVetro360->setText(QApplication::translate("Consegna_Materiale", "Vetro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consegna_Materiale: public Ui_Consegna_Materiale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSEGNAMATERIALE_H
