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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
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
        rBtnElencoAziende->setGeometry(QRect(550, 30, 82, 17));
        rBtnElencoPrivato = new QRadioButton(ElencoTari);
        rBtnElencoPrivato->setObjectName(QStringLiteral("rBtnElencoPrivato"));
        rBtnElencoPrivato->setGeometry(QRect(640, 30, 82, 17));
        tblElencoTari = new QTableView(ElencoTari);
        tblElencoTari->setObjectName(QStringLiteral("tblElencoTari"));
        tblElencoTari->setGeometry(QRect(10, 70, 711, 381));

        retranslateUi(ElencoTari);

        QMetaObject::connectSlotsByName(ElencoTari);
    } // setupUi

    void retranslateUi(QDialog *ElencoTari)
    {
        ElencoTari->setWindowTitle(QApplication::translate("ElencoTari", "Elenco utenze TARI", nullptr));
        btnElencoEsci->setText(QApplication::translate("ElencoTari", "Esci", nullptr));
        rBtnElencoAziende->setText(QApplication::translate("ElencoTari", "Aziende", nullptr));
        rBtnElencoPrivato->setText(QApplication::translate("ElencoTari", "Privato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ElencoTari: public Ui_ElencoTari {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELENCOTARI_H
