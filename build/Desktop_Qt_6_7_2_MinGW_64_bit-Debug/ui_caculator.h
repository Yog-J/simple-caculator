/********************************************************************************
** Form generated from reading UI file 'caculator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CACULATOR_H
#define UI_CACULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_caculator
{
public:
    QAction *action_T;
    QAction *action_S;
    QAction *action_P;
    QAction *action_Z;
    QAction *action_Y;
    QAction *action_A;
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_C;
    QPushButton *pushButton_kg;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_poi;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_CE;
    QPushButton *pushButton_pf;
    QPushButton *pushButton_8;
    QPushButton *pushButton_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_0;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_bfh;
    QPushButton *pushButton_fs;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_zf;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_bac;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_add;
    QPushButton *pushButton_equ;
    QMenuBar *menuBar;
    QMenu *menu_V;
    QMenu *menu_E;
    QMenu *menu_H;

    void setupUi(QMainWindow *caculator)
    {
        if (caculator->objectName().isEmpty())
            caculator->setObjectName("caculator");
        caculator->resize(402, 630);
        action_T = new QAction(caculator);
        action_T->setObjectName("action_T");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/bzx.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_T->setIcon(icon);
        action_S = new QAction(caculator);
        action_S->setObjectName("action_S");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/kx.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_S->setIcon(icon1);
        action_P = new QAction(caculator);
        action_P->setObjectName("action_P");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/cxy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_P->setIcon(icon2);
        action_Z = new QAction(caculator);
        action_Z->setObjectName("action_Z");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/cx.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Z->setIcon(icon3);
        action_Y = new QAction(caculator);
        action_Y->setObjectName("action_Y");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/hf.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_Y->setIcon(icon4);
        action_A = new QAction(caculator);
        action_A->setObjectName("action_A");
        action_A->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        action_A->setIcon(icon5);
        centralWidget = new QWidget(caculator);
        centralWidget->setObjectName("centralWidget");
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(5, 7, 391, 121));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(26);
        font.setBold(false);
        lineEdit->setFont(font);
        lineEdit->setLayoutDirection(Qt::RightToLeft);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit->setFrame(false);
        lineEdit->setAlignment(Qt::AlignHCenter);
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(5, 130, 391, 471));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Adobe Arabic")});
        font1.setPointSize(20);
        gridLayoutWidget->setFont(font1);
        gridLayout_3 = new QGridLayout(gridLayoutWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        pushButton_C = new QPushButton(gridLayoutWidget);
        pushButton_C->setObjectName("pushButton_C");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_C->sizePolicy().hasHeightForWidth());
        pushButton_C->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light")});
        font2.setPointSize(10);
        pushButton_C->setFont(font2);

        verticalLayout_8->addWidget(pushButton_C);

        pushButton_kg = new QPushButton(gridLayoutWidget);
        pushButton_kg->setObjectName("pushButton_kg");
        sizePolicy1.setHeightForWidth(pushButton_kg->sizePolicy().hasHeightForWidth());
        pushButton_kg->setSizePolicy(sizePolicy1);
        pushButton_kg->setFont(font2);

        verticalLayout_8->addWidget(pushButton_kg);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(13);
        font3.setBold(false);
        pushButton_9->setFont(font3);

        verticalLayout_8->addWidget(pushButton_9);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setFont(font3);

        verticalLayout_8->addWidget(pushButton_6);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy1.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy1);
        pushButton_3->setFont(font3);

        verticalLayout_8->addWidget(pushButton_3);

        pushButton_poi = new QPushButton(gridLayoutWidget);
        pushButton_poi->setObjectName("pushButton_poi");
        sizePolicy1.setHeightForWidth(pushButton_poi->sizePolicy().hasHeightForWidth());
        pushButton_poi->setSizePolicy(sizePolicy1);
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221 Light")});
        font4.setPointSize(18);
        pushButton_poi->setFont(font4);

        verticalLayout_8->addWidget(pushButton_poi);


        gridLayout_3->addLayout(verticalLayout_8, 0, 2, 1, 1);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName("verticalLayout_7");
        pushButton_CE = new QPushButton(gridLayoutWidget);
        pushButton_CE->setObjectName("pushButton_CE");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_CE->sizePolicy().hasHeightForWidth());
        pushButton_CE->setSizePolicy(sizePolicy2);
        pushButton_CE->setMinimumSize(QSize(0, 0));
        pushButton_CE->setFont(font2);
        pushButton_CE->setIconSize(QSize(20, 15));

        verticalLayout_7->addWidget(pushButton_CE);

        pushButton_pf = new QPushButton(gridLayoutWidget);
        pushButton_pf->setObjectName("pushButton_pf");
        sizePolicy2.setHeightForWidth(pushButton_pf->sizePolicy().hasHeightForWidth());
        pushButton_pf->setSizePolicy(sizePolicy2);
        pushButton_pf->setFont(font2);

        verticalLayout_7->addWidget(pushButton_pf);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy2.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy2);
        pushButton_8->setFont(font3);

        verticalLayout_7->addWidget(pushButton_8);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setFont(font3);

        verticalLayout_7->addWidget(pushButton_5);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setFont(font3);

        verticalLayout_7->addWidget(pushButton_2);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName("pushButton_0");
        sizePolicy1.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy1);
        pushButton_0->setFont(font3);

        verticalLayout_7->addWidget(pushButton_0);


        gridLayout_3->addLayout(verticalLayout_7, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        pushButton_bfh = new QPushButton(gridLayoutWidget);
        pushButton_bfh->setObjectName("pushButton_bfh");
        sizePolicy2.setHeightForWidth(pushButton_bfh->sizePolicy().hasHeightForWidth());
        pushButton_bfh->setSizePolicy(sizePolicy2);
        pushButton_bfh->setFont(font2);

        verticalLayout_6->addWidget(pushButton_bfh);

        pushButton_fs = new QPushButton(gridLayoutWidget);
        pushButton_fs->setObjectName("pushButton_fs");
        sizePolicy2.setHeightForWidth(pushButton_fs->sizePolicy().hasHeightForWidth());
        pushButton_fs->setSizePolicy(sizePolicy2);
        pushButton_fs->setFont(font2);

        verticalLayout_6->addWidget(pushButton_fs);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy2.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy2);
        pushButton_7->setFont(font3);
        pushButton_7->setFlat(false);

        verticalLayout_6->addWidget(pushButton_7);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setFont(font3);

        verticalLayout_6->addWidget(pushButton_4);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName("pushButton_1");
        sizePolicy2.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy2);
        pushButton_1->setFont(font3);
        pushButton_1->setAutoDefault(false);
        pushButton_1->setFlat(false);

        verticalLayout_6->addWidget(pushButton_1);

        pushButton_zf = new QPushButton(gridLayoutWidget);
        pushButton_zf->setObjectName("pushButton_zf");
        sizePolicy2.setHeightForWidth(pushButton_zf->sizePolicy().hasHeightForWidth());
        pushButton_zf->setSizePolicy(sizePolicy2);
        pushButton_zf->setFont(font4);

        verticalLayout_6->addWidget(pushButton_zf);


        gridLayout_3->addLayout(verticalLayout_6, 0, 0, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName("verticalLayout_9");
        pushButton_bac = new QPushButton(gridLayoutWidget);
        pushButton_bac->setObjectName("pushButton_bac");
        sizePolicy1.setHeightForWidth(pushButton_bac->sizePolicy().hasHeightForWidth());
        pushButton_bac->setSizePolicy(sizePolicy1);
        pushButton_bac->setFont(font2);

        verticalLayout_9->addWidget(pushButton_bac);

        pushButton_div = new QPushButton(gridLayoutWidget);
        pushButton_div->setObjectName("pushButton_div");
        sizePolicy1.setHeightForWidth(pushButton_div->sizePolicy().hasHeightForWidth());
        pushButton_div->setSizePolicy(sizePolicy1);
        pushButton_div->setFont(font2);

        verticalLayout_9->addWidget(pushButton_div);

        pushButton_mul = new QPushButton(gridLayoutWidget);
        pushButton_mul->setObjectName("pushButton_mul");
        sizePolicy1.setHeightForWidth(pushButton_mul->sizePolicy().hasHeightForWidth());
        pushButton_mul->setSizePolicy(sizePolicy1);
        pushButton_mul->setFont(font4);

        verticalLayout_9->addWidget(pushButton_mul);

        pushButton_sub = new QPushButton(gridLayoutWidget);
        pushButton_sub->setObjectName("pushButton_sub");
        sizePolicy1.setHeightForWidth(pushButton_sub->sizePolicy().hasHeightForWidth());
        pushButton_sub->setSizePolicy(sizePolicy1);
        pushButton_sub->setFont(font4);

        verticalLayout_9->addWidget(pushButton_sub);

        pushButton_add = new QPushButton(gridLayoutWidget);
        pushButton_add->setObjectName("pushButton_add");
        sizePolicy1.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy1);
        pushButton_add->setFont(font4);

        verticalLayout_9->addWidget(pushButton_add);

        pushButton_equ = new QPushButton(gridLayoutWidget);
        pushButton_equ->setObjectName("pushButton_equ");
        sizePolicy1.setHeightForWidth(pushButton_equ->sizePolicy().hasHeightForWidth());
        pushButton_equ->setSizePolicy(sizePolicy1);
        pushButton_equ->setFont(font4);

        verticalLayout_9->addWidget(pushButton_equ);


        gridLayout_3->addLayout(verticalLayout_9, 0, 3, 1, 1);

        caculator->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(caculator);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 402, 23));
        menu_V = new QMenu(menuBar);
        menu_V->setObjectName("menu_V");
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName("menu_E");
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName("menu_H");
        caculator->setMenuBar(menuBar);

        menuBar->addAction(menu_V->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_V->addAction(action_T);
        menu_V->addAction(action_S);
        menu_V->addAction(action_P);
        menu_E->addAction(action_Z);
        menu_E->addAction(action_Y);
        menu_H->addAction(action_A);

        retranslateUi(caculator);

        pushButton_7->setDefault(false);
        pushButton_1->setDefault(false);


        QMetaObject::connectSlotsByName(caculator);
    } // setupUi

    void retranslateUi(QMainWindow *caculator)
    {
        caculator->setWindowTitle(QCoreApplication::translate("caculator", "caculator", nullptr));
        action_T->setText(QCoreApplication::translate("caculator", "\346\240\207\345\207\206\345\236\213(&T)", nullptr));
#if QT_CONFIG(shortcut)
        action_T->setShortcut(QCoreApplication::translate("caculator", "Alt+1", nullptr));
#endif // QT_CONFIG(shortcut)
        action_S->setText(QCoreApplication::translate("caculator", "\347\247\221\345\255\246\345\236\213(&S)", nullptr));
#if QT_CONFIG(shortcut)
        action_S->setShortcut(QCoreApplication::translate("caculator", "Alt+2", nullptr));
#endif // QT_CONFIG(shortcut)
        action_P->setText(QCoreApplication::translate("caculator", "\347\250\213\345\272\217\345\221\230(&P)", nullptr));
#if QT_CONFIG(shortcut)
        action_P->setShortcut(QCoreApplication::translate("caculator", "Alt+3", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Z->setText(QCoreApplication::translate("caculator", "\346\222\244\351\224\200(&Z)", nullptr));
#if QT_CONFIG(shortcut)
        action_Z->setShortcut(QCoreApplication::translate("caculator", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Y->setText(QCoreApplication::translate("caculator", "\346\201\242\345\244\215(&Y)", nullptr));
#if QT_CONFIG(shortcut)
        action_Y->setShortcut(QCoreApplication::translate("caculator", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        action_A->setText(QCoreApplication::translate("caculator", "\345\205\263\344\272\216(&A)", nullptr));
#if QT_CONFIG(shortcut)
        action_A->setShortcut(QCoreApplication::translate("caculator", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        lineEdit->setText(QCoreApplication::translate("caculator", "0", nullptr));
        pushButton_C->setText(QCoreApplication::translate("caculator", "C", nullptr));
        pushButton_kg->setText(QCoreApplication::translate("caculator", "X^1/2", nullptr));
        pushButton_9->setText(QCoreApplication::translate("caculator", "9", nullptr));
        pushButton_6->setText(QCoreApplication::translate("caculator", "6", nullptr));
        pushButton_3->setText(QCoreApplication::translate("caculator", "3", nullptr));
        pushButton_poi->setText(QCoreApplication::translate("caculator", ".", nullptr));
        pushButton_CE->setText(QCoreApplication::translate("caculator", "CE", nullptr));
        pushButton_pf->setText(QCoreApplication::translate("caculator", "X^2", nullptr));
        pushButton_8->setText(QCoreApplication::translate("caculator", "8", nullptr));
        pushButton_5->setText(QCoreApplication::translate("caculator", "5", nullptr));
        pushButton_2->setText(QCoreApplication::translate("caculator", "2", nullptr));
        pushButton_0->setText(QCoreApplication::translate("caculator", "0", nullptr));
        pushButton_bfh->setText(QCoreApplication::translate("caculator", "%", nullptr));
        pushButton_fs->setText(QCoreApplication::translate("caculator", "1/X", nullptr));
        pushButton_7->setText(QCoreApplication::translate("caculator", "7", nullptr));
        pushButton_4->setText(QCoreApplication::translate("caculator", "4", nullptr));
        pushButton_1->setText(QCoreApplication::translate("caculator", "1", nullptr));
        pushButton_zf->setText(QCoreApplication::translate("caculator", "+/-", nullptr));
        pushButton_bac->setText(QCoreApplication::translate("caculator", "Del", nullptr));
        pushButton_div->setText(QCoreApplication::translate("caculator", "/", nullptr));
        pushButton_mul->setText(QCoreApplication::translate("caculator", "*", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("caculator", "-", nullptr));
        pushButton_add->setText(QCoreApplication::translate("caculator", "+", nullptr));
        pushButton_equ->setText(QCoreApplication::translate("caculator", "=", nullptr));
        menu_V->setTitle(QCoreApplication::translate("caculator", "\346\237\245\347\234\213(&V)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("caculator", "\347\274\226\350\276\221(&E)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("caculator", "\345\270\256\345\212\251(&H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class caculator: public Ui_caculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CACULATOR_H
