
#include "met3.h"
#include "ui_met3.h"

met3::met3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::met3)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(metod3o())); //Connections
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(borra3r()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));

}



met3::~met3()
{
    delete ui;
}

void met3::metod3o()
{

    QString temp,temp2,temp3,temp4,temp5;
    double a1=ui->doubleSpinBox->value();
    double a2=ui->doubleSpinBox_2->value();
    double a3=ui->doubleSpinBox_3->value();
    double a4=ui->doubleSpinBox_4->value();
    double b1=ui->doubleSpinBox_5->value();
    double b2=ui->doubleSpinBox_6->value();
    double b3=ui->doubleSpinBox_7->value();
    double b4=ui->doubleSpinBox_8->value();
    double c1=ui->doubleSpinBox_9->value();
    double c2=ui->doubleSpinBox_10->value();
    double c3=ui->doubleSpinBox_11->value();
    double c4=ui->doubleSpinBox_12->value();
    double d1=ui->doubleSpinBox_13->value();
    double d2=ui->doubleSpinBox_14->value();
    double d3=ui->doubleSpinBox_15->value();
    double d4=ui->doubleSpinBox_16->value();
    double a=ui->doubleSpinBox_17->value();
    double b=ui->doubleSpinBox_18->value();
    double c=ui->doubleSpinBox_19->value();
    double d=ui->doubleSpinBox_20->value();
    double r1;
    double r2;
    double r3;
    double r4;

    a1=a1/a1;
    b1=b1/a1;
    c1=c1/a1;
    d1=d1/a1;
    a=a/a1;
    a2=((-a2)*(a1))+a2;
    b2=((-a2)*(b1))+b2;
    c2=((-a2)*(c1))+c2;
    d2=((-a2)*(d1))+d2;
    b=((-a2)*(a))+b;
    b2=b2/b2;
    c2=c2/b2;
    d2=d2/b2;
    b=b/b2;
    a3=((-a3)*(a1))+a3;
    b3=((-a3)*(b1))+b3;
    c3=((-a3)*(c1))+c3;
    d3=((-a3)*(d1))+d3;
    c=((-a3)*(a))+c;
    b3=((-b3)*(b2))+b3;
    c3=((-b3)*(c2))+c3;
    d3=((-b3)*(d2))+d3;
    c=((-b3)*(b))+c;
    c3=c3/c3;
    d3=d3/c3;
    c=c/c3;
    a4=((-a4)*(a1))+a4;
    b4=((-a4)*(b1))+b4;
    c4=((-a4)*(c1))+c4;
    d4=((-a4)*(d1))+d4;
    d=((-a4)*(a))+d;
    b4=((-b4)*(b2))+b4;
    c4=((-b4)*(c2))+c4;
    d4=((-b4)*(d2))+d4;
    d=((-b4)*(b))+d;
    c4=((-c4)*(c3))+c4;
    d4=((-c4)*(d3))+d4;
    d=((-c4)*(c))+d;
    d=d/d4;
    d4=d4/d4;
    r4=d;
    r3=c-(d3*r4);
    r2=b-(r3*c2)-(r4*d2);
    r1=a-(r4*d1)-(r3*c1)-(r2*b1);
    temp.append("X1=").append(temp2.setNum(r1)).append("\nX2=").append(temp3.setNum(r2)).append("\nX3=").append(temp4.setNum(r3)).append("\nX4=").append(temp5.setNum(r4));
ui->textBrowser->setText(temp);
}

void met3::borra3r(){// borrar

    ui->doubleSpinBox->setValue(0.00);
    ui->doubleSpinBox_2->setValue(0.00);
    ui->doubleSpinBox_3->setValue(0.00);
    ui->doubleSpinBox_4->setValue(0.00);
    ui->doubleSpinBox_5->setValue(0.00);
    ui->doubleSpinBox_6->setValue(0.00);
    ui->doubleSpinBox_7->setValue(0.00);
   ui->doubleSpinBox_8->setValue(0.00);
    ui->doubleSpinBox_9->setValue(0.00);
    ui->doubleSpinBox_10->setValue(0.00);
    ui->doubleSpinBox_11->setValue(0.00);
    ui->doubleSpinBox_12->setValue(0.00);
    ui->doubleSpinBox_13->setValue(0.00);
    ui->doubleSpinBox_14->setValue(0.00);
    ui->doubleSpinBox_15->setValue(0.00);
    ui->doubleSpinBox_16->setValue(0.00);
    ui->doubleSpinBox_17->setValue(0.00);
    ui->doubleSpinBox_18->setValue(0.00);
    ui->doubleSpinBox_19->setValue(0.00);
    ui->doubleSpinBox_20->setValue(0.00);
    ui->textBrowser->clear();
    }
