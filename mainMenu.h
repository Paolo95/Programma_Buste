#pragma once

#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <QMessageBox>
#include "consegnaMateriale.h"
#include "gestioneRichieste.h"
#include "gestioneAnagrafica.h"
#include "gestioneMateriale.h"
#include "centroFiera.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_BtnMenuEsci_clicked();
    void on_BtnMenuLogin_clicked();
    void on_BtnConsegnaMateriale_clicked();

    void on_btnGestioneRichieste_clicked();

    void on_btnAnagrafica_clicked();

    void on_btnCentroFiera_clicked();

    void on_btnGestioneMateriale_clicked();

private:
    Ui::MainMenu *ui;
    QMessageBox MessageExitMainMenu;
    QAbstractButton *BtnSiMainMenu;
    QAbstractButton *BtnNoMainMenu;
    void closeEvent (QCloseEvent *event);
};

#endif // MAINMENU_H
