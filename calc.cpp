#include "calc.h"
#include "ui_calc.h"
#include <QString>
#include <QRegularExpression>
#include <QDebug>
#include <QGraphicsOpacityEffect>
#include <cmath>

#include "dmath.hpp"
#include "smath.hpp"


Calc::Calc(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calc)
{
    ui->setupUi(this);

    ui->io_display->setText("0"); //Set initial text
    ui->o_history->setText("");
    ui->btn_equal->setEnabled(false);

    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    eff->setOpacity(0.64);
    ui->o_history->setGraphicsEffect(eff);
}

Calc::~Calc()
{
    delete ui;
}

//Helping flags and variables
QString current_expression = "0";
QString history = "";
QString op_symbol = "";
bool has_operator = false;
bool is_expression = false;
bool trigger_error = false;



//Button display function
void Calc::button_write(QString number, bool is_num) {
    if (!is_num && has_operator) {
        current_expression.chop(1);
        current_expression += number;
    }
    else if (current_expression == "0" && is_num or trigger_error) {
        current_expression = number;
        trigger_error = false;
    }
    else {
        current_expression += number;
    }
    ui->io_display->setText(current_expression);

    manage_activnes();
}


void Calc::manage_activnes () {
    has_operator = current_expression.contains(QRegularExpression("[\\+\\-\\*\\/]"));
    is_expression = current_expression.contains(QRegularExpression("(\\d*\\.?\\d+)\\s*[\\+\\-\\*\\/]\\s*(\\d*\\.?\\d+)"));

    bool dynamic_enabled = true;
    bool static_enabled = true;

    if (is_expression or trigger_error) {
        dynamic_enabled = false;
        static_enabled = false;
    } else if (has_operator) {
        static_enabled = true;
        dynamic_enabled = false;
    } else {
        dynamic_enabled = true;
        static_enabled = true;
        op_symbol = "";
    }

    ui->btn_equal->setEnabled(is_expression);

    ui->btn_add->setEnabled(static_enabled);
    ui->btn_substruct->setEnabled(static_enabled);
    ui->btn_multiply->setEnabled(static_enabled);
    ui->btn_divide->setEnabled(static_enabled);

    ui->btn_logarithm->setEnabled(dynamic_enabled);
    ui->btn_factorial->setEnabled(dynamic_enabled);
}

void Calc::print_result (QString value, QString exspression) {
    double fine = value.toDouble();
    if (fine && std::isfinite(fine)) {
        history = exspression;
        current_expression = value;
    } else {
        history = "";
        current_expression = "ERROR!";
        trigger_error = true;
    }
    ui->io_display->setText(current_expression);
    ui->o_history->setText(history);
}

//Number buttons
void Calc::on_num_0_clicked()
{
    button_write("0", true);
}


void Calc::on_num_1_clicked()
{
    button_write("1", true);
}


void Calc::on_num_2_clicked()
{
    button_write("2", true);
}


void Calc::on_num_3_clicked()
{
    button_write("3", true);
}


void Calc::on_num_4_clicked()
{
    button_write("4", true);
}


void Calc::on_num_5_clicked()
{
    button_write("5", true);
}


void Calc::on_num_6_clicked()
{
    button_write("6", true);
}


void Calc::on_num_7_clicked()
{
    button_write("7", true);
}


void Calc::on_num_8_clicked()
{
    button_write("8", true);
}


void Calc::on_num_9_clicked()
{
    button_write("9", true);
}

//Functional buttons
void Calc::on_btn_errase_clicked()
{
    if(current_expression.length() <= 1) {
        current_expression = "0";
        ui->io_display->setText("0");
        ui->o_history->setText(history);
        trigger_error = false;
    } else {
        QChar current_symbol = current_expression.back();
        current_expression.chop(1);
        ui->io_display->setText(current_expression);
    }
    manage_activnes();
}

//Operations buttons
void Calc::on_btn_divide_clicked()
{
    QString symbol = "/";
    button_write(symbol, false);
    op_symbol = symbol;
}


void Calc::on_btn_multiply_clicked()
{
    QString symbol = "*";
    button_write(symbol, false);
    op_symbol = symbol;
}


void Calc::on_btn_substruct_clicked()
{
    QString symbol = "-";
    button_write(symbol, false);
    op_symbol = symbol;
}


void Calc::on_btn_add_clicked()
{
    QString symbol = "+";
    button_write(symbol, false);
    op_symbol = symbol;
}


void Calc::on_btn_logarithm_clicked()
{
    double value = current_expression.toDouble();
    QString exspression = "log (" + current_expression + ")";
    QString result = QString::number(logarithm(value));
    print_result(result, exspression);
    manage_activnes();
}


void Calc::on_btn_factorial_clicked()
{
    double value = current_expression.toDouble();
    QString exspression = "factorial (" + current_expression + ")";
    QString result = QString::number(factorial(value));
    print_result(result, exspression);
    manage_activnes();
}


void Calc::on_btn_equal_clicked()
{
    QString exspression = current_expression;
    QStringList parts = current_expression.split(op_symbol);
    QString result = "";


    double first = 0.0;
    double second = 0.0;

    if (parts.size() >= 2) {
        first = parts.at(0).toDouble();
        second = parts.at(1).toDouble();
    }

    if (op_symbol == "/") {
        result = QString::number(divide(first, second));
    } else if (op_symbol == "*") {
        result = QString::number(mult(first, second));
    } else if (op_symbol == "-") {
        result = QString::number(sub(first, second));
    } else if (op_symbol == "+") {
        result = QString::number(add(first, second));
    } else {
        qDebug() << "Shittt";
    }

    print_result(result, exspression);
    manage_activnes();
}