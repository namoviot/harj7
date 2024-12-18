#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCounter(int i){
    counter = i;
}

int MainWindow::getCounter(){
    return counter;
}


void MainWindow::on_BtnCount_clicked()
{
    counter++;

    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->label->setText("Painiketta Count painettu: " + s + " kertaa");

}


void MainWindow::on_BtnReset_clicked()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->label->setText("Painiketta Count painettu: " + s + " kertaa");
}

