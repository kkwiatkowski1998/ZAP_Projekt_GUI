#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_spinBox_rozmiar_planszy_valueChanged(int arg1);

    void on_pushButton_start_clicked();

    void on_spinBox_ilosc_symboli_linia_valueChanged(int arg1);

    void on_radioButton_1gracz_pressed();

    void on_radioButton_2graczy_pressed();

    void on_radioButton_bool_znak_X_pressed();

    void on_radioButton_bool_znak_O_pressed();

    void on_radioButton_zaczynajacy_gracz1_pressed();

    void on_radioButton_zaczynajacy_gracz12_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
