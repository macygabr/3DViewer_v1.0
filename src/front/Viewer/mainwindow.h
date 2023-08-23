#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "draw.h"
#include <QFileDialog>

extern "C" {
#include "../../back/transformations.h"
}


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
//    void SaveState(const QColor &backc);
//    void RestoreState(QColor &backc);
    void start();
    void Quit();

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

    void on_back_colour_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H



