/********************************************************************************
** Form generated from reading UI file 'gestioneMateriale.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONEMATERIALE_H
#define UI_GESTIONEMATERIALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_gestioneMateriale
{
public:
    QComboBox *comboBoxCercaCategoria;
    QPushButton *btnElencoEsci;
    QPushButton *btnCerca;
    QLabel *lblMostraCategoria;
    QTableView *tblMateriale;
    QPushButton *btnEsci;
    QPushButton *btnPulisci;
    QGroupBox *grpNuovoMateriale;
    QLabel *lblCategoria;
    QLabel *lblTipologia;
    QLabel *lblDimensione;
    QComboBox *comboBoxCategoria;
    QComboBox *comboBoxTipologia;
    QPushButton *btnSalva;
    QSpinBox *spinBoxDimensione;
    QPushButton *btnElimina;

    void setupUi(QDialog *gestioneMateriale)
    {
        if (gestioneMateriale->objectName().isEmpty())
            gestioneMateriale->setObjectName(QStringLiteral("gestioneMateriale"));
        gestioneMateriale->resize(600, 383);
        gestioneMateriale->setMinimumSize(QSize(600, 383));
        gestioneMateriale->setMaximumSize(QSize(610, 383));
        comboBoxCercaCategoria = new QComboBox(gestioneMateriale);
        comboBoxCercaCategoria->setObjectName(QStringLiteral("comboBoxCercaCategoria"));
        comboBoxCercaCategoria->setGeometry(QRect(230, 20, 201, 25));
        btnElencoEsci = new QPushButton(gestioneMateriale);
        btnElencoEsci->setObjectName(QStringLiteral("btnElencoEsci"));
        btnElencoEsci->setGeometry(QRect(640, 460, 75, 23));
        btnCerca = new QPushButton(gestioneMateriale);
        btnCerca->setObjectName(QStringLiteral("btnCerca"));
        btnCerca->setGeometry(QRect(490, 20, 89, 25));
        lblMostraCategoria = new QLabel(gestioneMateriale);
        lblMostraCategoria->setObjectName(QStringLiteral("lblMostraCategoria"));
        lblMostraCategoria->setGeometry(QRect(10, 20, 201, 17));
        tblMateriale = new QTableView(gestioneMateriale);
        tblMateriale->setObjectName(QStringLiteral("tblMateriale"));
        tblMateriale->setGeometry(QRect(10, 60, 471, 141));
        tblMateriale->setSelectionMode(QAbstractItemView::SingleSelection);
        tblMateriale->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblMateriale->verticalHeader()->setVisible(false);
        btnEsci = new QPushButton(gestioneMateriale);
        btnEsci->setObjectName(QStringLiteral("btnEsci"));
        btnEsci->setGeometry(QRect(490, 320, 89, 25));
        btnPulisci = new QPushButton(gestioneMateriale);
        btnPulisci->setObjectName(QStringLiteral("btnPulisci"));
        btnPulisci->setGeometry(QRect(490, 60, 89, 25));
        grpNuovoMateriale = new QGroupBox(gestioneMateriale);
        grpNuovoMateriale->setObjectName(QStringLiteral("grpNuovoMateriale"));
        grpNuovoMateriale->setGeometry(QRect(10, 210, 471, 151));
        lblCategoria = new QLabel(grpNuovoMateriale);
        lblCategoria->setObjectName(QStringLiteral("lblCategoria"));
        lblCategoria->setGeometry(QRect(30, 30, 71, 17));
        lblTipologia = new QLabel(grpNuovoMateriale);
        lblTipologia->setObjectName(QStringLiteral("lblTipologia"));
        lblTipologia->setGeometry(QRect(170, 30, 67, 17));
        lblDimensione = new QLabel(grpNuovoMateriale);
        lblDimensione->setObjectName(QStringLiteral("lblDimensione"));
        lblDimensione->setGeometry(QRect(300, 30, 91, 17));
        comboBoxCategoria = new QComboBox(grpNuovoMateriale);
        comboBoxCategoria->addItem(QString());
        comboBoxCategoria->addItem(QString());
        comboBoxCategoria->addItem(QString());
        comboBoxCategoria->addItem(QString());
        comboBoxCategoria->addItem(QString());
        comboBoxCategoria->setObjectName(QStringLiteral("comboBoxCategoria"));
        comboBoxCategoria->setGeometry(QRect(10, 60, 121, 25));
        comboBoxTipologia = new QComboBox(grpNuovoMateriale);
        comboBoxTipologia->setObjectName(QStringLiteral("comboBoxTipologia"));
        comboBoxTipologia->setGeometry(QRect(150, 60, 121, 25));
        btnSalva = new QPushButton(grpNuovoMateriale);
        btnSalva->setObjectName(QStringLiteral("btnSalva"));
        btnSalva->setGeometry(QRect(360, 110, 89, 25));
        spinBoxDimensione = new QSpinBox(grpNuovoMateriale);
        spinBoxDimensione->setObjectName(QStringLiteral("spinBoxDimensione"));
        spinBoxDimensione->setGeometry(QRect(310, 60, 61, 26));
        spinBoxDimensione->setMaximum(500);
        btnElimina = new QPushButton(gestioneMateriale);
        btnElimina->setObjectName(QStringLiteral("btnElimina"));
        btnElimina->setGeometry(QRect(490, 100, 89, 25));

        retranslateUi(gestioneMateriale);

        QMetaObject::connectSlotsByName(gestioneMateriale);
    } // setupUi

    void retranslateUi(QDialog *gestioneMateriale)
    {
        gestioneMateriale->setWindowTitle(QApplication::translate("gestioneMateriale", "Gestione Materiale", nullptr));
        btnElencoEsci->setText(QApplication::translate("gestioneMateriale", "Esci", nullptr));
        btnCerca->setText(QApplication::translate("gestioneMateriale", "Cerca", nullptr));
        lblMostraCategoria->setText(QApplication::translate("gestioneMateriale", "Mostra elenco per categoria:", nullptr));
        btnEsci->setText(QApplication::translate("gestioneMateriale", "Esci", nullptr));
        btnPulisci->setText(QApplication::translate("gestioneMateriale", "Pulisci", nullptr));
        grpNuovoMateriale->setTitle(QApplication::translate("gestioneMateriale", "Nuovo Materiale", nullptr));
        lblCategoria->setText(QApplication::translate("gestioneMateriale", "Categoria", nullptr));
        lblTipologia->setText(QApplication::translate("gestioneMateriale", "Tipologia", nullptr));
        lblDimensione->setText(QApplication::translate("gestioneMateriale", "Dimensione", nullptr));
        comboBoxCategoria->setItemText(0, QString());
        comboBoxCategoria->setItemText(1, QApplication::translate("gestioneMateriale", "BUSTE", nullptr));
        comboBoxCategoria->setItemText(2, QApplication::translate("gestioneMateriale", "SECCHIO", nullptr));
        comboBoxCategoria->setItemText(3, QApplication::translate("gestioneMateriale", "MASTELLO", nullptr));
        comboBoxCategoria->setItemText(4, QApplication::translate("gestioneMateriale", "CALENDARIO", nullptr));

        btnSalva->setText(QApplication::translate("gestioneMateriale", "Salva", nullptr));
        btnElimina->setText(QApplication::translate("gestioneMateriale", "Elimina", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestioneMateriale: public Ui_gestioneMateriale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONEMATERIALE_H
