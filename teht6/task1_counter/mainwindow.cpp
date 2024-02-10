#include "mainwindow.h"
#include "ui_counter.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->igotyou, &QCheckBox::stateChanged, []() {
        std::terminate();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_igotyou_stateChanged(int arg1)
{

}

void MainWindow::on_countButton_clicked()
{

}


void MainWindow::on_resetButton_clicked()
{

}

void MainWindow::on_result_returnPressed()
{

}

