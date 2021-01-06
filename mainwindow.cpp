#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    mapInfo[1711] = 12;
    mapInfo[1712] = 10;
    mapInfo[1714] = 14;
    mapInfo[1715] = 22;
    mapInfo[1716] = 18;
    mapInfo[1720] = 30;
    mapInfo[1811] = 16;
    mapInfo[1812] = 18;
    mapInfo[1814] = 18;
    mapInfo[1815] = 25;
    mapInfo[1816] = 25;
    mapInfo[1820] = 22;
    mapInfo[1821] = 23;
    mapInfo[1911] = 23;
    mapInfo[1912] = 21;
    mapInfo[1913] = 34;
    mapInfo[1914] = 23;
    mapInfo[1915] = 40;
    mapInfo[1920] = 35;
    mapInfo[1923] = 28;
    mapInfo[2011] = 29;
    mapInfo[2012] = 26;
    mapInfo[2013] = 31;
    mapInfo[2014] = 27;
    mapInfo[2015] = 31;
    mapInfo[2020] = 24;
    mapInfo[2021] = 24;
    mapInfo[2023] = 29;
    mapInfo[2031] = 29;
    mapInfo[2032] = 29;
    mapInfo[2033] = 29;
    mapInfo[2034] = 28;
    mapInfo[2035] = 28;
    mapInfo[2040] = 28;
    mapInfo[2041] = 28;
    mapInfo[2042] = 28;
    mapInfo[2043] = 28;
    mapInfo[2044] = 27;
    mapInfo[1931] = 32;
    mapInfo[1932] = 33;
    mapInfo[1933] = 34;
    mapInfo[1934] = 32;
    mapInfo[1940] = 31;
    mapInfo[1941] = 32;
    mapInfo[1942] = 34;
    mapInfo[1831] = 26;
    mapInfo[1832] = 33;
    mapInfo[1833] = 32;
    mapInfo[1834] = 28;
    mapInfo[1835] = 32;
    mapInfo[1841] = 27;
    mapInfo[1842] = 27;
    mapInfo[1843] = 24;
    mapInfo[1844] = 24;
    mapInfo[1731] = 30;
    mapInfo[1732] = 39;
    mapInfo[1733] = 37;
    mapInfo[1734] = 34;
    mapInfo[1735] = 26;
    mapInfo[1736] = 21;
    mapInfo[1737] = 27;
    mapInfo[1738] = 27;
    ui->setupUi(this);
    count = 0;
    connect(ui->checkBox, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_2, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_3, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_4, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_5, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_6, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_7, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_8, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_9, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_10, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_11, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_12, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_13, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_14, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_15, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_16, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_17, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_18, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_19, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_20, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_21, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_22, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_23, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_24, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_25, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_26, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_27, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_28, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_29, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_30, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_31, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_32, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_33, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_34, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_35, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_36, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_37, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_38, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_39, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_40, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_41, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_42, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_43, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_44, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_45, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_46, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_47, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_48, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_49, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_50, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_51, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_52, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_53, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_54, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_55, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_56, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_57, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_58, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_59, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_60, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_61, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
    connect(ui->checkBox_62, SIGNAL(toggled(bool)), this, SLOT(add(bool)));
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
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);
    ui->checkBox_5->setChecked(false);
    ui->checkBox_6->setChecked(false);
    ui->checkBox_7->setChecked(false);
    ui->checkBox_8->setChecked(false);
    ui->checkBox_9->setChecked(false);
    ui->checkBox_10->setChecked(false);
    ui->checkBox_11->setChecked(false);
    ui->checkBox_12->setChecked(false);
    ui->checkBox_13->setChecked(false);
    ui->checkBox_14->setChecked(false);
    ui->checkBox_15->setChecked(false);
    ui->checkBox_16->setChecked(false);
    ui->checkBox_17->setChecked(false);
    ui->checkBox_18->setChecked(false);
    ui->checkBox_19->setChecked(false);
    ui->checkBox_20->setChecked(false);
    ui->checkBox_21->setChecked(false);
    ui->checkBox_22->setChecked(false);
    ui->checkBox_23->setChecked(false);
    ui->checkBox_24->setChecked(false);
    ui->checkBox_25->setChecked(false);
    ui->checkBox_26->setChecked(false);
    ui->checkBox_27->setChecked(false);
    ui->checkBox_28->setChecked(false);
    ui->checkBox_29->setChecked(false);
    ui->checkBox_30->setChecked(false);
    ui->checkBox_31->setChecked(false);
    ui->checkBox_32->setChecked(false);
    ui->checkBox_33->setChecked(false);
    ui->checkBox_34->setChecked(false);
    ui->checkBox_35->setChecked(false);
    ui->checkBox_36->setChecked(false);
    ui->checkBox_37->setChecked(false);
    ui->checkBox_38->setChecked(false);
    ui->checkBox_39->setChecked(false);
    ui->checkBox_40->setChecked(false);
    ui->checkBox_41->setChecked(false);
    ui->checkBox_42->setChecked(false);
    ui->checkBox_43->setChecked(false);
    ui->checkBox_44->setChecked(false);
    ui->checkBox_45->setChecked(false);
    ui->checkBox_46->setChecked(false);
    ui->checkBox_47->setChecked(false);
    ui->checkBox_48->setChecked(false);
    ui->checkBox_49->setChecked(false);
    ui->checkBox_50->setChecked(false);
    ui->checkBox_51->setChecked(false);
    ui->checkBox_52->setChecked(false);
    ui->checkBox_53->setChecked(false);
    ui->checkBox_54->setChecked(false);
    ui->checkBox_55->setChecked(false);
    ui->checkBox_56->setChecked(false);
    ui->checkBox_57->setChecked(false);
    ui->checkBox_58->setChecked(false);
    ui->checkBox_59->setChecked(false);
    ui->checkBox_60->setChecked(false);
    ui->checkBox_61->setChecked(false);
    ui->checkBox_62->setChecked(false);
}

void MainWindow::on_action_About_Qt_triggered()
{
    QApplication::aboutQt();
}

void MainWindow::on_action_Exit_triggered()
{
    QApplication::exit();
}
