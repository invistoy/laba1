#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "recurtions.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_1_triggered() {
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_action_2_triggered() {
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_clicked()
{
    int n = ui->lineEdit->text().toInt();

    calculator.countF = 0;

    int chosie = ui->comboBox->currentIndex();

    if (chosie == 0) { // F5
        ui->label->setText(QString("%1").arg(calculator.F5(n)));
        ui->label_2->setText(QString("%1").arg(calculator.countF));
    } else if (chosie == 1) { // F13
        ui->label->setText(QString::number(calculator.F13(n)));
        ui->label_2->setText(QString::number(calculator.countF));
    }
}

void MainWindow::on_pushButton_poliglot_clicked() {
    QString word = ui->lineEdit->text();

    int isPalidtom = calculator.F7(word, 0, word.length() - 1);

    if (isPalidtom == 1) {
        ui->label_result->setText("YES");
    } else {
        ui->label_result->setText("NO");
    }
}

void MainWindow::on_comboBox_currentIndexChanged(int index) {
    if (index == 0) { // F5
        ui->textBrowser->setText(
            "F(n) = 1, при n <= 1;\n"
            "F(n) = 5 * n + F(n - 1) + F(2), если n > 1 и при этом n нечётно;\n"
            "F(n) = 3 * F(n - 1), если n > 1 и при этом n чётно."
            );
    }
    else if (index == 1) { // F13
        ui->textBrowser->setText(
            "F(n) = 1, при n = 1;\n"
            "F(n) = 2, при n = 2;\n"
            "F(n) = 2  + F(n - 1), если n > 2 и при этом n чётно;\n"
            "F(n) = 3 * n + F(n - 2), если n > 2 и при этом n нечётно."
            );
    }
}

