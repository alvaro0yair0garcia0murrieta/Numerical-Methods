#include "integracion.h"
#include "ui_integracion.h"

Integracion::Integracion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Integracion)
{
    ui->setupUi(this);
    // Conexions
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(metodo9()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(deletes()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

Integracion::~Integracion()
{
    delete ui;
}


void Integracion::metodo9()
{
    QString temp,temp2,temp3; //Strings for temporal use.
    double I,xp,E;
    double xi=ui->doubleSpinBox->value();   //Recovers the value of Xi  from the spinbox.
    double fxi=ui->doubleSpinBox_2->value();   //Recovers the value of  X(i+1) from the spinbox.
    double x2=ui->doubleSpinBox_3->value();   //Recovers the value of Xi  from the spinbox.
    double fx2=ui->doubleSpinBox_4->value();   //Recovers the value of Xi  from the spinbox.
    double x3=ui->doubleSpinBox_5->value();   //Recovers the value of Xi  from the spinbox.
    double fx3=ui->doubleSpinBox_6->value();   //Recovers the value of Xi  from the spinbox.
    double x4=ui->doubleSpinBox_7->value();   //Recovers the value of Xi  from the spinbox.
    double fx4=ui->doubleSpinBox_8->value();   //Recovers the value of Xi  from the spinbox.
    double x5=ui->doubleSpinBox_9->value();   //Recovers the value of Xi  from the spinbox.
    double fx5=ui->doubleSpinBox_10->value();   //Recovers the value of Xi  from the spinbox.
    double x6=ui->doubleSpinBox_12->value();   //Recovers the value of Xi  from the spinbox.
    double fx6=ui->doubleSpinBox_13->value();   //Recovers the value of Xi  from the spinbox.
    double x7=ui->doubleSpinBox_14->value();   //Recovers the value of Xi  from the spinbox.
    double fx7=ui->doubleSpinBox_15->value();   //Recovers the value of Xi  from the spinbox.
    double x8=ui->doubleSpinBox_16->value();   //Recovers the value of Xi  from the spinbox.
    double fx8=ui->doubleSpinBox_17->value();
    double x9=ui->doubleSpinBox_18->value();   //Recovers the value of Xi  from the spinbox.
    double fx9=ui->doubleSpinBox_19->value();

    double h=ui->doubleSpinBox_11->value();

    xp=((xi-x2)+(x3-x4)+(x5-x6)+(x7-x8)+(x9-xi))/5;
    I=(h*(fxi+(2*(fx2+fx3+fx4+fx5+fx6+fx7+fx8))+fx9))/2;
    E=xp-(xi-x9/2);
    temp.append("La Integral es =").append(temp2.setNum(I)).append(" \nEl error es = ").append(temp3.setNum(E));
    ui->textBrowser->setText(temp);
}


void Integracion::deletes()
{
    ui->doubleSpinBox->setValue(0.0);  //clears the spinboxes
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
    ui->doubleSpinBox_19->setValue(0.0);

    ui->textBrowser->clear();     //clear textbowser
}

