#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plus_clicked();

    void on_minus_clicked();

    void on_umnojit_clicked();

    void on_delit_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
