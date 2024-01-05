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

    //ui->listWidget->addItem("Hello");

    for(int i=0; i<9; i++)
    {
        ui->listWidget->addItem(QString::number(i) + " item");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->currentItem()->setText("Furry bunny");
    QListWidgetItem *itm = ui->listWidget->currentItem();
    itm->setText("Furry bunny of doom");
    //itm->setTextColor(Qt::red);
    itm->setForeground(Qt::red);
    //itm->setBackgroundColor(Qt::black);
    itm->setBackground(Qt::black);
}

