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

    m_positionSource = QGeoPositionInfoSource::createDefaultSource(this);

        if (m_positionSource) {
            connect(m_positionSource, &QGeoPositionInfoSource::positionUpdated,
                    this, &MainWindow::onPositionChanged);
            m_positionSource->startUpdates();
        }



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onPositionChanged(const QGeoPositionInfo &info)
{

}

