#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "qdesktopservices.h"
#include <QMainWindow>
#include "QUrl"
#include "QMessageBox"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public slots:
    void GetMinecraft(void){
        QDesktopServices::openUrl(QUrl("https://www.minecraft.net/zh-hans/get-minecraft", QUrl::TolerantMode));
    }
    void java8(){
        QDesktopServices::openUrl(QUrl("https://www.java.com/zh-CN/download/", QUrl::TolerantMode));
    }
    void java17(){
        QMessageBox::warning(this,"警告","自java11开始,oracle不再提供单独的jre,您接下来跳转的将是jdk17的下载页面");
        QDesktopServices::openUrl(QUrl("https://www.oracle.com/java/technologies/javase/jdk17-archive-downloads.html", QUrl::TolerantMode));
    }
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
