#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),

    count(0) // initialize counter

{
    ui->setupUi(this);
    QObject::connect(ui->iGotYou, &QCheckBox::stateChanged, []() {
        std::terminate();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_countButton_clicked()
{
    qDebug() << "countButton!";
    count++;
    ui->resultBox->setText(QString::number(count));
}

void MainWindow::on_resetButton_clicked()
{
    qDebug() << "resetButton!";
    count = 0;
    ui->resultBox->setText(QString::number(count));
}


void MainWindow::on_resultBox_returnPressed()
{
    qDebug() << "+1";
}


void MainWindow::on_iGotYou_stateChanged(int arg1)
{
    qDebug() << "I can resist everything except temptation...";
}

