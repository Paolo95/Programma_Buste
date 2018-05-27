/********************************************************************************
** Form generated from reading UI file 'gestioneRichieste.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONERICHIESTE_H
#define UI_GESTIONERICHIESTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_GestioneRichieste
{
public:
    QWidget *centralwidget;
    QPushButton *btnRichiesteEsci;
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
    QTableView *tblRicercaCittadino;
    QTableView *tblRicercaRichieste;
    QLabel *lblElencoRichieste;

    void setupUi(QMainWindow *GestioneRichieste)
    {
        if (GestioneRichieste->objectName().isEmpty())
            GestioneRichieste->setObjectName(QStringLiteral("GestioneRichieste"));
        GestioneRichieste->resize(800, 600);
        centralwidget = new QWidget(GestioneRichieste);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btnRichiesteEsci = new QPushButton(centralwidget);
        btnRichiesteEsci->setObjectName(QStringLiteral("btnRichiesteEsci"));
        btnRichiesteEsci->setGeometry(QRect(720, 550, 71, 25));
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
        tblRicercaCittadino = new QTableView(centralwidget);
        tblRicercaCittadino->setObjectName(QStringLiteral("tblRicercaCittadino"));
        tblRicercaCittadino->setGeometry(QRect(10, 180, 781, 111));
        tblRicercaCittadino->setSelectionMode(QAbstractItemView::SingleSelection);
        tblRicercaCittadino->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblRicercaCittadino->setGridStyle(Qt::SolidLine);
        tblRicercaCittadino->verticalHeader()->setVisible(false);
        tblRicercaRichieste = new QTableView(centralwidget);
        tblRicercaRichieste->setObjectName(QStringLiteral("tblRicercaRichieste"));
        tblRicercaRichieste->setGeometry(QRect(10, 340, 781, 111));
        tblRicercaRichieste->setSelectionMode(QAbstractItemView::SingleSelection);
        tblRicercaRichieste->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblRicercaRichieste->setGridStyle(Qt::SolidLine);
        tblRicercaRichieste->verticalHeader()->setVisible(false);
        lblElencoRichieste = new QLabel(centralwidget);
        lblElencoRichieste->setObjectName(QStringLiteral("lblElencoRichieste"));
        lblElencoRichieste->setGeometry(QRect(10, 310, 121, 17));
        GestioneRichieste->setCentralWidget(centralwidget);

        retranslateUi(GestioneRichieste);

        QMetaObject::connectSlotsByName(GestioneRichieste);
    } // setupUi

    void retranslateUi(QMainWindow *GestioneRichieste)
    {
        GestioneRichieste->setWindowTitle(QApplication::translate("GestioneRichieste", "Gestione Richieste", nullptr));
        btnRichiesteEsci->setText(QApplication::translate("GestioneRichieste", "Esci", nullptr));
        grpRicercaCittadino->setTitle(QApplication::translate("GestioneRichieste", "Ricerca Cittadino", nullptr));
        BtnCerca->setText(QApplication::translate("GestioneRichieste", "Cerca", nullptr));
        lblCognome->setText(QApplication::translate("GestioneRichieste", "Cognome", nullptr));
        lblNome->setText(QApplication::translate("GestioneRichieste", "Nome", nullptr));
        lblVia->setText(QApplication::translate("GestioneRichieste", "Via/Viale", nullptr));
        lblCivico->setText(QApplication::translate("GestioneRichieste", "N\302\260", nullptr));
        lblRagioneSociale->setText(QApplication::translate("GestioneRichieste", "Ragione sociale", nullptr));
        rBtnPrivato->setText(QApplication::translate("GestioneRichieste", "Privato", nullptr));
        rBtnAzienda->setText(QApplication::translate("GestioneRichieste", "Azienda", nullptr));
        lblElencoRichieste->setText(QApplication::translate("GestioneRichieste", "Elenco richieste :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestioneRichieste: public Ui_GestioneRichieste {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONERICHIESTE_H
