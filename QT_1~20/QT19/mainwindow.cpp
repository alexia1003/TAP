#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->comboBox->addItem("Hello");
    //ui->comboBox->addItem("World");

    for(int i=0; i<9; i++)
    {
        ui->comboBox->addItem(QString::number(i) + " item");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "Title", ui->comboBox->currentText());

}

