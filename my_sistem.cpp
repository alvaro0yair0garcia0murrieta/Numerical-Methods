#include "my_sistem.h"
#include "ui_my_sistem.h"
#include <QtGui>
#include <QtCore>
#include<QMessageBox>
#include<QWidget>
#include<diferenciacion.h>

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



my_sistem::my_sistem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::my_sistem)
{
    ui->setupUi(this);
    ui->tabWidget->addTab(new MainWindow(),QString("biseccion"));
    ui->tabWidget->addTab(new iteracionpuntofijo(),QString("punto fijo"));
     ui->tabWidget->addTab(new met2(),QString("newton"));
      ui->tabWidget->addTab(new met3(),QString("gauss"));
    ui->tabWidget->addTab(new met4(),QString("seid"));
      ui->tabWidget->addTab(new met5(),QString("interpolacion"));
      ui->tabWidget->addTab(new RegrecionLinea(),QString("Regrecion lineal"));
     ui->tabWidget->addTab(new RegLinealMulti(),QString("Regrecion multiple"));
     ui->tabWidget->addTab(new diferenciacion(),QString("diferenciacion"));
    ui->tabWidget->addTab(new Integracion(),QString("Integracion"));
    ui->tabWidget->addTab(new Euler(),QString("Euler"));
    ui->tabWidget->addTab(new Kutta(),QString("KUTTA"));




    dif = new diferenciacion();
    integ = new Integracion();
    puntofijo = new iteracionpuntofijo();
    recmult = new RegLinealMulti();
    reclin = new RegrecionLinea();
    newton= new met2();
    gauss=new met3();
    seid=new met4();
    lagranja=new met5();
    runker= new Kutta();
    Hule= new Euler();
    biseccion= new MainWindow();



    connect(ui->derivada,SIGNAL(clicked()),this,SLOT(diferenciacion_numerica()));
    connect(ui->pan_integral,SIGNAL(clicked()),this,SLOT(integracion_numerica()));
    connect(ui->Itiracion,SIGNAL(clicked()),this,SLOT(interacion_de_punto_fijo()));
    connect(ui->reclineal,SIGNAL(clicked()),this,SLOT(regrecion_lineal()));
    connect(ui->multiple,SIGNAL(clicked()),this,SLOT(regreciion_lineal_multiple()));
    connect(ui->newt,SIGNAL(clicked()),this,SLOT(Newton_Raphson()));
    connect(ui->elimiagaguss,SIGNAL(clicked()),this,SLOT(Eliminacion_Gaussiana()));
    connect(ui->gauss2_button,SIGNAL(clicked()),this,SLOT(Gauss_Seidel()));
    connect(ui->interpolacion,SIGNAL(clicked()),this,SLOT(Interpolacion_de_Lagrange()));
    connect(ui->runke_botton,SIGNAL(clicked()),this,SLOT(Runge_Kutta()));
    connect(ui->hule_botton,SIGNAL(clicked()),this,SLOT(Euler_SLOT()));
    connect(ui->bisec,SIGNAL(clicked(bool)),this,SLOT(biseccion_slot()));


       connect(ui->salte,SIGNAL(clicked()),this,SLOT(salir()));
}


my_sistem::~my_sistem()
{
    delete ui;
}


void my_sistem::on_pushButton_16_clicked()
{
   QMessageBox::information(this,"Informacion","Este programa fue creado por <font color=yellow><i>Alvaro Yair Garcia Murrieta</i></font>. \n (^o^)/ Gracias por usar mi Program.  ");
}


void my_sistem::diferenciacion_numerica()
{
   dif->show();
}


void my_sistem::interacion_de_punto_fijo()
{
    puntofijo->show();
}


void my_sistem::integracion_numerica()
{
    integ->show();
}


void my_sistem::regrecion_lineal()
{
    reclin->show();
}

void my_sistem::regreciion_lineal_multiple()
{
recmult->show();
}

void my_sistem::Newton_Raphson()
{
    newton->show();
}

void my_sistem::Eliminacion_Gaussiana()
{
    gauss->show();
}

void my_sistem::Gauss_Seidel()
{
    seid->show();
}

void my_sistem::Interpolacion_de_Lagrange()
{
    lagranja->show();
}

void my_sistem::Runge_Kutta()
{
    runker->show();
}
 void my_sistem::Euler_SLOT()
 {
     Hule->show();
 }
 void my_sistem::biseccion_slot()
 {
     biseccion->show();
 }

void my_sistem::salir()
{
    delete recmult;
    delete reclin;
    delete  puntofijo;
    delete dif ;
    delete integ;
    delete newton;
    delete gauss;
    delete seid;
    delete lagranja;
    delete runker;
    delete Hule;
    close();
}


