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
    connect(ui->enter, &QPushButton::clicked, this, &::MainWindow::enterClickedHandler);

    connect(ui->num1, &QLineEdit::textChanged, this, &MainWindow::on_num1_textChanged);
    connect(ui->num2, &QLineEdit::textChanged, this, &MainWindow::on_num2_textChanged);
    connect(ui->result, &QLineEdit::textChanged, this, &MainWindow::on_result_textChanged);


}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::numberClickedHandler() {
    qDebug() << "numberClicked";
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString text = button->text();

    if (state == 1) {
        num1.append(text);
        ui->num1->setText(num1);
    } else if (state == 2) {
        num2.append(text);
        ui->num2->setText(num2);
    }
}

void MainWindow::clearAndEnterClickedHandler() {
    qDebug() << "clearAndEnterClicked";
    enterClickedHandler();
    state = 1;
    operand = 0;
    num1 = num2 = "";
    result = 0;
    ui->num1->clear();
    ui->num2->clear();
}

void MainWindow::addSubMulDivClickedHandler() {
    qDebug() << "addSubMulDivClicked";
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString text = button->text();

    if (text == "+") {
        operand = 1;
    } else if (text == "-") {
        operand = 2;
    } else if (text == "*") {
        operand = 3;
    } else if (text == "/") {
        operand = 4;
    }

    state = 2;
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


void MainWindow::enterClickedHandler() {
    float n1 = num1.toFloat();
    float n2 = num2.toFloat();

    switch (operand) {
    case 1:
        result = n1 + n2;
        break;
    case 2:
        result = n1 - n2;
        break;
    case 3:
        result = n1 * n2;
        break;
    case 4:
        if (n2 != 0) {
            result = n1 / n2;
        } else {
            qDebug() << "Error: Division by zero!";
        }
        break;
    default:
        qDebug() << "Error: Invalid operation!";
        break;
    }

    ui->result->setText(QString::number(result));
    qDebug() << "enterClicked\n";
    qDebug() << result;
}
