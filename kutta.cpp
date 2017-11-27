#include "kutta.h"
#include "ui_kutta.h"

Kutta::Kutta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kutta)
{
    ui->setupUi(this);
      //conecction
    connect(ui->METHOD_BOTTOM,SIGNAL(clicked()),this,SLOT(Method_kottash_slot()));
    connect(ui->ERASE2_BOTTON,SIGNAL(clicked()),this,SLOT(Erase_keso_kottage_slot();));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}
Kutta::~Kutta()
{
    delete ui;
}

//Funtion that we gonna use for this program
double Kutta::dy(double c){
    return (-2*pow(c,3))+(12*(c*c))-(20*c)+8.5;
}
//Integrate of the original funtion. Also needed
double Kutta::y(double c)
{
return (0.5*pow(c,4))+(4*pow(c,3))-(10*(c*c))+(8.5*c)+1;
}

void Kutta::Method_kottash_slot()
{
    //Variable declaration Time!!!!!!
    QString temp,tem2,temp3;
    double xf= ui->Xf2_spinbox->value();
    double xi= ui->Xi2_spinbox->value();

    double h=ui->h2_spinbox->value();

    double kutta;
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
             kutta= y(xi)+(h/2*(dy(xi+h)-(y(xi)+(h*dy(xi)))));
    }
     r= abs((dy(xf)-kutta)/dy(xf)) ;

     //Text prepared an presented
    temp.append("<i>Y(Xf)= </i>").append(tem2.setNum(kutta)).append("\n")
        .append("\n<i>Relative error= </i>").append(temp3.setNum(r)).append("%");

    ui->textBrowser->setText(temp);
 }

else
 {

    temp.append("Error :o");
    ui->textBrowser->setText(temp);
 }
    }

void Kutta::Erase_keso_kottage_slot()//erase the data
{
    ui->Xi2_spinbox->setValue(0.0);
    ui->Xf2_spinbox->setValue(0.0);
    ui->h2_spinbox->setValue(0.0);
    ui->textBrowser->clear();
}
