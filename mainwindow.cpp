#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    value1(0),
    value2(0),
    value3(0),
    value4(0),
    value5(0),
    value6(0),
    value7(0),
    value8(0),
    value9(0),
    value10(0),
    value11(0),
    higher(0)
{
    ui->setupUi(this);

    this->setWindowTitle("Grade calculation");

    QObject::connect( ui->spinBox ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info1(int) ) );
    QObject::connect( ui->spinBox_3 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info2(int) ) );
    QObject::connect( ui->horizontalSlider ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info1(int)) );
    QObject::connect( ui->horizontalSlider_3 ,SIGNAL( valueChanged(int) ),
                     this, SLOT( get_info2(int)) );
    QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info3(int) ) );
    QObject::connect( ui->spinBox_7 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info4(int) ) );
    QObject::connect( ui->horizontalSlider_3 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info3(int)) );
    QObject::connect( ui->horizontalSlider_7 ,SIGNAL( valueChanged(int) ),
                     this, SLOT( get_info4(int)) );
    QObject::connect( ui->spinBox_8 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info5(int) ) );
    QObject::connect( ui->horizontalSlider_8 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info5(int)) );
    QObject::connect( ui->spinBox_9 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info6(int) ) );
    QObject::connect( ui->horizontalSlider_9 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info6(int)) );
    QObject::connect( ui->spinBox_17 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info7(int) ) );
    QObject::connect( ui->horizontalSlider_17 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info7(int)) );
    QObject::connect( ui->spinBox_16 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info8(int) ) );
    QObject::connect( ui->horizontalSlider_16 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info8(int)) );
    QObject::connect( ui->spinBox_4 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info9(int) ) );
    QObject::connect( ui->horizontalSlider_4 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info9(int)) );
    QObject::connect( ui->spinBox_5 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info10(int) ) );
    QObject::connect( ui->horizontalSlider_5 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info10(int)) );
    QObject::connect( ui->spinBox_6 ,SIGNAL( valueChanged(int) ),
                         this, SLOT( get_info11(int) ) );
    QObject::connect( ui->horizontalSlider_6 ,SIGNAL( valueChanged(int) ),
                    this, SLOT( get_info11(int)) );

    QObject::connect(ui->button1,SIGNAL(clicked()),this,SLOT(update()));
    QObject::connect(ui->button2,SIGNAL(clicked()),this,SLOT(update2()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::get_info1(int value){
    value1=value;
    //update();
    return;
}
void MainWindow::get_info2(int value){
    value2=value;
    //update();
    return;
}
void MainWindow::get_info3(int value){
    value3=value;
   // update();
    return;
}
void MainWindow::get_info4(int value){
    value4=value;
   // update();
    return;
}
void MainWindow::get_info5(int value){
    value5=value;
   // update();
    return;
}
void MainWindow::get_info6(int value){
    value6=value;
   // update();
    return;
}
void MainWindow::get_info7(int value){
    value7=value;
   // update();
    return;
}
void MainWindow::get_info8(int value){
    value8=value;
   // update();
    return;
}
void MainWindow::get_info9(int value){
    value9=value;
   // update();
    return;
}
void MainWindow::get_info10(int value){
    value10=value;
  //  update();
    return;
}
void MainWindow::get_info11(int value){
    value11=value;
  //  update();
    return;
}



void MainWindow::update(){
    QString text( QString::number( (value1+value2+value3+value4+value5+value6+value7+value8)/8*0.25+(value9+value10)*0.2+value11*0.35));
       ui->label_11->setText(text);
}

void MainWindow::update2(){
    higher=value9;
    if(value10>value9){
        higher=value10;
    }
    QString text( QString::number( (value1+value2+value3+value4+value5+value6+value7+value8)/8*0.25+higher*0.3+value11*0.44));
       ui->label_11->setText(text);
}
