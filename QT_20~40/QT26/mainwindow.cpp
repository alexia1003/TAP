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
    //info
    QMessageBox::information(this, "Title here", "Text here");
}


void MainWindow::on_pushButton_2_clicked()
{
    //q ?
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Title here", "Do you like cats?",
                          QMessageBox::Yes | QMessageBox::No);

    if(reply ==  QMessageBox::Yes)
    {
        QMessageBox::information(this, "Title here", "You love cats");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    //warning
    QMessageBox::warning(this, "Title here", "Text here");
}


void MainWindow::on_pushButton_4_clicked()
{
    //custom
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "My title", "My text here",
                          QMessageBox::YesToAll | QMessageBox::Yes |
                          QMessageBox::No | QMessageBox::NoToAll);
}

