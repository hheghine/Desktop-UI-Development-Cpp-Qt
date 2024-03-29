#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QListWidget>
#include <QPushButton>


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
    void    on_AddButton_clicked();

    void    on_RemoveButton_clicked();

    void    on_RemoveAllButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
