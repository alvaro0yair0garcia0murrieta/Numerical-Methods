#include "met2.h"
#include "ui_met2.h"
#include <QString>
#include <cmath>

met2::met2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::met2)
{
    ui->setupUi(this);
    connect(ui->metodo,SIGNAL(clicked()),this,SLOT(metodo2()));
    connect(ui->borrar,SIGNAL(clicked()),this,SLOT(borar2()));
    connect(ui->sal,SIGNAL(clicked()),this,SLOT(close()));
}

met2::~met2()
{
    delete ui;
}

double met2::fp(double z)
{
return z*z;
}

double met2::df(double v)
{
    return 2*v;
}

void met2::metodo2()
{
QString tmp1,tmp2,tmp3,tmp4;
double ea=100;
 double err=ui->er->value();
  double x1=ui->x1->value();
  double iti=ui->spinBox->value();
   int rep=1;
   double x=0.0;
   double xr;



  while(rep<=iti && ea>=err)
  {
     x = x1-(fp(x1)/df(x1));
     ea=100*std::abs((x-x1)/x);
     x1=x;
     xr=x;
     rep++;

  }

  tmp1.append("La Raiz es:")
  .append(tmp2.setNum(x))
.append("\n  Error:")
.append(tmp3.setNum(ea))
.append("\nnumero de ititraciones")
.append(tmp4.setNum(iti));

  ui->texto->setText(tmp1);
}

void met2::borar2()
{
   ui->spinBox->setValue(0.0);
   ui->x1->setValue(0.0);
   ui->er->setValue(0.0);
   ui->texto->clear();
}
