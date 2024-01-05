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
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QMessageBox::information(this, "Title", ui->radioButton->text());
    }

    if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(this, "Title", ui->radioButton_2->text());
    }
}

