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
#include <QtWidgets/QMenuBar>
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
    QLabel *lblUmido;
    QComboBox *comboBoxUmido;
    QLabel *lblVetro;
    QComboBox *comboBoxVetro;
    QGroupBox *grpSecchi;
    QComboBox *comboBoxSecchi;
    QLabel *lblUltimaConsegna;
    QLabel *lblDataUltimaRichiestaDb;
    QCommandLinkButton *cmdLinkBtnVerifica;
    QMenuBar *menubar;

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
        BtnMaterialeEsci->setGeometry(QRect(700, 540, 75, 23));
        tblRicerca = new QTableView(centralwidget);
        tblRicerca->setObjectName(QStringLiteral("tblRicerca"));
        tblRicerca->setGeometry(QRect(10, 180, 781, 111));
        tblRicerca->setGridStyle(Qt::SolidLine);
        tblRicerca->verticalHeader()->setVisible(true);
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
        lblRagioneSociale->setGeometry(QRect(10, 40, 111, 16));
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
        grpBuste->setGeometry(QRect(10, 360, 421, 91));
        lblRosse = new QLabel(grpBuste);
        lblRosse->setObjectName(QStringLiteral("lblRosse"));
        lblRosse->setGeometry(QRect(10, 20, 91, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lblRosse->setFont(font);
        lblBlu = new QLabel(grpBuste);
        lblBlu->setObjectName(QStringLiteral("lblBlu"));
        lblBlu->setGeometry(QRect(110, 20, 71, 16));
        lblBlu->setFont(font);
        lblVerdi = new QLabel(grpBuste);
        lblVerdi->setObjectName(QStringLiteral("lblVerdi"));
        lblVerdi->setGeometry(QRect(190, 20, 91, 16));
        lblVerdi->setFont(font);
        lblBianche = new QLabel(grpBuste);
        lblBianche->setObjectName(QStringLiteral("lblBianche"));
        lblBianche->setGeometry(QRect(300, 20, 101, 16));
        lblBianche->setFont(font);
        comboBoxRosse = new QComboBox(grpBuste);
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->addItem(QString());
        comboBoxRosse->setObjectName(QStringLiteral("comboBoxRosse"));
        comboBoxRosse->setGeometry(QRect(30, 40, 41, 22));
        comboBoxBlu = new QComboBox(grpBuste);
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->addItem(QString());
        comboBoxBlu->setObjectName(QStringLiteral("comboBoxBlu"));
        comboBoxBlu->setGeometry(QRect(120, 40, 41, 22));
        comboBoxVerdi = new QComboBox(grpBuste);
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->addItem(QString());
        comboBoxVerdi->setObjectName(QStringLiteral("comboBoxVerdi"));
        comboBoxVerdi->setGeometry(QRect(210, 40, 41, 22));
        comboBoxBianche = new QComboBox(grpBuste);
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->addItem(QString());
        comboBoxBianche->setObjectName(QStringLiteral("comboBoxBianche"));
        comboBoxBianche->setGeometry(QRect(330, 40, 41, 22));
        grpCalendari = new QGroupBox(centralwidget);
        grpCalendari->setObjectName(QStringLiteral("grpCalendari"));
        grpCalendari->setGeometry(QRect(450, 360, 120, 91));
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
        grpMastelli->setGeometry(QRect(590, 360, 141, 91));
        lblUmido = new QLabel(grpMastelli);
        lblUmido->setObjectName(QStringLiteral("lblUmido"));
        lblUmido->setGeometry(QRect(10, 20, 51, 16));
        lblUmido->setFont(font);
        comboBoxUmido = new QComboBox(grpMastelli);
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->addItem(QString());
        comboBoxUmido->setObjectName(QStringLiteral("comboBoxUmido"));
        comboBoxUmido->setGeometry(QRect(10, 40, 41, 22));
        lblVetro = new QLabel(grpMastelli);
        lblVetro->setObjectName(QStringLiteral("lblVetro"));
        lblVetro->setGeometry(QRect(80, 20, 41, 16));
        lblVetro->setFont(font);
        comboBoxVetro = new QComboBox(grpMastelli);
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->addItem(QString());
        comboBoxVetro->setObjectName(QStringLiteral("comboBoxVetro"));
        comboBoxVetro->setGeometry(QRect(80, 40, 41, 22));
        grpSecchi = new QGroupBox(centralwidget);
        grpSecchi->setObjectName(QStringLiteral("grpSecchi"));
        grpSecchi->setGeometry(QRect(10, 460, 371, 91));
        comboBoxSecchi = new QComboBox(grpSecchi);
        comboBoxSecchi->setObjectName(QStringLiteral("comboBoxSecchi"));
        comboBoxSecchi->setGeometry(QRect(10, 30, 141, 22));
        lblUltimaConsegna = new QLabel(centralwidget);
        lblUltimaConsegna->setObjectName(QStringLiteral("lblUltimaConsegna"));
        lblUltimaConsegna->setGeometry(QRect(10, 310, 161, 16));
        lblUltimaConsegna->setFont(font);
        lblDataUltimaRichiestaDb = new QLabel(centralwidget);
        lblDataUltimaRichiestaDb->setObjectName(QStringLiteral("lblDataUltimaRichiestaDb"));
        lblDataUltimaRichiestaDb->setGeometry(QRect(180, 310, 131, 16));
        lblDataUltimaRichiestaDb->setFont(font);
        cmdLinkBtnVerifica = new QCommandLinkButton(centralwidget);
        cmdLinkBtnVerifica->setObjectName(QStringLiteral("cmdLinkBtnVerifica"));
        cmdLinkBtnVerifica->setGeometry(QRect(690, 300, 91, 41));
        Consegna_Materiale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Consegna_Materiale);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Consegna_Materiale->setMenuBar(menubar);

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
        lblRosse->setText(QApplication::translate("Consegna_Materiale", "Buste Rosse", nullptr));
        lblBlu->setText(QApplication::translate("Consegna_Materiale", "Buste Blu", nullptr));
        lblVerdi->setText(QApplication::translate("Consegna_Materiale", "Buste Verdi", nullptr));
        lblBianche->setText(QApplication::translate("Consegna_Materiale", "Buste Bianche", nullptr));
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
        lblUmido->setText(QApplication::translate("Consegna_Materiale", "Umido", nullptr));
        comboBoxUmido->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxUmido->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxUmido->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxUmido->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxUmido->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxUmido->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        lblVetro->setText(QApplication::translate("Consegna_Materiale", "Vetro", nullptr));
        comboBoxVetro->setItemText(0, QApplication::translate("Consegna_Materiale", "0", nullptr));
        comboBoxVetro->setItemText(1, QApplication::translate("Consegna_Materiale", "1", nullptr));
        comboBoxVetro->setItemText(2, QApplication::translate("Consegna_Materiale", "2", nullptr));
        comboBoxVetro->setItemText(3, QApplication::translate("Consegna_Materiale", "3", nullptr));
        comboBoxVetro->setItemText(4, QApplication::translate("Consegna_Materiale", "4", nullptr));
        comboBoxVetro->setItemText(5, QApplication::translate("Consegna_Materiale", "5", nullptr));

        grpSecchi->setTitle(QApplication::translate("Consegna_Materiale", "Richiesta secchi", nullptr));
        lblUltimaConsegna->setText(QApplication::translate("Consegna_Materiale", "Data ultima consegna :", nullptr));
        lblDataUltimaRichiestaDb->setText(QApplication::translate("Consegna_Materiale", "TextLabel", nullptr));
        cmdLinkBtnVerifica->setText(QApplication::translate("Consegna_Materiale", "Verifica", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Consegna_Materiale: public Ui_Consegna_Materiale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSEGNAMATERIALE_H
