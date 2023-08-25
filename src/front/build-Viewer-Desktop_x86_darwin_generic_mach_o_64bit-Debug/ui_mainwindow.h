/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <draw.h>

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QWidget *centralwidget;
  QPushButton *name_button;
  QLabel *name_display;
  draw *openGLWidget;
  QPushButton *screenshot;
  QPushButton *gif;
  QSlider *change_y;
  QSlider *change_x;
  QSpinBox *change_z;
  QLabel *num_vert;
  QLabel *num_edges;
  QDial *spin_x;
  QDial *spin_y;
  QDial *spin_z;
  QLabel *label;
  QLabel *x_spin_is;
  QLabel *y_spin_is;
  QLabel *z_spin_is;
  QSlider *zoom;
  QLabel *howmuch_x;
  QLabel *howmuch_y;
  QLabel *label_5;
  QLabel *howmuch_zoom;
  QLabel *label_2;
  QRadioButton *parall_type;
  QRadioButton *central_type;
  QLabel *label_3;
  QLabel *label_4;
  QLabel *x_spin_is_2;
  QRadioButton *dashed;
  QRadioButton *solid;
  QLabel *x_spin_is_4;
  QSlider *thick;
  QRadioButton *is_round;
  QLabel *x_spin_is_6;
  QRadioButton *is_square;
  QSlider *size;
  QLabel *label_6;
  QLabel *x_spin_is_7;
  QRadioButton *is_no;
  QLabel *label_7;
  QPushButton *Edges_colour;
  QPushButton *vert_colour;
  QPushButton *back_colour;
  QLabel *x_spin_is_3;
  QLabel *x_spin_is_5;
  QLabel *x_spin_is_8;
  QLabel *howmuch_zoom_2;
  QButtonGroup *buttonGroup_2;
  QButtonGroup *buttonGroup_3;
  QButtonGroup *buttonGroup;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1059, 675);
    MainWindow->setStyleSheet(
        QString::fromUtf8("background-color: rgb(246, 244, 248);"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    name_button = new QPushButton(centralwidget);
    name_button->setObjectName(QString::fromUtf8("name_button"));
    name_button->setGeometry(QRect(570, 20, 131, 32));
    name_button->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color:  rgb(77, 77, 77);\n"
                          "}"));
    name_display = new QLabel(centralwidget);
    name_display->setObjectName(QString::fromUtf8("name_display"));
    name_display->setGeometry(QRect(20, 20, 541, 31));
    name_display->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    openGLWidget = new draw(centralwidget);
    openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));
    openGLWidget->setGeometry(QRect(20, 70, 640, 480));
    screenshot = new QPushButton(centralwidget);
    screenshot->setObjectName(QString::fromUtf8("screenshot"));
    screenshot->setGeometry(QRect(20, 620, 51, 32));
    screenshot->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color:  rgb(77, 77, 77);\n"
                          "}"));
    gif = new QPushButton(centralwidget);
    gif->setObjectName(QString::fromUtf8("gif"));
    gif->setGeometry(QRect(80, 620, 51, 32));
    gif->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color:  rgb(77, 77, 77);\n"
                          "}"));
    change_y = new QSlider(centralwidget);
    change_y->setObjectName(QString::fromUtf8("change_y"));
    change_y->setGeometry(QRect(670, 90, 35, 461));
    change_y->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    change_y->setMinimum(-100);
    change_y->setMaximum(100);
    change_y->setOrientation(Qt::Vertical);
    change_x = new QSlider(centralwidget);
    change_x->setObjectName(QString::fromUtf8("change_x"));
    change_x->setGeometry(QRect(48, 560, 611, 35));
    change_x->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    change_x->setMinimum(-100);
    change_x->setMaximum(100);
    change_x->setOrientation(Qt::Horizontal);
    change_z = new QSpinBox(centralwidget);
    change_z->setObjectName(QString::fromUtf8("change_z"));
    change_z->setGeometry(QRect(670, 560, 51, 35));
    change_z->setStyleSheet(QString::fromUtf8(""));
    change_z->setMinimum(-100);
    change_z->setMaximum(100);
    num_vert = new QLabel(centralwidget);
    num_vert->setObjectName(QString::fromUtf8("num_vert"));
    num_vert->setGeometry(QRect(440, 620, 271, 31));
    num_vert->setLayoutDirection(Qt::LeftToRight);
    num_vert->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    num_vert->setAlignment(Qt::AlignCenter);
    num_edges = new QLabel(centralwidget);
    num_edges->setObjectName(QString::fromUtf8("num_edges"));
    num_edges->setGeometry(QRect(160, 620, 271, 31));
    num_edges->setLayoutDirection(Qt::LeftToRight);
    num_edges->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    num_edges->setAlignment(Qt::AlignCenter);
    spin_x = new QDial(centralwidget);
    spin_x->setObjectName(QString::fromUtf8("spin_x"));
    spin_x->setGeometry(QRect(740, 60, 81, 81));
    spin_x->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(226, 224, 228);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    spin_x->setMinimum(0);
    spin_x->setMaximum(359);
    spin_x->setWrapping(true);
    spin_x->setNotchTarget(3.590000000000000);
    spin_x->setNotchesVisible(true);
    spin_y = new QDial(centralwidget);
    spin_y->setObjectName(QString::fromUtf8("spin_y"));
    spin_y->setGeometry(QRect(840, 60, 81, 81));
    spin_y->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(226, 224, 228);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    spin_y->setMaximum(359);
    spin_y->setWrapping(true);
    spin_y->setNotchTarget(3.590000000000000);
    spin_y->setNotchesVisible(true);
    spin_z = new QDial(centralwidget);
    spin_z->setObjectName(QString::fromUtf8("spin_z"));
    spin_z->setGeometry(QRect(940, 60, 81, 81));
    spin_z->setContextMenuPolicy(Qt::DefaultContextMenu);
    spin_z->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(226, 224, 228);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    spin_z->setMaximum(359);
    spin_z->setWrapping(true);
    spin_z->setNotchTarget(3.590000000000000);
    spin_z->setNotchesVisible(true);
    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(820, 40, 131, 16));
    label->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is = new QLabel(centralwidget);
    x_spin_is->setObjectName(QString::fromUtf8("x_spin_is"));
    x_spin_is->setGeometry(QRect(790, 150, 31, 16));
    x_spin_is->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    y_spin_is = new QLabel(centralwidget);
    y_spin_is->setObjectName(QString::fromUtf8("y_spin_is"));
    y_spin_is->setGeometry(QRect(887, 150, 31, 16));
    y_spin_is->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    y_spin_is->setAlignment(Qt::AlignLeading | Qt::AlignLeft |
                            Qt::AlignVCenter);
    z_spin_is = new QLabel(centralwidget);
    z_spin_is->setObjectName(QString::fromUtf8("z_spin_is"));
    z_spin_is->setGeometry(QRect(990, 150, 31, 16));
    z_spin_is->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    z_spin_is->setAlignment(Qt::AlignLeading | Qt::AlignLeft |
                            Qt::AlignVCenter);
    zoom = new QSlider(centralwidget);
    zoom->setObjectName(QString::fromUtf8("zoom"));
    zoom->setGeometry(QRect(740, 210, 241, 25));
    zoom->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    zoom->setMinimum(10);
    zoom->setMaximum(200);
    zoom->setValue(100);
    zoom->setOrientation(Qt::Horizontal);
    zoom->setTickInterval(100);
    howmuch_x = new QLabel(centralwidget);
    howmuch_x->setObjectName(QString::fromUtf8("howmuch_x"));
    howmuch_x->setGeometry(QRect(10, 560, 31, 31));
    howmuch_x->setAlignment(Qt::AlignCenter);
    howmuch_y = new QLabel(centralwidget);
    howmuch_y->setObjectName(QString::fromUtf8("howmuch_y"));
    howmuch_y->setGeometry(QRect(670, 60, 35, 21));
    howmuch_y->setAlignment(Qt::AlignCenter);
    label_5 = new QLabel(centralwidget);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(850, 180, 58, 16));
    label_5->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(0, 0, 0);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    label_5->setAlignment(Qt::AlignCenter);
    howmuch_zoom = new QLabel(centralwidget);
    howmuch_zoom->setObjectName(QString::fromUtf8("howmuch_zoom"));
    howmuch_zoom->setGeometry(QRect(990, 210, 21, 21));
    howmuch_zoom->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    label_2 = new QLabel(centralwidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(720, 10, 321, 651));
    label_2->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    label_2->setAlignment(Qt::AlignHCenter | Qt::AlignTop);
    parall_type = new QRadioButton(centralwidget);
    buttonGroup = new QButtonGroup(MainWindow);
    buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
    buttonGroup->addButton(parall_type);
    parall_type->setObjectName(QString::fromUtf8("parall_type"));
    parall_type->setEnabled(true);
    parall_type->setGeometry(QRect(900, 270, 99, 20));
    parall_type->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    parall_type->setChecked(true);
    central_type = new QRadioButton(centralwidget);
    buttonGroup->addButton(central_type);
    central_type->setObjectName(QString::fromUtf8("central_type"));
    central_type->setGeometry(QRect(780, 270, 99, 20));
    central_type->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87,87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    central_type->setChecked(false);
    label_3 = new QLabel(centralwidget);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(730, 250, 301, 16));
    label_3->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(220, 217, 222);\n"
                          "\n"
                          "    color:  rgb(0, 0, 0);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    label_3->setAlignment(Qt::AlignCenter);
    label_4 = new QLabel(centralwidget);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(730, 300, 301, 16));
    label_4->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(220, 217, 222);\n"
                          "\n"
                          "    color:  rgb(0, 0, 0);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    label_4->setAlignment(Qt::AlignCenter);
    x_spin_is_2 = new QLabel(centralwidget);
    x_spin_is_2->setObjectName(QString::fromUtf8("x_spin_is_2"));
    x_spin_is_2->setGeometry(QRect(730, 330, 71, 16));
    x_spin_is_2->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is_2->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    dashed = new QRadioButton(centralwidget);
    buttonGroup_2 = new QButtonGroup(MainWindow);
    buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
    buttonGroup_2->addButton(dashed);
    dashed->setObjectName(QString::fromUtf8("dashed"));
    dashed->setGeometry(QRect(910, 330, 99, 20));
    dashed->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    dashed->setChecked(true);
    solid = new QRadioButton(centralwidget);
    buttonGroup_2->addButton(solid);
    solid->setObjectName(QString::fromUtf8("solid"));
    solid->setGeometry(QRect(830, 330, 99, 20));
    solid->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    solid->setChecked(false);
    x_spin_is_4 = new QLabel(centralwidget);
    x_spin_is_4->setObjectName(QString::fromUtf8("x_spin_is_4"));
    x_spin_is_4->setGeometry(QRect(730, 360, 71, 21));
    x_spin_is_4->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is_4->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    thick = new QSlider(centralwidget);
    thick->setObjectName(QString::fromUtf8("thick"));
    thick->setGeometry(QRect(820, 360, 201, 31));
    thick->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    thick->setMinimum(1);
    thick->setMaximum(100);
    thick->setValue(1);
    thick->setOrientation(Qt::Horizontal);
    is_round = new QRadioButton(centralwidget);
    buttonGroup_3 = new QButtonGroup(MainWindow);
    buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
    buttonGroup_3->addButton(is_round);
    is_round->setObjectName(QString::fromUtf8("is_round"));
    is_round->setGeometry(QRect(960, 470, 81, 21));
    is_round->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    is_round->setChecked(true);
    x_spin_is_6 = new QLabel(centralwidget);
    x_spin_is_6->setObjectName(QString::fromUtf8("x_spin_is_6"));
    x_spin_is_6->setGeometry(QRect(720, 500, 71, 21));
    x_spin_is_6->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is_6->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    is_square = new QRadioButton(centralwidget);
    buttonGroup_3->addButton(is_square);
    is_square->setObjectName(QString::fromUtf8("is_square"));
    is_square->setGeometry(QRect(870, 470, 81, 20));
    is_square->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    size = new QSlider(centralwidget);
    size->setObjectName(QString::fromUtf8("size"));
    size->setGeometry(QRect(810, 500, 201, 31));
    size->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    size->setMinimum(10);
    size->setMaximum(100);
    size->setValue(10);
    size->setOrientation(Qt::Horizontal);
    label_6 = new QLabel(centralwidget);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(730, 440, 301, 16));
    label_6->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(220, 217, 222);\n"
                          "\n"
                          "    color:  rgb(0, 0, 0);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    label_6->setAlignment(Qt::AlignCenter);
    x_spin_is_7 = new QLabel(centralwidget);
    x_spin_is_7->setObjectName(QString::fromUtf8("x_spin_is_7"));
    x_spin_is_7->setGeometry(QRect(720, 470, 71, 16));
    x_spin_is_7->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is_7->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    is_no = new QRadioButton(centralwidget);
    buttonGroup_3->addButton(is_no);
    is_no->setObjectName(QString::fromUtf8("is_no"));
    is_no->setGeometry(QRect(810, 470, 61, 20));
    is_no->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    is_no->setChecked(false);
    label_7 = new QLabel(centralwidget);
    label_7->setObjectName(QString::fromUtf8("label_7"));
    label_7->setGeometry(QRect(730, 580, 301, 16));
    label_7->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(220, 217, 222);\n"
                          "\n"
                          "    color:  rgb(0, 0, 0);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          ""));
    label_7->setAlignment(Qt::AlignCenter);
    Edges_colour = new QPushButton(centralwidget);
    Edges_colour->setObjectName(QString::fromUtf8("Edges_colour"));
    Edges_colour->setGeometry(QRect(750, 400, 261, 31));
    Edges_colour->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color:  rgb(77, 77, 77);\n"
                          "}"));
    vert_colour = new QPushButton(centralwidget);
    vert_colour->setObjectName(QString::fromUtf8("vert_colour"));
    vert_colour->setGeometry(QRect(750, 540, 261, 31));
    vert_colour->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color:  rgb(77, 77, 77);\n"
                          "}"));
    back_colour = new QPushButton(centralwidget);
    back_colour->setObjectName(QString::fromUtf8("back_colour"));
    back_colour->setGeometry(QRect(750, 610, 261, 31));
    back_colour->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(206, 204, 208);\n"
                          "\n"
                          "    color:  rgb(37, 37, 37);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "    background-color:  rgb(77, 77, 77);\n"
                          "}"));
    x_spin_is_3 = new QLabel(centralwidget);
    x_spin_is_3->setObjectName(QString::fromUtf8("x_spin_is_3"));
    x_spin_is_3->setGeometry(QRect(760, 150, 21, 16));
    x_spin_is_3->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is_3->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    x_spin_is_5 = new QLabel(centralwidget);
    x_spin_is_5->setObjectName(QString::fromUtf8("x_spin_is_5"));
    x_spin_is_5->setGeometry(QRect(850, 150, 31, 16));
    x_spin_is_5->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is_5->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    x_spin_is_8 = new QLabel(centralwidget);
    x_spin_is_8->setObjectName(QString::fromUtf8("x_spin_is_8"));
    x_spin_is_8->setGeometry(QRect(950, 150, 31, 16));
    x_spin_is_8->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    x_spin_is_8->setAlignment(Qt::AlignRight | Qt::AlignTrailing |
                              Qt::AlignVCenter);
    howmuch_zoom_2 = new QLabel(centralwidget);
    howmuch_zoom_2->setObjectName(QString::fromUtf8("howmuch_zoom_2"));
    howmuch_zoom_2->setGeometry(QRect(1016, 210, 20, 21));
    howmuch_zoom_2->setStyleSheet(
        QString::fromUtf8("\n"
                          "    border-radius:  10px;\n"
                          "	background-color: rgb(228, 225, 230);\n"
                          "\n"
                          "    color:  rgb(87, 87, 87);\n"
                          "    font-size:  33px;\n"
                          "	font: 13pt \"Comic Sans MS\";\n"
                          "\n"
                          ""));
    MainWindow->setCentralWidget(centralwidget);
    label_2->raise();
    name_button->raise();
    name_display->raise();
    openGLWidget->raise();
    screenshot->raise();
    gif->raise();
    change_y->raise();
    change_x->raise();
    change_z->raise();
    num_vert->raise();
    num_edges->raise();
    spin_x->raise();
    spin_y->raise();
    spin_z->raise();
    label->raise();
    x_spin_is->raise();
    y_spin_is->raise();
    z_spin_is->raise();
    zoom->raise();
    howmuch_x->raise();
    howmuch_y->raise();
    label_5->raise();
    howmuch_zoom->raise();
    parall_type->raise();
    central_type->raise();
    label_3->raise();
    label_4->raise();
    x_spin_is_2->raise();
    solid->raise();
    x_spin_is_4->raise();
    thick->raise();
    is_round->raise();
    x_spin_is_6->raise();
    is_square->raise();
    size->raise();
    label_6->raise();
    x_spin_is_7->raise();
    is_no->raise();
    label_7->raise();
    dashed->raise();
    Edges_colour->raise();
    vert_colour->raise();
    back_colour->raise();
    x_spin_is_3->raise();
    x_spin_is_5->raise();
    x_spin_is_8->raise();
    howmuch_zoom_2->raise();

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    name_button->setText(QCoreApplication::translate(
        "MainWindow", "Choose your object", nullptr));
    name_display->setText(
        QCoreApplication::translate("MainWindow", " Object name", nullptr));
    screenshot->setText(
        QCoreApplication::translate("MainWindow", "\360\237\223\270", nullptr));
    gif->setText(QCoreApplication::translate(
        "MainWindow", "\360\237\223\275\357\270\217", nullptr));
    num_vert->setText(QCoreApplication::translate(
        "MainWindow", " Number of vertices: 0", nullptr));
    num_edges->setText(QCoreApplication::translate(
        "MainWindow", " Number of edges: 0", nullptr));
    label->setText(QCoreApplication::translate("MainWindow",
                                               "Rotate the model by", nullptr));
    x_spin_is->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    y_spin_is->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    z_spin_is->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    howmuch_x->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    howmuch_y->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    label_5->setText(
        QCoreApplication::translate("MainWindow", "Scaling", nullptr));
    howmuch_zoom->setText(
        QCoreApplication::translate("MainWindow", "100", nullptr));
    label_2->setText(
        QCoreApplication::translate("MainWindow", "Visual settings", nullptr));
    parall_type->setText(
        QCoreApplication::translate("MainWindow", "Parallel", nullptr));
    central_type->setText(
        QCoreApplication::translate("MainWindow", "Central", nullptr));
    label_3->setText(QCoreApplication::translate(
        "MainWindow", "Type of projection", nullptr));
    label_4->setText(
        QCoreApplication::translate("MainWindow", "Edges", nullptr));
    x_spin_is_2->setText(
        QCoreApplication::translate("MainWindow", "Type:", nullptr));
    dashed->setText(
        QCoreApplication::translate("MainWindow", "Dashed", nullptr));
    solid->setText(QCoreApplication::translate("MainWindow", "Solid", nullptr));
    x_spin_is_4->setText(
        QCoreApplication::translate("MainWindow", "Thickness:", nullptr));
    is_round->setText(
        QCoreApplication::translate("MainWindow", "Round", nullptr));
    x_spin_is_6->setText(
        QCoreApplication::translate("MainWindow", "Size:", nullptr));
    is_square->setText(
        QCoreApplication::translate("MainWindow", "Square", nullptr));
    label_6->setText(
        QCoreApplication::translate("MainWindow", "Vertices", nullptr));
    x_spin_is_7->setText(
        QCoreApplication::translate("MainWindow", "Type:", nullptr));
    is_no->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
    label_7->setText(
        QCoreApplication::translate("MainWindow", "Background:", nullptr));
    Edges_colour->setText(
        QCoreApplication::translate("MainWindow", "Change colour", nullptr));
    vert_colour->setText(
        QCoreApplication::translate("MainWindow", "Change colour", nullptr));
    back_colour->setText(
        QCoreApplication::translate("MainWindow", "Change colour", nullptr));
    x_spin_is_3->setText(
        QCoreApplication::translate("MainWindow", "X=", nullptr));
    x_spin_is_5->setText(
        QCoreApplication::translate("MainWindow", "Y=", nullptr));
    x_spin_is_8->setText(
        QCoreApplication::translate("MainWindow", "Z=", nullptr));
    howmuch_zoom_2->setText(
        QCoreApplication::translate("MainWindow", "%", nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
