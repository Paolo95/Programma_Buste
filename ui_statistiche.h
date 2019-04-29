/********************************************************************************
** Form generated from reading UI file 'statistiche.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICHE_H
#define UI_STATISTICHE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include "Plugins/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Statistiche
{
public:
    QWidget *centralwidget;
    QPushButton *btnEsci;
    QRadioButton *rBtnElencoPrivato;
    QComboBox *comboBoxLettera;
    QTableView *tblElenco;
    QRadioButton *rBtnElencoAziende;
    QLabel *lblLettera;
    QPushButton *btnCerca;
    QCustomPlot *widget;
    QLabel *lblIntestazioneGrafico;
    QSpinBox *spinBoxData;
    QLabel *label_2;

    void setupUi(QMainWindow *Statistiche)
    {
        if (Statistiche->objectName().isEmpty())
            Statistiche->setObjectName(QStringLiteral("Statistiche"));
        Statistiche->resize(750, 490);
        Statistiche->setMinimumSize(QSize(750, 490));
        Statistiche->setMaximumSize(QSize(750, 490));
        centralwidget = new QWidget(Statistiche);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        btnEsci = new QPushButton(centralwidget);
        btnEsci->setObjectName(QStringLiteral("btnEsci"));
        btnEsci->setGeometry(QRect(640, 450, 89, 25));
        rBtnElencoPrivato = new QRadioButton(centralwidget);
        rBtnElencoPrivato->setObjectName(QStringLiteral("rBtnElencoPrivato"));
        rBtnElencoPrivato->setGeometry(QRect(520, 20, 82, 17));
        comboBoxLettera = new QComboBox(centralwidget);
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->addItem(QString());
        comboBoxLettera->setObjectName(QStringLiteral("comboBoxLettera"));
        comboBoxLettera->setGeometry(QRect(320, 20, 41, 25));
        tblElenco = new QTableView(centralwidget);
        tblElenco->setObjectName(QStringLiteral("tblElenco"));
        tblElenco->setGeometry(QRect(20, 60, 711, 111));
        tblElenco->setSelectionMode(QAbstractItemView::SingleSelection);
        tblElenco->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblElenco->verticalHeader()->setVisible(false);
        rBtnElencoAziende = new QRadioButton(centralwidget);
        rBtnElencoAziende->setObjectName(QStringLiteral("rBtnElencoAziende"));
        rBtnElencoAziende->setGeometry(QRect(430, 20, 82, 17));
        lblLettera = new QLabel(centralwidget);
        lblLettera->setObjectName(QStringLiteral("lblLettera"));
        lblLettera->setGeometry(QRect(20, 10, 281, 41));
        lblLettera->setAlignment(Qt::AlignCenter);
        lblLettera->setWordWrap(true);
        btnCerca = new QPushButton(centralwidget);
        btnCerca->setObjectName(QStringLiteral("btnCerca"));
        btnCerca->setGeometry(QRect(640, 20, 89, 25));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 230, 711, 191));
        lblIntestazioneGrafico = new QLabel(centralwidget);
        lblIntestazioneGrafico->setObjectName(QStringLiteral("lblIntestazioneGrafico"));
        lblIntestazioneGrafico->setGeometry(QRect(20, 190, 271, 17));
        spinBoxData = new QSpinBox(centralwidget);
        spinBoxData->setObjectName(QStringLiteral("spinBoxData"));
        spinBoxData->setGeometry(QRect(650, 180, 81, 31));
        spinBoxData->setMinimum(2019);
        spinBoxData->setMaximum(2090);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 180, 41, 31));
        Statistiche->setCentralWidget(centralwidget);

        retranslateUi(Statistiche);

        QMetaObject::connectSlotsByName(Statistiche);
    } // setupUi

    void retranslateUi(QMainWindow *Statistiche)
    {
        Statistiche->setWindowTitle(QApplication::translate("Statistiche", "Statistiche", nullptr));
        btnEsci->setText(QApplication::translate("Statistiche", "Esci", nullptr));
        rBtnElencoPrivato->setText(QApplication::translate("Statistiche", "Privato", nullptr));
        comboBoxLettera->setItemText(0, QString());
        comboBoxLettera->setItemText(1, QApplication::translate("Statistiche", "A", nullptr));
        comboBoxLettera->setItemText(2, QApplication::translate("Statistiche", "B", nullptr));
        comboBoxLettera->setItemText(3, QApplication::translate("Statistiche", "C", nullptr));
        comboBoxLettera->setItemText(4, QApplication::translate("Statistiche", "D", nullptr));
        comboBoxLettera->setItemText(5, QApplication::translate("Statistiche", "E", nullptr));
        comboBoxLettera->setItemText(6, QApplication::translate("Statistiche", "F", nullptr));
        comboBoxLettera->setItemText(7, QApplication::translate("Statistiche", "G", nullptr));
        comboBoxLettera->setItemText(8, QApplication::translate("Statistiche", "H", nullptr));
        comboBoxLettera->setItemText(9, QApplication::translate("Statistiche", "I", nullptr));
        comboBoxLettera->setItemText(10, QApplication::translate("Statistiche", "J", nullptr));
        comboBoxLettera->setItemText(11, QApplication::translate("Statistiche", "K", nullptr));
        comboBoxLettera->setItemText(12, QApplication::translate("Statistiche", "L", nullptr));
        comboBoxLettera->setItemText(13, QApplication::translate("Statistiche", "M", nullptr));
        comboBoxLettera->setItemText(14, QApplication::translate("Statistiche", "N", nullptr));
        comboBoxLettera->setItemText(15, QApplication::translate("Statistiche", "O", nullptr));
        comboBoxLettera->setItemText(16, QApplication::translate("Statistiche", "P", nullptr));
        comboBoxLettera->setItemText(17, QApplication::translate("Statistiche", "Q", nullptr));
        comboBoxLettera->setItemText(18, QApplication::translate("Statistiche", "R", nullptr));
        comboBoxLettera->setItemText(19, QApplication::translate("Statistiche", "S", nullptr));
        comboBoxLettera->setItemText(20, QApplication::translate("Statistiche", "T", nullptr));
        comboBoxLettera->setItemText(21, QApplication::translate("Statistiche", "U", nullptr));
        comboBoxLettera->setItemText(22, QApplication::translate("Statistiche", "V", nullptr));
        comboBoxLettera->setItemText(23, QApplication::translate("Statistiche", "W", nullptr));
        comboBoxLettera->setItemText(24, QApplication::translate("Statistiche", "X", nullptr));
        comboBoxLettera->setItemText(25, QApplication::translate("Statistiche", "Y", nullptr));
        comboBoxLettera->setItemText(26, QApplication::translate("Statistiche", "Z", nullptr));

        rBtnElencoAziende->setText(QApplication::translate("Statistiche", "Azienda", nullptr));
        lblLettera->setText(QApplication::translate("Statistiche", "Mostra elenco cittadini che non hanno richiesto materiali ordinati per lettera:", nullptr));
        btnCerca->setText(QApplication::translate("Statistiche", "Cerca", nullptr));
        lblIntestazioneGrafico->setText(QApplication::translate("Statistiche", "Grafico dei materiali richiesti per mese:", nullptr));
        label_2->setText(QApplication::translate("Statistiche", "Anno", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statistiche: public Ui_Statistiche {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICHE_H
