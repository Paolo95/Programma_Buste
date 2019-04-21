/********************************************************************************
** Form generated from reading UI file 'gestioneArrivi.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONEARRIVI_H
#define UI_GESTIONEARRIVI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_GestioneArrivi
{
public:
    QPushButton *btnEsci;
    QLabel *lblMostraCategoria;
    QTableView *tblArrivi;
    QPushButton *btnElimina;
    QPushButton *btnCerca;
    QGroupBox *grpGestione;
    QLabel *lblCategoria;
    QLabel *lblTipologia;
    QLabel *lblDimensione;
    QComboBox *comboBoxCategoria;
    QComboBox *comboBoxTipologia;
    QPushButton *btnSalva;
    QLabel *lblQuantita;
    QSpinBox *spinBoxQuantita;
    QComboBox *comboBoxDimensione;
    QDateEdit *dateEditDataArrivo;
    QLabel *labelDataArrivo;
    QPushButton *btnPulisci;
    QDateEdit *dateEditDataRicerca;
    QPushButton *btnModifica;
    QRadioButton *rbtnCentroFiera;
    QRadioButton *rbtnBiblioteca;

    void setupUi(QDialog *GestioneArrivi)
    {
        if (GestioneArrivi->objectName().isEmpty())
            GestioneArrivi->setObjectName(QStringLiteral("GestioneArrivi"));
        GestioneArrivi->resize(760, 378);
        GestioneArrivi->setMinimumSize(QSize(760, 378));
        GestioneArrivi->setMaximumSize(QSize(760, 378));
        btnEsci = new QPushButton(GestioneArrivi);
        btnEsci->setObjectName(QStringLiteral("btnEsci"));
        btnEsci->setGeometry(QRect(660, 320, 89, 25));
        lblMostraCategoria = new QLabel(GestioneArrivi);
        lblMostraCategoria->setObjectName(QStringLiteral("lblMostraCategoria"));
        lblMostraCategoria->setGeometry(QRect(10, 10, 201, 17));
        tblArrivi = new QTableView(GestioneArrivi);
        tblArrivi->setObjectName(QStringLiteral("tblArrivi"));
        tblArrivi->setGeometry(QRect(10, 50, 641, 141));
        tblArrivi->setSelectionMode(QAbstractItemView::SingleSelection);
        tblArrivi->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblArrivi->verticalHeader()->setVisible(false);
        btnElimina = new QPushButton(GestioneArrivi);
        btnElimina->setObjectName(QStringLiteral("btnElimina"));
        btnElimina->setGeometry(QRect(660, 140, 89, 25));
        btnCerca = new QPushButton(GestioneArrivi);
        btnCerca->setObjectName(QStringLiteral("btnCerca"));
        btnCerca->setGeometry(QRect(660, 10, 89, 25));
        grpGestione = new QGroupBox(GestioneArrivi);
        grpGestione->setObjectName(QStringLiteral("grpGestione"));
        grpGestione->setGeometry(QRect(10, 200, 641, 161));
        lblCategoria = new QLabel(grpGestione);
        lblCategoria->setObjectName(QStringLiteral("lblCategoria"));
        lblCategoria->setGeometry(QRect(160, 30, 71, 17));
        lblTipologia = new QLabel(grpGestione);
        lblTipologia->setObjectName(QStringLiteral("lblTipologia"));
        lblTipologia->setGeometry(QRect(300, 30, 67, 17));
        lblDimensione = new QLabel(grpGestione);
        lblDimensione->setObjectName(QStringLiteral("lblDimensione"));
        lblDimensione->setGeometry(QRect(430, 30, 91, 17));
        comboBoxCategoria = new QComboBox(grpGestione);
        comboBoxCategoria->setObjectName(QStringLiteral("comboBoxCategoria"));
        comboBoxCategoria->setGeometry(QRect(140, 60, 121, 25));
        comboBoxTipologia = new QComboBox(grpGestione);
        comboBoxTipologia->setObjectName(QStringLiteral("comboBoxTipologia"));
        comboBoxTipologia->setGeometry(QRect(280, 60, 121, 25));
        btnSalva = new QPushButton(grpGestione);
        btnSalva->setObjectName(QStringLiteral("btnSalva"));
        btnSalva->setGeometry(QRect(520, 120, 89, 25));
        lblQuantita = new QLabel(grpGestione);
        lblQuantita->setObjectName(QStringLiteral("lblQuantita"));
        lblQuantita->setGeometry(QRect(550, 30, 71, 17));
        spinBoxQuantita = new QSpinBox(grpGestione);
        spinBoxQuantita->setObjectName(QStringLiteral("spinBoxQuantita"));
        spinBoxQuantita->setGeometry(QRect(550, 60, 61, 26));
        spinBoxQuantita->setMaximum(500);
        comboBoxDimensione = new QComboBox(grpGestione);
        comboBoxDimensione->setObjectName(QStringLiteral("comboBoxDimensione"));
        comboBoxDimensione->setGeometry(QRect(420, 60, 121, 25));
        dateEditDataArrivo = new QDateEdit(grpGestione);
        dateEditDataArrivo->setObjectName(QStringLiteral("dateEditDataArrivo"));
        dateEditDataArrivo->setGeometry(QRect(10, 60, 110, 26));
        labelDataArrivo = new QLabel(grpGestione);
        labelDataArrivo->setObjectName(QStringLiteral("labelDataArrivo"));
        labelDataArrivo->setGeometry(QRect(20, 30, 91, 17));
        btnPulisci = new QPushButton(GestioneArrivi);
        btnPulisci->setObjectName(QStringLiteral("btnPulisci"));
        btnPulisci->setGeometry(QRect(660, 50, 89, 25));
        dateEditDataRicerca = new QDateEdit(GestioneArrivi);
        dateEditDataRicerca->setObjectName(QStringLiteral("dateEditDataRicerca"));
        dateEditDataRicerca->setGeometry(QRect(210, 10, 110, 26));
        btnModifica = new QPushButton(GestioneArrivi);
        btnModifica->setObjectName(QStringLiteral("btnModifica"));
        btnModifica->setGeometry(QRect(660, 110, 89, 25));
        rbtnCentroFiera = new QRadioButton(GestioneArrivi);
        rbtnCentroFiera->setObjectName(QStringLiteral("rbtnCentroFiera"));
        rbtnCentroFiera->setGeometry(QRect(350, 10, 112, 23));
        rbtnBiblioteca = new QRadioButton(GestioneArrivi);
        rbtnBiblioteca->setObjectName(QStringLiteral("rbtnBiblioteca"));
        rbtnBiblioteca->setGeometry(QRect(480, 10, 112, 23));

        retranslateUi(GestioneArrivi);

        QMetaObject::connectSlotsByName(GestioneArrivi);
    } // setupUi

    void retranslateUi(QDialog *GestioneArrivi)
    {
        GestioneArrivi->setWindowTitle(QApplication::translate("GestioneArrivi", "Gestione Arrivi", nullptr));
        btnEsci->setText(QApplication::translate("GestioneArrivi", "Esci", nullptr));
        lblMostraCategoria->setText(QApplication::translate("GestioneArrivi", "Mostra elenco a partire dal:", nullptr));
        btnElimina->setText(QApplication::translate("GestioneArrivi", "Elimina", nullptr));
        btnCerca->setText(QApplication::translate("GestioneArrivi", "Cerca", nullptr));
        grpGestione->setTitle(QString());
        lblCategoria->setText(QApplication::translate("GestioneArrivi", "Categoria", nullptr));
        lblTipologia->setText(QApplication::translate("GestioneArrivi", "Tipologia", nullptr));
        lblDimensione->setText(QApplication::translate("GestioneArrivi", "Dimensione", nullptr));
        btnSalva->setText(QApplication::translate("GestioneArrivi", "Salva", nullptr));
        lblQuantita->setText(QApplication::translate("GestioneArrivi", "Quantit\303\240", nullptr));
        labelDataArrivo->setText(QApplication::translate("GestioneArrivi", "Data arrivo", nullptr));
        btnPulisci->setText(QApplication::translate("GestioneArrivi", "Pulisci", nullptr));
        dateEditDataRicerca->setDisplayFormat(QApplication::translate("GestioneArrivi", "dd/MM/yy", nullptr));
        btnModifica->setText(QApplication::translate("GestioneArrivi", "Modifica", nullptr));
        rbtnCentroFiera->setText(QApplication::translate("GestioneArrivi", "Centro Fiera", nullptr));
        rbtnBiblioteca->setText(QApplication::translate("GestioneArrivi", "Biblioteca", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestioneArrivi: public Ui_GestioneArrivi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONEARRIVI_H
