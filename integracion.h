#ifndef INTEGRACION_H
#define INTEGRACION_H

#include <QMainWindow>

namespace Ui {
class Integracion;
}

class Integracion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Integracion(QWidget *parent = 0);
    ~Integracion();

private:
    Ui::Integracion *ui;
public slots:
   void metodo9();//slot that proccess the method of derivation
   void deletes();//slot that clear the spinboxes and textbrowser
};

#endif
