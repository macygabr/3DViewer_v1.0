#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "draw.h"
#include <QSettings>


extern "C" {
#include "gif.h"
#include "../../back/transformations.h"
}


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    start();
}

MainWindow::~MainWindow()
{
    Quit();
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
            ui->name_display->setText(file_way);
            ui->openGLWidget->file_name=file_way;
            readFile(ui->openGLWidget->file_name, &ui->openGLWidget->test);
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
        QMessageBox::warning(this, "", "Failed 😕");
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
       QMessageBox::warning(this, "", "Failed 😕");
     }
}


void MainWindow::on_change_y_valueChanged(int value)
{ui->openGLWidget->translation[1]=value;
    ui->howmuch_y->setText(QString::number(value));
}

void MainWindow::on_change_x_valueChanged(int value)
{ ui->openGLWidget->translation[0]=value;
    ui->howmuch_x->setText(QString::number(value));
}

void MainWindow::on_zoom_valueChanged(int value)
{
//    scalingObj(&ui->openGLWidget->test,value);
     ui->openGLWidget->scale=value/100.0;
     ui->openGLWidget->update();
     ui->howmuch_zoom->setText(QString::number(value)+"%");
}
void MainWindow::on_zoom_sliderReleased()
{

}


void MainWindow::on_spin_x_valueChanged(int value)
{
    rotateObj(&ui->openGLWidget->test,(value - ui->x_spin_is->text().toInt())*90,'x');
    ui->x_spin_is->setText(QString::number(value));
    ui->openGLWidget->update();
}

void MainWindow::on_spin_y_valueChanged(int value)
{
     rotateObj(&ui->openGLWidget->test,(value - ui->y_spin_is->text().toInt())*90,'y');
     ui->y_spin_is->setText(QString::number(value));
     ui->openGLWidget->update();
}

void MainWindow::on_spin_z_valueChanged(int value)
{
    rotateObj(&ui->openGLWidget->test,(value - ui->z_spin_is->text().toInt())*90,'z');
    ui->z_spin_is->setText(QString::number(value));
    ui->openGLWidget->update();
}

void MainWindow::on_back_colour_clicked()
{
    QColor colour = QColorDialog::getColor(Qt::white, this, "Select color:");
    ui->openGLWidget->colorBackground = colour;
    ui->openGLWidget->update();
}


void MainWindow::start() {

    QString temp = QCoreApplication::applicationDirPath();
    QSettings settings(temp + "/settings.ini", QSettings::IniFormat);

    settings.beginGroup("Settings");

    ui->openGLWidget->colorBackground =
        settings.value("colorBackground", QColor(Qt::black)).value<QColor>();

    settings.endGroup();

    ui->openGLWidget->update();

}

void MainWindow::Quit() {
  QString temp = QCoreApplication::applicationDirPath();
  QSettings settings(temp + "/settings.ini", QSettings::IniFormat);

  settings.beginGroup("Settings");

   settings.setValue("colorBackground", ui->openGLWidget->colorBackground);
   settings.endGroup();
   }



void MainWindow::on_change_z_valueChanged(int arg1)
{
ui->openGLWidget->translation[2]=arg1;
ui->openGLWidget->update();

}






void MainWindow::on_openGLWidget_aboutToCompose()
{

}

