#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {

    ui->setupUi(this);
    num1 = "";
    num2 = "";
    state = 1;
    operand = 0;
    result = 0;

    connect(ui->N0, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N1, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N2, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N3, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N4, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N5, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N6, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N7, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N8, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);
    connect(ui->N9, &QPushButton::clicked, this, &::MainWindow::numberClickedHandler);

    connect(ui->add, &QPushButton::clicked, this, &::MainWindow::addSubMulDivClickedHandler);
    connect(ui->sub, &QPushButton::clicked, this, &::MainWindow::addSubMulDivClickedHandler);
    connect(ui->mul, &QPushButton::clicked, this, &::MainWindow::addSubMulDivClickedHandler);
    connect(ui->div, &QPushButton::clicked, this, &::MainWindow::addSubMulDivClickedHandler);

    connect(ui->clear, &QPushButton::clicked, this, &::MainWindow::clearAndEnterClickedHandler);
    connect(ui->enter, &QPushButton::clicked, this, &::MainWindow::clearAndEnterClickedHandler);

    connect(ui->num1, &QLineEdit::textChanged, this, &MainWindow::on_num1_textChanged);
    connect(ui->num2, &QLineEdit::textChanged, this, &MainWindow::on_num2_textChanged);
    connect(ui->result, &QLineEdit::textChanged, this, &MainWindow::on_result_textChanged);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::numberClickedHandler() {
    qDebug() << "numberClicked";
}

void MainWindow::clearAndEnterClickedHandler() {
    qDebug() << "clearAndEnterClicked";
    state = 1;
    operand = 0;
    num1 = num2 = "";
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::addSubMulDivClickedHandler() {
    qDebug() << "addSubMulDivClicked";
}

void MainWindow::resetLineEdits() {
    state = 1;
    operand = 0;
    num1 = num2 = "";
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
}

void MainWindow::on_num1_textChanged(const QString)
{
    num1 = ui->num1->text();
}

void MainWindow::on_num2_textChanged(const QString)
{
    num2 = ui->num2->text();
}

void MainWindow::on_result_textChanged(const QString)
{
    result = ui->result->text().toFloat();
}
