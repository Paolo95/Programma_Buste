/********************************************************************************
** Form generated from reading UI file 'gestioneAnagrafica.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTIONEANAGRAFICA_H
#define UI_GESTIONEANAGRAFICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GestioneAnagrafica
{
public:
    QWidget *centralwidget;

    void setupUi(QMainWindow *GestioneAnagrafica)
    {
        if (GestioneAnagrafica->objectName().isEmpty())
            GestioneAnagrafica->setObjectName(QStringLiteral("GestioneAnagrafica"));
        GestioneAnagrafica->resize(800, 600);
        centralwidget = new QWidget(GestioneAnagrafica);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        GestioneAnagrafica->setCentralWidget(centralwidget);

        retranslateUi(GestioneAnagrafica);

        QMetaObject::connectSlotsByName(GestioneAnagrafica);
    } // setupUi

    void retranslateUi(QMainWindow *GestioneAnagrafica)
    {
        GestioneAnagrafica->setWindowTitle(QApplication::translate("GestioneAnagrafica", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GestioneAnagrafica: public Ui_GestioneAnagrafica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTIONEANAGRAFICA_H
