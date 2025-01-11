#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_calendarWidget_selectionChanged();

    void on_calendarWidget_clicked(const QDate &date);

    void on_print_button_pressed();

    void on_sched_reg_button_clicked();

    void on_sched_red_button_clicked();

    void on_erase_button_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
