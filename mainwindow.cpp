#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //s = new Sculptor(10,10,10);

}

MainWindow::~MainWindow()
{
    delete ui;
}
