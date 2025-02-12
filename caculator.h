#ifndef CACULATOR_H
#define CACULATOR_H

#include <QMainWindow>

namespace Ui {
class caculator;
}

class caculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit caculator(QWidget *parent = 0);
    ~caculator();
    int m_var2;
    int m_var3;
    int m_var1;
    double display;
    bool iscontinue;
    bool isstr;
    QString str;
    double result;
    double num1;
    double num2;
    int count;
    bool isdot;
    bool  Dot;
    int isDel;
    double buttonDownNum(int numSize);

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_mul_clicked();

    void on_pushButton_div_clicked();

    void on_pushButton_equ_clicked();

    void on_pushButton_zf_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_poi_clicked();

    void on_pushButton_fs_clicked();

    void on_pushButton_pf_clicked();

    void on_pushButton_kg_clicked();

    void on_pushButton_bfh_clicked();

    void on_pushButton_CE_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_bac_clicked();

private:
    Ui::caculator *ui;
};

#endif // CACULATOR_H
