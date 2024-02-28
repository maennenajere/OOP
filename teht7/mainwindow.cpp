#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    
    updateProgressBar();
    setGameInfoText("Select playtime and press start game!", 12);
    
    player1Time = 0;
    player2Time = 0;
    currentPlayer = 1;
    gameTime = 0;
    
    pQTimer = new QTimer(this);
    
    ui->player1progressBar->setMaximum(100);
    ui->player2progressBar->setMaximum(100);
    
    connect(ui->player1Button, &QPushButton::clicked, this, &MainWindow::on_player1Button_clicked);
    connect(ui->player2Button, &QPushButton::clicked, this, &MainWindow::on_player2Button_clicked);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::on_startButton_clicked);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::on_stopButton_clicked);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);
}

MainWindow::~MainWindow() {
    delete ui;
    delete pQTimer;
}

void MainWindow::timeout() {
    updateProgressBar();
}

void MainWindow::updateProgressBar() {
    ui->player1progressBar->setValue(player1Time);
    ui->player2progressBar->setValue(player2Time); 
}

void MainWindow::setGameInfoText(QString text, short fontSize) {
    ui->label->setText(text);
    ui->label->setFont(QFont("", fontSize));
}

void MainWindow::startTimer() {
    pQTimer->start(1000);
}

void MainWindow::on_startButton_clicked() {
    qDebug() << "start click!";
    updateProgressBar();
    startTimer();
    setGameInfoText("The game is running. Player 1 starts.", 12);
}

void MainWindow::on_player1Button_clicked() {
    qDebug() << "p1 click!";
}

void MainWindow::on_player2Button_clicked() {
    qDebug() << "p2 click!";
}

void MainWindow::on_stopButton_clicked() {
    qDebug() << "stop click!";
    pQTimer->stop();
    setGameInfoText("Game stopped.", 12);
}

void MainWindow::switchPlayer() {
    
}

void MainWindow::on_shortGame_clicked()
{
    qDebug() << "shortGame click!";
}


void MainWindow::on_longGame_clicked()
{
    qDebug() << "longGame click!";
}

