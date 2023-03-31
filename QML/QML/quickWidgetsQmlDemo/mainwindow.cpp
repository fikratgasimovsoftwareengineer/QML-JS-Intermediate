#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // here we set qml source file
    ui->quickWidget->setSource(QUrl("qrc:/file.qml"));
    ui->quickWidget->setResizeMode(QQuickWidget::SizeRootObjectToView);
    ui->quickWidget->show();



}

MainWindow::~MainWindow()
{
    delete ui;
}

