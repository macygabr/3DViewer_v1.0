#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "glview.h"
#include <QFileDialog>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class MainWindow;  //

QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_name_button_clicked();

    void on_screenshot_clicked();


    void on_gif_clicked();


    void on_change_y_valueChanged(int value);
    void on_change_x_valueChanged(int value);
    void on_zoom_valueChanged(int value);
    void on_spin_x_valueChanged(int value);
    void on_spin_y_valueChanged(int value);
    void on_spin_z_valueChanged(int value);


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H



