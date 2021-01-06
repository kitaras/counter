#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int count;
    QMap<int, int> mapInfo;
    QList<QCheckBox *> checkboxes;
private slots:
    void add(bool);
    void hreset();
    void on_action_About_Qt_triggered();
    void on_action_Exit_triggered();
};
#endif // MAINWINDOW_H
