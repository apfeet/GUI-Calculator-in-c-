#include "mainwindow.h"
#include "./ui_mainwindow.h"

double calcval = 0.00;
bool divi = false;
bool mult = false;
bool less = false;
bool plus = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->label->setText(QString::number(calcval));
    QPushButton *numbutton[10];


    for(int i = 0; i<10; i++){
        QString Butname = "Button" + QString::number(i);

        numbutton[i] = MainWindow::findChild<QPushButton *>(Butname);

        connect(numbutton[i],SIGNAL(released()),this,SLOT(NumberPressed()));
    };

    connect(ui->pushButton_11,SIGNAL(released()),this,SLOT(MathOperators()));
    connect(ui->pushButton_12,SIGNAL(released()),this,SLOT(MathOperators()));
    connect(ui->pushButton_13,SIGNAL(released()),this,SLOT(MathOperators()));
    connect(ui->pushButton_14,SIGNAL(released()),this,SLOT(MathOperators()));
    connect(ui->pushButton_15,SIGNAL(released()),this,SLOT(Results()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NumberPressed(){

    QPushButton *button = (QPushButton *) sender();
    QString butval = button->text();

    QString displayval = ui->label->text();

    if((displayval.toDouble() == 0) || (displayval.toDouble() == 0.0)){

        ui->label->setText(butval);
    }else{
        QString NewVal = displayval + butval;
        double dbl = NewVal.toDouble();
        ui->label->setText(QString::number(dbl));
    }
};

void MainWindow::MathOperators(){

    divi = false;
    mult = false;
    less = false;
    plus = false;

    QString displayvalue = ui->label->text();
    calcval = displayvalue.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butvalue = button->text();
    if(QString::compare(butvalue,"/", Qt::CaseInsensitive)==0){
        divi = true;
    }else if(QString::compare(butvalue,"x", Qt::CaseInsensitive)==0){
        mult = true;
    }else if(QString::compare(butvalue,"+", Qt::CaseInsensitive)==0){
        plus = true;
    }else if(QString::compare(butvalue,"-", Qt::CaseInsensitive)==0){
        less = true;
    };
    ui->label->setText("");


};

void MainWindow::Results(){
    double solution = 0.0;
    QString DisplayValue = ui->label->text();
    double  dblDisplayval = DisplayValue.toDouble();
    if(divi || mult || less || plus){
        if(plus){
            solution = calcval+dblDisplayval;
        }else if(less){
           solution = calcval-dblDisplayval;
        }else if(divi){
            solution = calcval/dblDisplayval;
         }else if(mult){
            solution = calcval*dblDisplayval;
         }
    }
    ui->label->setText(QString::number(solution));
}


void MainWindow::on_pushButton_16_clicked()
{
    ui->label->setText("0");
}

