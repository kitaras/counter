#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    checkboxes = {
           ui->checkBox,    ui->checkBox_2,  ui->checkBox_3,  ui->checkBox_4,  ui->checkBox_5,
           ui->checkBox_6,  ui->checkBox_7,  ui->checkBox_8,  ui->checkBox_9,  ui->checkBox_10,
           ui->checkBox_11, ui->checkBox_12, ui->checkBox_13, ui->checkBox_14, ui->checkBox_15,
           ui->checkBox_16, ui->checkBox_17, ui->checkBox_18, ui->checkBox_19, ui->checkBox_20,
           ui->checkBox_21, ui->checkBox_22, ui->checkBox_23, ui->checkBox_24, ui->checkBox_25,
           ui->checkBox_26, ui->checkBox_27, ui->checkBox_28, ui->checkBox_29, ui->checkBox_30,
           ui->checkBox_31, ui->checkBox_32, ui->checkBox_33, ui->checkBox_34, ui->checkBox_35,
           ui->checkBox_36, ui->checkBox_37, ui->checkBox_38, ui->checkBox_39, ui->checkBox_40,
           ui->checkBox_41, ui->checkBox_42, ui->checkBox_43, ui->checkBox_44, ui->checkBox_45,
           ui->checkBox_46, ui->checkBox_47, ui->checkBox_48, ui->checkBox_49, ui->checkBox_50,
           ui->checkBox_51, ui->checkBox_52, ui->checkBox_53, ui->checkBox_54, ui->checkBox_55,
           ui->checkBox_56, ui->checkBox_57, ui->checkBox_58, ui->checkBox_59, ui->checkBox_60,
           ui->checkBox_61, ui->checkBox_62
        };
    count = 0;
    QString val;
    QFile file;
    file.setFileName(QDir::currentPath() + "\\counter.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    val = file.readAll();
    file.close();
    QJsonDocument doc = QJsonDocument::fromJson(val.toUtf8());
    QJsonObject jobj = doc.object();
    for (int i = 0; i < checkboxes.size(); i++) {
        mapInfo[QString(checkboxes[i]->text()).toInt()] = jobj[checkboxes[i]->text()].toInt();
    }
    for (int i = 0; i < checkboxes.size(); i++)
        connect(checkboxes[i], SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(hreset()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::add(bool checked)
{
    count += checked ? mapInfo[((QPushButton *) sender())->text().toUInt()]
                     : -mapInfo[((QPushButton *) sender())->text().toUInt()];
    ui->label->setText("<span style=\" font-size:12pt;\">На паре должно присутствовать "
                       + QString::number(count) + " человек</span>");
}

void MainWindow::hreset()
{
    for (int i = 0; i < checkboxes.size(); i++)
        checkboxes[i]->setChecked(false);
}

void MainWindow::on_action_About_Qt_triggered()
{
    QApplication::aboutQt();
}

void MainWindow::on_action_Exit_triggered()
{
    QApplication::exit();
}
