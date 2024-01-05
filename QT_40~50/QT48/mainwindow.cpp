#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QDirModel(this);
    model->setReadOnly(false);
    model->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);

    ui->treeView->setModel(model);

    QModelIndex index = model->index("F:/");

    ui->treeView->expand(index);
    ui->treeView->scrollTo(index);
    ui->treeView->setCurrentIndex(index);
    ui->treeView->resizeColumnToContents(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //make dir
    QModelIndex index = ui->treeView->currentIndex();
    if(!index.isValid()) return;

    QString name = QInputDialog::getText(this,"Name","Enter a name");

    if(name.isEmpty()) return;

    model->mkdir(index,name);
}


void MainWindow::on_pushButton_2_clicked()
{
    //delete
    QModelIndex index = ui->treeView->currentIndex();
    if(!index.isValid()) return;

    if(model->fileInfo(index).isDir())
    {
        //dir
        model->rmdir(index);
    }
    else
    {
        //file
        model->remove(index);
    }
}

