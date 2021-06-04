#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(600,500);//500*400 man darf es nicht verändern
}

MainWindow::~MainWindow()
{
    delete ui;
}

