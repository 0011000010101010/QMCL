#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qstyle.h"
#include "qstylefactory.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("/icons/appicon.ico"));
    qApp->setStyle(QStyleFactory::create("Fusion"));
    qApp->setPalette(QApplication::style()->standardPalette());
    connect(ui->gettominecraft,&QCommandLinkButton::clicked,this,&MainWindow::GetMinecraft);
    connect(ui->java8,&QCommandLinkButton::clicked,this,&MainWindow::java8);
    connect(ui->java17,&QCommandLinkButton::clicked,this,&MainWindow::java17);
    ui->label_3->setText("当前版本：BETA1");
    #ifdef QT_DEBUG
        ui->label_4->setText("DEBUG模式");
    #else
        ui->label_4->setText("RELEASE模式");
    #endif
}

MainWindow::~MainWindow()
{
    delete ui;
}

