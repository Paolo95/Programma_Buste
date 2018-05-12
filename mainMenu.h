#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <QMessageBox>
#include "consegnaMateriale.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

private slots:
    void on_BtnMenuEsci_clicked();
    void on_BtnMenuLogin_clicked();
    void on_BtnConsegnaMateriale_clicked();

private:
    Ui::MainMenu *ui;
    QMessageBox MessageExitMainMenu;
    QAbstractButton *BtnSiMainMenu;
    QAbstractButton *BtnNoMainMenu;
    void closeEvent (QCloseEvent *event);
};

#endif // MAINMENU_H
