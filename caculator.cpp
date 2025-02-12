#include "caculator.h"
#include "ui_caculator.h"
#include "QVBoxLayout"
#include "QGridLayout"
#include "QtMath"


caculator::caculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::caculator)
  ,m_var2(0),m_var3(0),m_var1(0),display(0)
{
    ui->setupUi(this);
    display = 0.0;
    num1 = 0;
    num2 = 0;
    result = 0.0;
    str = "";
    isstr = false;
    iscontinue = false;
    Dot = false;
    count = 1;
    isDel = 0;
    ui->pushButton_1->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_2->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_3->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_4->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_5->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_6->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_7->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_8->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_9->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_0->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_zf->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_poi->setStyleSheet(
                    "QPushButton{background-color:rgb(250,250,250);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_equ->setStyleSheet(
                    "QPushButton{background-color:rgb(163,163,163);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(113,113,113);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(63,63,63);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_bfh->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_CE->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_C->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_bac->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_fs->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_pf->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_kg->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_div->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_mul->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_sub->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );
    ui->pushButton_add->setStyleSheet(
                    "QPushButton{background-color:rgb(240,240,240);border: 0px;}"
                    "QPushButton:hover{background-color: rgb(209,209,209);border:none;color:rgb(255, 255, 255);color:black}"
                    "QPushButton:pressed{background-color: rgb(187,187,187);border:none;color:rgb(255, 255, 255);color:black}"
                );



    ui->lineEdit->setText("0");        //初始化
    ui->lineEdit->setAlignment( Qt::AlignHCenter);
    ui->lineEdit->setAlignment(Qt::AlignRight);

}

caculator::~caculator()
{
    delete ui;
}

double caculator::buttonDownNum(int numSize)
{
    if (!isstr) //运算符没有被按下，那就是num1
    {
        if (!iscontinue) //按下一次
        {
            num1 = numSize;
            iscontinue = true;
        }
        else
        {
            if(isDel>0){
                    count=count-isDel;
                    isDel = 0;;
                }
            num1 = num1 * pow(10, count) + numSize;
            if (Dot)
            {

                num1 = num1 / (pow(10, count));
                count++;

            }
        }

        return num1;
    }
    else  //有运算符被按下
    {
        if (!iscontinue) //是否连续按下
        {
            num2 = numSize;
            iscontinue = true;
        }
        else
        {
            num2 = num2 * pow(10, count) + numSize;
            if (Dot)
            {
                num2 = num2 / (pow(10, count));
                count++;
            }
        }

        return num2;
    }
}





void caculator::on_pushButton_1_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(1)));
}

void caculator::on_pushButton_2_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(2)));
}

void caculator::on_pushButton_3_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(3)));
}

void caculator::on_pushButton_4_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(4)));
}

void caculator::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(5)));
}

void caculator::on_pushButton_6_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(6)));
}

void caculator::on_pushButton_7_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(7)));
}

void caculator::on_pushButton_8_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(8)));
}

void caculator::on_pushButton_9_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(9)));
}

void caculator::on_pushButton_0_clicked()
{
    ui->lineEdit->setText(QString::number(buttonDownNum(0)));
}

void caculator::on_pushButton_add_clicked()
{
    str = "+";
    isstr = true;
    iscontinue = false;
    Dot = false;
    count = 1;
}

void caculator::on_pushButton_sub_clicked()
{
    str = "-";
    isstr = true;
    iscontinue = false;
    Dot = false;
    count = 1;
}

void caculator::on_pushButton_mul_clicked()
{
    str = "*";
    isstr = true;
    iscontinue = false;
    Dot = false;
    count = 1;
}

void caculator::on_pushButton_div_clicked()
{
    str = "/";
    isstr = true;
    iscontinue = false;
    Dot = false;
    count = 1;
}

void caculator::on_pushButton_equ_clicked()
{
    if (str == "+")
        result = num1 + num2;
    else if (str == "-")
        result = num1 - num2;
    else if (str == "*")
        result = num1 * num2;
    else if (str == "/")
    {
        result = double(num1) / double(num2);
    }
    num1 = result;
    display = result;
    isstr = false;
    iscontinue = false;
    Dot = false;
    count = 1;
    ui->lineEdit->setText(QString::number(display));
}

void caculator::on_pushButton_zf_clicked()
{
    result = -num1;
    num1 = result;
    display = result;
    isstr = false;
    iscontinue = false;
    Dot = false;
    count = 1;
    ui->lineEdit->setText(QString::number(display));
}



void caculator::on_pushButton_poi_clicked()
{
    Dot = true;
}

void caculator::on_pushButton_fs_clicked()
{
    result = 1 / num1;
        num1 = result;
        display = result;
        isstr = false;
        iscontinue = false;
        Dot = false;
        count = 1;
        ui->lineEdit->setText(QString::number(display));
}

void caculator::on_pushButton_pf_clicked()
{

    result = num1*num1;
        num1 = result;
        display = result;
        isstr = false;
        iscontinue = false;
        Dot = false;
        count = 1;
        ui->lineEdit->setText(QString::number(display));
}

void caculator::on_pushButton_kg_clicked()
{
    result = sqrt(num1);
    num1 = result;
    display = result;
    isstr = false;
    iscontinue = false;
    Dot = false;
    count = 1;
    ui->lineEdit->setText(QString::number(display));
}

void caculator::on_pushButton_bfh_clicked()
{

}

void caculator::on_pushButton_CE_clicked()
{
    if(iscontinue)
    {
        num2=0;
    }
    else
    {
        num1=0;
    }
    count = 1;
    isDel = 0;
    Dot=false;
    ui->lineEdit->setText(QString::number(0));
}

void caculator::on_pushButton_C_clicked()
{
    num1 = 0;
    num2 = 0;
    display = 0;
    iscontinue = false;
    isstr = false;
    Dot = false;
    count = 1;
    isDel = 0;
    ui->lineEdit->setText(QString::number(display));
}

int num(double f)
{
    int i = 0;
    while (i++, f != (int)f)
        f *= 10;
    return i - 1;
}

void caculator::on_pushButton_bac_clicked()
{
    isDel ++;
        if (isDel > count)
            isDel = count;
        if (!isstr) {
            if (num1 - (int)num1 > 0){
                int weishu = num(num1);
                num1 = num1 * pow(10,weishu);
                num1 = (int)num1 / 10;
                num1 = num1 / pow(10, weishu - 1);
                display = num1;
                ui->lineEdit->setText(QString::number(display));
            }else{
                    num1 = (int)num1 / 10;
                    display = num1;
                    ui->lineEdit->setText(QString::number(display));
            }
        }
        else {
            if (num2 - (int)num2 > 0) {
                int weishu = num(num2);
                num2 = num2 * pow(10, weishu);
                num2 = (int)num2 / 10;
                num2 = num2 / pow(10, weishu - 1);
                display = num2;
                ui->lineEdit->setText(QString::number(display));
            }
            else {
                num2 = (int)num2 / 10;
                display = num2;
                ui->lineEdit->setText(QString::number(display));
            }
        }
}
