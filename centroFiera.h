#ifndef CENTROFIERA_H
#define CENTROFIERA_H

#include <QMainWindow>
#include "mainMenu.h"

namespace Ui {
class CentroFiera;
}

class CentroFiera : public QMainWindow
{
    Q_OBJECT

public:
    explicit CentroFiera(QWidget *parent = 0);
    ~CentroFiera();

private:
    Ui::CentroFiera *ui;
    void closeEvent (QCloseEvent *);
};

#endif // CENTROFIERA_H
