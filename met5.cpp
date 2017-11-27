#include "met5.h"
#include "ui_met5.h"
//headers
#include <Qstring>
#include <cmath>
#include <qmath.h>

met5::met5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::met5)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(metodo5()));//connections
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(borrar5()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}



met5::~met5()
{
    delete ui;
}

void met5::metodo5()
{
     QString temp,temp2,temp3,temp4;
     //string

    x[0][0]=ui->doubleSpinBox->value();
    x[0][1]=ui->doubleSpinBox_2->value();
    x[1][0]=ui->doubleSpinBox_3->value();
    x[1][1]=ui->doubleSpinBox_4->value();
    x[2][0]=ui->doubleSpinBox_5->value();
    x[2][1]=ui->doubleSpinBox_6->value();
    x[3][0]=ui->doubleSpinBox_7->value();
    x[3][1]=ui->doubleSpinBox_8->value();

    double X=ui->doubleSpinBox_9->value();

    int a=5,i,j,k;

    double p,f;

    double polinomio[5];

    for(k=1;k<a;k++)
    {// first cycle
        p=0;
        for(i=0;i<k+1;i++){//cycle controls
            f=1;
            for(j=0;j<k+1;j++){
                if(i!=j){
                 f=f*((X-x[j][0])/(x[i][0]-x[j][0]));//method of Lagrange in cycles
                }
            }
            f=f*x[i][1];// multiply the result of the formula by the value of F (x)
            p=p+f;//the value of the polynomial is added
       }
        polinomio[k]=p;//result
    }
    temp    .append("f1=")
            .append(temp2.setNum(polinomio[1]))
            .append("\nF2=")
            .append(temp3.setNum(polinomio[2]))
            .append("f3=")
            .append(temp4.setNum(polinomio[3]));

    ui->textBrowser->setText(temp);
     //results
}

void met5::borrar5(){ //purga
    ui->doubleSpinBox->setValue(0.0);
    ui->doubleSpinBox_2->setValue(0.0);
    ui->doubleSpinBox_3->setValue(0.0);
    ui->doubleSpinBox_4->setValue(0.0);
    ui->doubleSpinBox_5->setValue(0.0);
    ui->doubleSpinBox_6->setValue(0.0);
    ui->doubleSpinBox_7->setValue(0.0);
    ui->doubleSpinBox_8->setValue(0.0);
    ui->doubleSpinBox_9->setValue(0.0);
    ui->textBrowser->clear();
}
