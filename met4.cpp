#include "met4.h"
#include "ui_met4.h"
#include <cmath>

met4::met4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::met4)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(metodos4())); //Connections slots-buttons
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(borrar4()));
connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}

met4::~met4()
{
    delete ui;
}

void met4::metodos4()
{

    QString temp,temp2,temp3,temp4;
    double a1=ui->doubleSpinBox_13->value();
    double a2=ui->doubleSpinBox_14->value();
    double a3=ui->doubleSpinBox_15->value();
    double b1=ui->doubleSpinBox_2->value();
    double b2=ui->doubleSpinBox_3->value();
    double b3=ui->doubleSpinBox_4->value();
    double c1=ui->doubleSpinBox_10->value();
    double c2=ui->doubleSpinBox_11->value();
    double c3=ui->doubleSpinBox_9->value();
    double d1=ui->doubleSpinBox_5->value();
    double d2=ui->doubleSpinBox_6->value();
    double d3=ui->doubleSpinBox_7->value();
    double A1,A2,A3;
    double xa1=0,xa2=0,xa3=0;
    double ex1=100,ex2=100,ex3=100;
    double iter=0;

    while(((ex1>50)||(ex2>50)||(ex3>50)||(50>50)) && (iter<1000))
    {  // Conditions for the method to be executed
        A1=(d1-(b1*A2)-(c1*A3))/a1;
        A2=(d2-(a2*A1)-(c2*A3))/b2;
        A3=(d3-(a3*A1)-(b3*A2))/c3;

        ex1=abs(((A1-xa1)/A1)*100);
        ex2=abs(((A2-xa2)/A2)*100);
        ex3=abs(((A3-xa3)/A3)*100);

        xa1=A1;
        xa2=A2;
        xa3=A3;

        iter++;
    }


    temp.append("X1=").append(temp2.setNum(xa1)).append("\nX2=").append(temp3.setNum(xa2)).append("\nX3=").append(temp4.setNum(xa3));
ui->textBrowser->setText(temp);
}

void met4:: borrar4()
{

    ui->doubleSpinBox_2->setValue(0.0);
    ui->doubleSpinBox_3->setValue(0.0);
    ui->doubleSpinBox_4->setValue(0.0);
    ui->doubleSpinBox_5->setValue(0.0);
    ui->doubleSpinBox_6->setValue(0.0);
    ui->doubleSpinBox_7->setValue(0.0);
    ui->doubleSpinBox_9->setValue(0.0);
    ui->doubleSpinBox_10->setValue(0.0);
    ui->doubleSpinBox_11->setValue(0.0);
    ui->doubleSpinBox_15->setValue(0.0);
    ui->doubleSpinBox_14->setValue(0.0);
    ui->doubleSpinBox_13->setValue(0.0);

    ui->textBrowser->clear();
}
