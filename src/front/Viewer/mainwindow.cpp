#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "glview.h"

extern "C" {
#include "gif.h"
}


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_name_button_clicked()
{
    QString fileName =
          QFileDialog::getOpenFileName(this, "Open a file", "/Users", "*.obj");
      if (fileName != "") {
          ui->name_display->setText(" "+fileName.split('/').last());
          char *file_way = new char(fileName.length());
            QByteArray barr = fileName.toLatin1();
            strlcpy(file_way, barr, fileName.length() + 1);
//struct something something = parser(file_way);
//print in label how many points and polygons
      }
}


void MainWindow::on_screenshot_clicked()
{
    QImage img(ui->openGLWidget->size(), QImage::Format_RGB32);
      QPainter painter(&img);
      QString temp = QCoreApplication::applicationDirPath();
      QString fileName = QFileDialog::getSaveFileName(
          this, tr("Save file"), temp + "/images", tr("JPG (*.jpg);; BMP (*.bmp)"));
      bool res = false;
      ui->openGLWidget->render(&painter);
      res = img.save(fileName);
      if (res == true) {
        QMessageBox msgBox;
        msgBox.setText("Saved successfully ✨");
        msgBox.exec();
      } else {
        QMessageBox::warning(this, "", "Failed to save 😕");
      }
}


void MainWindow::on_gif_clicked()
{
    QString temp = QCoreApplication::applicationDirPath();
     QString fileName = QFileDialog::getSaveFileName(
         this, tr("Save gif"), temp + "/images", tr("GIF (*.gif)"));
     if (!fileName.isEmpty()) {
       QImage img(ui->openGLWidget->size(), QImage::Format_RGB32);
       QPainter painter(&img);
       QTime dieTime;
       GifWriter gif;
       QByteArray ba = fileName.toLocal8Bit();
       const char *c_str = ba.data();
       GifBegin(&gif, c_str, 640, 480, 100);
       for (int i = 0; i < 50; ++i) {
         ui->openGLWidget->render(&painter);
         GifWriteFrame(&gif, img.bits(), 640, 480, 100);
         dieTime = QTime::currentTime().addMSecs(100);
         while (QTime::currentTime() < dieTime)
           QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
       }
       GifEnd(&gif);
       QMessageBox msgBox;
       msgBox.setText("Saved successfully ✨");
       msgBox.exec();
     } else {
       QMessageBox::warning(this, "", "Failed to save 😕");
     }
}


void MainWindow::on_change_y_valueChanged(int value)
{
    ui->howmuch_y->setText(QString::number(value));
}

void MainWindow::on_change_x_valueChanged(int value)
{
    ui->howmuch_x->setText(QString::number(value));
}

void MainWindow::on_zoom_valueChanged(int value)
{
     ui->howmuch_zoom->setText(QString::number(value)+"%");
}

void MainWindow::on_spin_x_valueChanged(int value)
{
    ui->x_spin_is->setText("X = " + QString::number(value) + "°");
}

void MainWindow::on_spin_y_valueChanged(int value)
{
     ui->y_spin_is->setText("Y = " + QString::number(value) + "°");
}

void MainWindow::on_spin_z_valueChanged(int value)
{
    ui->z_spin_is->setText("Z = " + QString::number(value) + "°");

}







