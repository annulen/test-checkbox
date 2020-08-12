#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->checkBox, &QCheckBox::stateChanged, [this](int state) {
        qDebug() << "state:" << state << (state == Qt::Checked) << (state == Qt::Unchecked);
        if (state == Qt::Checked)
            checkboxChecked();
        if (state == Qt::Unchecked)
            checkboxUnchecked();
    });

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::checkboxChecked()
{
    qDebug() << Q_FUNC_INFO;
}

