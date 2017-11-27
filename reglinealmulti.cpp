#include "reglinealmulti.h"
#include "ui_reglinealmulti.h"

RegLinealMulti::RegLinealMulti(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegLinealMulti)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(metodos7())); //Connections slots-buttons
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(borrar7()));
connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
}

RegLinealMulti::~RegLinealMulti()
{
    delete ui;
}

void RegLinealMulti :: metodos7()
{
   QString temp, temp2, temp3,temp4;/*qstring for creating cute strigns ;)*/
           double y1=ui->doubleSpinBox->value();
           double y2=ui->doubleSpinBox_2->value();
           double y3=ui->doubleSpinBox_3->value();
           double y4=ui->doubleSpinBox_4->value();
           double y5=ui->doubleSpinBox_5->value();
           double y6=ui->doubleSpinBox_6->value();
           double x1=ui->doubleSpinBox_7->value();
           double x2=ui->doubleSpinBox_8->value();
           double x3=ui->doubleSpinBox_9->value();
           double x4=ui->doubleSpinBox_10->value();
           double x5=ui->doubleSpinBox_11->value();
           double x6=ui->doubleSpinBox_12->value();
           double bx1=ui->doubleSpinBox_13->value();
           double bx2=ui->doubleSpinBox_14->value();
           double bx3=ui->doubleSpinBox_15->value();
           double bx4=ui->doubleSpinBox_16->value();
           double bx5=ui->doubleSpinBox_17->value();
           double bx6=ui->doubleSpinBox_18->value();
           double A1,A2,A3;
           double xa1=0,xa2=0,xa3=0;
           double ex1=100,ex2=100,ex3=100;
           double iter=0;
           double a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
           a1=6;
           b1=x1+x2+x3+x4+x5+x6;
           c1=bx1+bx2+bx3+bx4+bx5+bx6;
           d1 = y1+y2+y3+y4+y5+y6;
           b2 =(x1*x1)+(x2*x2)+(x3*x3)+(x4*x4)+(x5*x5)+(x6*x6);
           a2=b1;
           c2=(x1*bx1)+(x2*bx2)+(x3*bx3)+(x4*bx4)+(x5*bx5)+(x6*bx6);
           d2 = (x1*y1)+(x2*y2)+(x3*y3)+(x4*y4)+(x5*y5)+(x6*y6);
           d3 = (bx1*y1)+(bx2*y2)+(bx3*y3)+(bx4*y4)+(bx5*y5)+(bx6*y6);
           a3=c1;
           b3=c2;
           c3=(bx1*bx1)+(bx2*bx2)+(bx3*bx3)+(bx4*bx4)+(bx5*bx5)+(bx6*bx6);

//-----------------------------------------------------------------------------------------------------------------------------
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
//------------------------------------------------------------------------------------------------------------------------------------
        temp.append("LA ECUCION ES:")//in this part it show the results in spanish. Becase my progam is mean to be used by mexican people*/
             .append("Y=")
             .append(temp2.setNum(A1))
             .append("X")
                 .append("+")
             .append(temp3.setNum(A2))
             .append("X")
               .append("+")
                .append(temp4.setNum(A3))
                .append("X");
              ui->textBrowser->setText(temp);

}

void RegLinealMulti:: borrar7()
{
    ui->doubleSpinBox->setValue(0.0);
    ui->doubleSpinBox_2->setValue(0.0);
    ui->doubleSpinBox_3->setValue(0.0);
    ui->doubleSpinBox_4->setValue(0.0);
    ui->doubleSpinBox_5->setValue(0.0);
    ui->doubleSpinBox_6->setValue(0.0);
    ui->doubleSpinBox_7->setValue(0.0);
    ui->doubleSpinBox_8->setValue(0.0);
    ui->doubleSpinBox_9->setValue(0.0);
    ui->doubleSpinBox_10->setValue(0.0);
    ui->doubleSpinBox_11->setValue(0.0);
    ui->doubleSpinBox_12->setValue(0.0);
    ui->doubleSpinBox_13->setValue(0.0);
    ui->doubleSpinBox_14->setValue(0.0);
    ui->doubleSpinBox_15->setValue(0.0);
    ui->doubleSpinBox_16->setValue(0.0);
    ui->doubleSpinBox_17->setValue(0.0);
    ui->doubleSpinBox_18->setValue(0.0);
    ui->textBrowser->clear();
}
