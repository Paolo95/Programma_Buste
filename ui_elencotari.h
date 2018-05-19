/********************************************************************************
** Form generated from reading UI file 'elencotari.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELENCOTARI_H
#define UI_ELENCOTARI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ElencoTari
{
public:
    QPushButton *btnElencoEsci;
    QRadioButton *rBtnElencoAziende;
    QRadioButton *rBtnElencoPrivato;
    QTableView *tblElencoTari;
    QComboBox *comboBoxLettera;
    QLabel *lblLettera;
    QPushButton *btnCerca;

    void setupUi(QDialog *ElencoTari)
    {
        if (ElencoTari->objectName().isEmpty())
            ElencoTari->setObjectName(QStringLiteral("ElencoTari"));
        ElencoTari->resize(736, 517);
        ElencoTari->setMinimumSize(QSize(736, 517));
        ElencoTari->setMaximumSize(QSize(736, 517));
        btnElencoEsci = new QPushButton(ElencoTari);
        btnElencoEsci->setObjectName(QStringLiteral("btnElencoEsci"));
        btnElencoEsci->setGeometry(QRect(640, 470, 75, 23));
        rBtnElencoAziende = new QRadioButton(ElencoTari);
        rBtnElencoAziende->setObjectName(QStringLiteral("rBtnElencoAziende"));
        rBtnElencoAziende->setGeometry(QRect(420, 30, 82, 17));
        rBtnElencoPrivato = new QRadioButton(ElencoTari);
        rBtnElencoPrivato->setObjectName(QStringLiteral("rBtnElencoPrivato"));
        rBtnElencoPrivato->setGeometry(QRect(510, 30, 82, 17));
        tblElencoTari = new QTableView(ElencoTari);
        tblElencoTari->setObjectName(QStringLiteral("tblElencoTari"));
        tblElencoTari->setGeometry(QRect(10, 70, 711, 381));
        tblElencoTari->setSelectionMode(QAbstractItemView::SingleSelection);
        tblElencoTari->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblElencoTari->verticalHeader()->setVisible(false);
        comboBoxLettera = new QComboBox(ElencoTari);
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
        comboBoxLettera->setGeometry(QRect(200, 30, 41, 25));
        lblLettera = new QLabel(ElencoTari);
        lblLettera->setObjectName(QStringLiteral("lblLettera"));
        lblLettera->setGeometry(QRect(10, 30, 201, 17));
        btnCerca = new QPushButton(ElencoTari);
        btnCerca->setObjectName(QStringLiteral("btnCerca"));
        btnCerca->setGeometry(QRect(620, 30, 89, 25));

        retranslateUi(ElencoTari);

        QMetaObject::connectSlotsByName(ElencoTari);
    } // setupUi

    void retranslateUi(QDialog *ElencoTari)
    {
        ElencoTari->setWindowTitle(QApplication::translate("ElencoTari", "Elenco utenze TARI", nullptr));
        btnElencoEsci->setText(QApplication::translate("ElencoTari", "Esci", nullptr));
        rBtnElencoAziende->setText(QApplication::translate("ElencoTari", "Azienda", nullptr));
        rBtnElencoPrivato->setText(QApplication::translate("ElencoTari", "Privato", nullptr));
        comboBoxLettera->setItemText(0, QString());
        comboBoxLettera->setItemText(1, QApplication::translate("ElencoTari", "A", nullptr));
        comboBoxLettera->setItemText(2, QApplication::translate("ElencoTari", "B", nullptr));
        comboBoxLettera->setItemText(3, QApplication::translate("ElencoTari", "C", nullptr));
        comboBoxLettera->setItemText(4, QApplication::translate("ElencoTari", "D", nullptr));
        comboBoxLettera->setItemText(5, QApplication::translate("ElencoTari", "E", nullptr));
        comboBoxLettera->setItemText(6, QApplication::translate("ElencoTari", "F", nullptr));
        comboBoxLettera->setItemText(7, QApplication::translate("ElencoTari", "G", nullptr));
        comboBoxLettera->setItemText(8, QApplication::translate("ElencoTari", "H", nullptr));
        comboBoxLettera->setItemText(9, QApplication::translate("ElencoTari", "I", nullptr));
        comboBoxLettera->setItemText(10, QApplication::translate("ElencoTari", "J", nullptr));
        comboBoxLettera->setItemText(11, QApplication::translate("ElencoTari", "K", nullptr));
        comboBoxLettera->setItemText(12, QApplication::translate("ElencoTari", "L", nullptr));
        comboBoxLettera->setItemText(13, QApplication::translate("ElencoTari", "M", nullptr));
        comboBoxLettera->setItemText(14, QApplication::translate("ElencoTari", "N", nullptr));
        comboBoxLettera->setItemText(15, QApplication::translate("ElencoTari", "O", nullptr));
        comboBoxLettera->setItemText(16, QApplication::translate("ElencoTari", "P", nullptr));
        comboBoxLettera->setItemText(17, QApplication::translate("ElencoTari", "Q", nullptr));
        comboBoxLettera->setItemText(18, QApplication::translate("ElencoTari", "R", nullptr));
        comboBoxLettera->setItemText(19, QApplication::translate("ElencoTari", "S", nullptr));
        comboBoxLettera->setItemText(20, QApplication::translate("ElencoTari", "T", nullptr));
        comboBoxLettera->setItemText(21, QApplication::translate("ElencoTari", "U", nullptr));
        comboBoxLettera->setItemText(22, QApplication::translate("ElencoTari", "V", nullptr));
        comboBoxLettera->setItemText(23, QApplication::translate("ElencoTari", "W", nullptr));
        comboBoxLettera->setItemText(24, QApplication::translate("ElencoTari", "X", nullptr));
        comboBoxLettera->setItemText(25, QApplication::translate("ElencoTari", "Y", nullptr));
        comboBoxLettera->setItemText(26, QApplication::translate("ElencoTari", "Z", nullptr));

        lblLettera->setText(QApplication::translate("ElencoTari", "Mostra elenco per lettera:", nullptr));
        btnCerca->setText(QApplication::translate("ElencoTari", "Cerca", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElencoTari: public Ui_ElencoTari {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELENCOTARI_H
