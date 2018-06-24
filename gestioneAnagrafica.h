#ifndef GESTIONEANAGRAFICA_H
#define GESTIONEANAGRAFICA_H

#include <QMainWindow>

namespace Ui {
class GestioneAnagrafica;
}

class GestioneAnagrafica : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestioneAnagrafica(QWidget *parent = 0);
    ~GestioneAnagrafica();

private:
    Ui::GestioneAnagrafica *ui;
};

#endif // GESTIONEANAGRAFICA_H
