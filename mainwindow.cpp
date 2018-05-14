#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mechanika.h"
#include <iostream>

using namespace std;

Mechanika mechanika;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->rect();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_spinBox_rozmiar_planszy_valueChanged(int arg1)
{
    mechanika.dane_rozmiar_planszy = arg1;
}

void MainWindow::on_pushButton_start_clicked()
{
    mechanika.rozgrywka();
}

void MainWindow::on_spinBox_ilosc_symboli_linia_valueChanged(int arg1)
{
    mechanika.dane_liczba_symboli_linia = arg1;
}

void MainWindow::on_radioButton_1gracz_pressed()
{
    mechanika.dane_gvsg = false;
}

void MainWindow::on_radioButton_2graczy_pressed()
{
    mechanika.dane_gvsg = true;
}

void MainWindow::on_radioButton_bool_znak_X_pressed()
{
    mechanika.dane_znak = true;
}

void MainWindow::on_radioButton_bool_znak_O_pressed()
{
    mechanika.dane_znak = false;
}

void MainWindow::on_radioButton_zaczynajacy_gracz1_pressed()
{
    mechanika.dane_zaczynajacy = true;
}

void MainWindow::on_radioButton_zaczynajacy_gracz12_pressed()
{
    mechanika.dane_zaczynajacy = false;
}
