#ifndef MY_SISTEM_H
#define MY_SISTEM_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include "diferenciacion.h"
#include "integracion.h"
#include"iteracionpuntofijo.h"
#include "reglinealmulti.h"
#include"regrecionlinea.h"
#include"met2.h"
#include"met3.h"
#include"met4.h"
#include"met5.h"
#include"kutta.h"
#include "euler.h"

#include "mainwindow.h"





namespace Ui {
class my_sistem;
}

class my_sistem : public QMainWindow
{
    Q_OBJECT

public:
    explicit my_sistem(QWidget *parent = 0);
    ~my_sistem();
    diferenciacion *dif;
    Integracion *integ;
    iteracionpuntofijo *puntofijo;
    RegLinealMulti *recmult;
    RegrecionLinea *reclin;
    met2 *newton;
    met3 *gauss;
    met4 *seid;
    met5 *lagranja;
    Kutta *runker;
    Euler *Hule;
    MainWindow *biseccion;


private slots:
    void on_pushButton_16_clicked();
private:
    Ui::my_sistem *ui;

public slots:
    void diferenciacion_numerica();
    void interacion_de_punto_fijo();
    void integracion_numerica();
    void regreciion_lineal_multiple();
    void regrecion_lineal();
    void Newton_Raphson();
    void Eliminacion_Gaussiana();
    void Gauss_Seidel() ;
    void Interpolacion_de_Lagrange();
    void Runge_Kutta();
    void Euler_SLOT();
    void biseccion_slot();

      void salir();

};

#endif // MY_SISTEM_H
