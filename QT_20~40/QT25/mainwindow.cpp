#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>
#include <QLabel>
#include <QProgressBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Statlabel = new QLabel(this);
    StatProgress = new QProgressBar(this);

    ui->statusbar->addPermanentWidget(Statlabel);
    ui->statusbar->addPermanentWidget(StatProgress);

    StatProgress->setTextVisible(false);
    Statlabel->setText("hello");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_Something_triggered()
{
    ui->statusbar->showMessage("Hello", 2);
    StatProgress->setValue(45);
}

