#include "euler.h"
#include<cmath>
#include "ui_euler.h"

Euler::Euler(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Euler)
{
    //conecction
    ui->setupUi(this);
    connect(ui->METHOD_BOTTOM,SIGNAL(clicked()),this,SLOT(Method_slot()));
    connect(ui->ERASE_BOTTON,SIGNAL(clicked()),this,SLOT(Erase_slot()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}

Euler::~Euler()
{
    delete ui;
}
//Funtion that we gonna use for this program
double Euler::funcion(double c){
    return (-2*pow(c,3))+(12*(c*c))-(20*c)+8.5;
}
//Integrate of the original funtion. Also needed
double Euler::funtion(double c)
{
return (0.5*pow(c,4))+(4*pow(c,3))-(10*(c*c))+(8.5*c)+1;
}


void Euler::Method_slot()
{
    //Variable declaration Time!!!!!!
    QString temp,tem2,temp3;
    double xf= ui->Xf_spinbox->value();
    double xi= ui->Xi_spinbox->value();

    double h=ui->h_spinbox->value();

    double euler;
    double n;// n is the number of times the program is gonna loop (xf=n*h+Xi)
    int entero;
    double r;

 //This is for the limitation of the method a.k.a weird things will happen.
    n=(xf-xi)/h;
    entero= n;


 if((n-entero==0)&(n>0))//limitacion: always the loop number has to be an integred and positive.YOU CAN MAKE A PROGRAM THAT have 4 loops AND 0.32 of a loop or -4 loops
 {
     for( xi; xi < xf; xi = xi + h )//The actual method
    {
             euler= funtion(xi)+ (funcion(xi)*h);
    }
     r= abs(funtion(xf)-euler/funtion(xf)) ;

     //Text prepared an presented
    temp.append("<i>Y(Xf)= </i>").append(tem2.setNum(euler)).append("\n")
        .append("<i>Relative error= </i>").append(temp3.setNum(r)).append("%");

    ui->textBrowser->setText(temp);
 }

else
 {

    temp.append("Error :o");
    ui->textBrowser->setText(temp);
 }
    }

void Euler::Erase_slot()//erase the data
{
    ui->Xi_spinbox->setValue(0.0);
    ui->Xf_spinbox->setValue(0.0);
    ui->h_spinbox->setValue(0.0);
    ui->textBrowser->clear();



}
