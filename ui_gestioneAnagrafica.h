/********************************************************************************
** Form generated from reading UI file 'gestioneAnagrafica.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONEANAGRAFICA_H
#define UI_GESTIONEANAGRAFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_GestioneAnagrafica
{
public:
    QWidget *centralwidget;
    QGroupBox *grpInserisciCittadino;
    QPushButton *BtnInserisci;
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
    QPushButton *BtnCerca;
    QTableView *tblRicerca;
    QCommandLinkButton *cmdLinkBtnElimina;
    QCommandLinkButton *cmdLinkBtnModifica;
    QGroupBox *grpModificaCittadino;
    QLineEdit *txtViaMod;
    QLabel *lblCognomeMod;
    QLabel *lblNomeMod;
    QLabel *lblViaMod;
    QLineEdit *txtCivicoMod;
    QLabel *lblCivicoMod;
    QLineEdit *txtCognomeMod;
    QLineEdit *txtNomeMod;
    QLabel *lblRagioneSocialeMod;
    QLineEdit *txtRagioneSocialeMod;
    QPushButton *BtnModifica;
    QPushButton *btnAnagraficaEsci;

    void setupUi(QMainWindow *GestioneAnagrafica)
    {
        if (GestioneAnagrafica->objectName().isEmpty())
            GestioneAnagrafica->setObjectName(QStringLiteral("GestioneAnagrafica"));
        GestioneAnagrafica->resize(640, 550);
        GestioneAnagrafica->setMinimumSize(QSize(640, 550));
        GestioneAnagrafica->setMaximumSize(QSize(640, 550));
        centralwidget = new QWidget(GestioneAnagrafica);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        grpInserisciCittadino = new QGroupBox(centralwidget);
        grpInserisciCittadino->setObjectName(QStringLiteral("grpInserisciCittadino"));
        grpInserisciCittadino->setGeometry(QRect(10, 10, 611, 161));
        BtnInserisci = new QPushButton(grpInserisciCittadino);
        BtnInserisci->setObjectName(QStringLiteral("BtnInserisci"));
        BtnInserisci->setGeometry(QRect(450, 130, 75, 23));
        txtVia = new QLineEdit(grpInserisciCittadino);
        txtVia->setObjectName(QStringLiteral("txtVia"));
        txtVia->setGeometry(QRect(120, 100, 211, 20));
        lblCognome = new QLabel(grpInserisciCittadino);
        lblCognome->setObjectName(QStringLiteral("lblCognome"));
        lblCognome->setGeometry(QRect(10, 70, 81, 21));
        lblNome = new QLabel(grpInserisciCittadino);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(340, 70, 41, 16));
        lblVia = new QLabel(grpInserisciCittadino);
        lblVia->setObjectName(QStringLiteral("lblVia"));
        lblVia->setGeometry(QRect(10, 100, 61, 16));
        txtCivico = new QLineEdit(grpInserisciCittadino);
        txtCivico->setObjectName(QStringLiteral("txtCivico"));
        txtCivico->setGeometry(QRect(390, 100, 31, 21));
        lblCivico = new QLabel(grpInserisciCittadino);
        lblCivico->setObjectName(QStringLiteral("lblCivico"));
        lblCivico->setGeometry(QRect(340, 100, 21, 16));
        txtCognome = new QLineEdit(grpInserisciCittadino);
        txtCognome->setObjectName(QStringLiteral("txtCognome"));
        txtCognome->setGeometry(QRect(120, 70, 211, 20));
        txtNome = new QLineEdit(grpInserisciCittadino);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(390, 70, 211, 20));
        lblRagioneSociale = new QLabel(grpInserisciCittadino);
        lblRagioneSociale->setObjectName(QStringLiteral("lblRagioneSociale"));
        lblRagioneSociale->setGeometry(QRect(10, 30, 111, 41));
        txtRagioneSociale = new QLineEdit(grpInserisciCittadino);
        txtRagioneSociale->setObjectName(QStringLiteral("txtRagioneSociale"));
        txtRagioneSociale->setGeometry(QRect(120, 40, 211, 20));
        rBtnPrivato = new QRadioButton(grpInserisciCittadino);
        rBtnPrivato->setObjectName(QStringLiteral("rBtnPrivato"));
        rBtnPrivato->setGeometry(QRect(390, 30, 82, 17));
        rBtnAzienda = new QRadioButton(grpInserisciCittadino);
        rBtnAzienda->setObjectName(QStringLiteral("rBtnAzienda"));
        rBtnAzienda->setGeometry(QRect(510, 30, 82, 17));
        BtnCerca = new QPushButton(grpInserisciCittadino);
        BtnCerca->setObjectName(QStringLiteral("BtnCerca"));
        BtnCerca->setGeometry(QRect(530, 130, 75, 23));
        BtnInserisci->raise();
        txtVia->raise();
        lblCognome->raise();
        lblNome->raise();
        lblVia->raise();
        txtCivico->raise();
        lblCivico->raise();
        txtCognome->raise();
        lblRagioneSociale->raise();
        txtRagioneSociale->raise();
        rBtnPrivato->raise();
        rBtnAzienda->raise();
        txtNome->raise();
        BtnCerca->raise();
        tblRicerca = new QTableView(centralwidget);
        tblRicerca->setObjectName(QStringLiteral("tblRicerca"));
        tblRicerca->setGeometry(QRect(10, 180, 611, 111));
        tblRicerca->setSelectionMode(QAbstractItemView::SingleSelection);
        tblRicerca->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblRicerca->setGridStyle(Qt::SolidLine);
        tblRicerca->verticalHeader()->setVisible(false);
        cmdLinkBtnElimina = new QCommandLinkButton(centralwidget);
        cmdLinkBtnElimina->setObjectName(QStringLiteral("cmdLinkBtnElimina"));
        cmdLinkBtnElimina->setGeometry(QRect(320, 310, 141, 41));
        cmdLinkBtnModifica = new QCommandLinkButton(centralwidget);
        cmdLinkBtnModifica->setObjectName(QStringLiteral("cmdLinkBtnModifica"));
        cmdLinkBtnModifica->setGeometry(QRect(480, 310, 141, 41));
        grpModificaCittadino = new QGroupBox(centralwidget);
        grpModificaCittadino->setObjectName(QStringLiteral("grpModificaCittadino"));
        grpModificaCittadino->setGeometry(QRect(10, 350, 611, 141));
        txtViaMod = new QLineEdit(grpModificaCittadino);
        txtViaMod->setObjectName(QStringLiteral("txtViaMod"));
        txtViaMod->setGeometry(QRect(120, 100, 211, 20));
        lblCognomeMod = new QLabel(grpModificaCittadino);
        lblCognomeMod->setObjectName(QStringLiteral("lblCognomeMod"));
        lblCognomeMod->setGeometry(QRect(10, 70, 81, 21));
        lblNomeMod = new QLabel(grpModificaCittadino);
        lblNomeMod->setObjectName(QStringLiteral("lblNomeMod"));
        lblNomeMod->setGeometry(QRect(340, 40, 41, 16));
        lblViaMod = new QLabel(grpModificaCittadino);
        lblViaMod->setObjectName(QStringLiteral("lblViaMod"));
        lblViaMod->setGeometry(QRect(10, 100, 61, 16));
        txtCivicoMod = new QLineEdit(grpModificaCittadino);
        txtCivicoMod->setObjectName(QStringLiteral("txtCivicoMod"));
        txtCivicoMod->setGeometry(QRect(390, 70, 31, 21));
        lblCivicoMod = new QLabel(grpModificaCittadino);
        lblCivicoMod->setObjectName(QStringLiteral("lblCivicoMod"));
        lblCivicoMod->setGeometry(QRect(340, 70, 21, 16));
        txtCognomeMod = new QLineEdit(grpModificaCittadino);
        txtCognomeMod->setObjectName(QStringLiteral("txtCognomeMod"));
        txtCognomeMod->setGeometry(QRect(120, 70, 211, 20));
        txtNomeMod = new QLineEdit(grpModificaCittadino);
        txtNomeMod->setObjectName(QStringLiteral("txtNomeMod"));
        txtNomeMod->setGeometry(QRect(390, 40, 211, 20));
        lblRagioneSocialeMod = new QLabel(grpModificaCittadino);
        lblRagioneSocialeMod->setObjectName(QStringLiteral("lblRagioneSocialeMod"));
        lblRagioneSocialeMod->setGeometry(QRect(10, 30, 111, 41));
        txtRagioneSocialeMod = new QLineEdit(grpModificaCittadino);
        txtRagioneSocialeMod->setObjectName(QStringLiteral("txtRagioneSocialeMod"));
        txtRagioneSocialeMod->setGeometry(QRect(120, 40, 211, 20));
        BtnModifica = new QPushButton(grpModificaCittadino);
        BtnModifica->setObjectName(QStringLiteral("BtnModifica"));
        BtnModifica->setGeometry(QRect(530, 100, 75, 23));
        btnAnagraficaEsci = new QPushButton(centralwidget);
        btnAnagraficaEsci->setObjectName(QStringLiteral("btnAnagraficaEsci"));
        btnAnagraficaEsci->setGeometry(QRect(550, 510, 71, 25));
        GestioneAnagrafica->setCentralWidget(centralwidget);

        retranslateUi(GestioneAnagrafica);

        QMetaObject::connectSlotsByName(GestioneAnagrafica);
    } // setupUi

    void retranslateUi(QMainWindow *GestioneAnagrafica)
    {
        GestioneAnagrafica->setWindowTitle(QApplication::translate("GestioneAnagrafica", "Gestione Anagrafica", nullptr));
        grpInserisciCittadino->setTitle(QApplication::translate("GestioneAnagrafica", "Inserisci o Ricerca Cittadino", nullptr));
        BtnInserisci->setText(QApplication::translate("GestioneAnagrafica", "Inserisci", nullptr));
        lblCognome->setText(QApplication::translate("GestioneAnagrafica", "Cognome", nullptr));
        lblNome->setText(QApplication::translate("GestioneAnagrafica", "Nome", nullptr));
        lblVia->setText(QApplication::translate("GestioneAnagrafica", "Via/Viale", nullptr));
        lblCivico->setText(QApplication::translate("GestioneAnagrafica", "N\302\260", nullptr));
        lblRagioneSociale->setText(QApplication::translate("GestioneAnagrafica", "Ragione sociale", nullptr));
        rBtnPrivato->setText(QApplication::translate("GestioneAnagrafica", "Privato", nullptr));
        rBtnAzienda->setText(QApplication::translate("GestioneAnagrafica", "Azienda", nullptr));
        BtnCerca->setText(QApplication::translate("GestioneAnagrafica", "Cerca", nullptr));
        cmdLinkBtnElimina->setText(QApplication::translate("GestioneAnagrafica", "Elimina cittadino", nullptr));
        cmdLinkBtnModifica->setText(QApplication::translate("GestioneAnagrafica", "Modifica cittadino", nullptr));
        grpModificaCittadino->setTitle(QApplication::translate("GestioneAnagrafica", "Modifica Cittadino", nullptr));
        lblCognomeMod->setText(QApplication::translate("GestioneAnagrafica", "Cognome", nullptr));
        lblNomeMod->setText(QApplication::translate("GestioneAnagrafica", "Nome", nullptr));
        lblViaMod->setText(QApplication::translate("GestioneAnagrafica", "Via/Viale", nullptr));
        lblCivicoMod->setText(QApplication::translate("GestioneAnagrafica", "N\302\260", nullptr));
        lblRagioneSocialeMod->setText(QApplication::translate("GestioneAnagrafica", "Ragione sociale", nullptr));
        BtnModifica->setText(QApplication::translate("GestioneAnagrafica", "Modifica", nullptr));
        btnAnagraficaEsci->setText(QApplication::translate("GestioneAnagrafica", "Esci", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestioneAnagrafica: public Ui_GestioneAnagrafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONEANAGRAFICA_H
