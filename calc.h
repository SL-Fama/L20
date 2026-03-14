#ifndef CALC_H
#define CALC_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calc;
}
QT_END_NAMESPACE

class Calc : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calc(QWidget *parent = nullptr);
    ~Calc() override;

private slots:
    void on_num_0_clicked();
    void button_write (QString number, bool is_num);
    void manage_activnes();
    void print_result (QString value, QString exspression);

    void on_num_1_clicked();

    void on_num_2_clicked();

    void on_num_3_clicked();

    void on_num_4_clicked();

    void on_num_5_clicked();

    void on_num_6_clicked();

    void on_num_7_clicked();

    void on_num_8_clicked();

    void on_num_9_clicked();

    void on_btn_errase_clicked();

    void on_btn_divide_clicked();

    void on_btn_multiply_clicked();

    void on_btn_substruct_clicked();

    void on_btn_add_clicked();

    void on_btn_logarithm_clicked();

    void on_btn_factorial_clicked();

    void on_btn_equal_clicked();

private:
    Ui::Calc *ui;
};
#endif // CALC_H
