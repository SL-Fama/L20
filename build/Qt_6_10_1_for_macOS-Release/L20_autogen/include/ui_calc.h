/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *o_history;
    QLabel *io_display;
    QPushButton *num_8;
    QPushButton *btn_factorial;
    QPushButton *num_0;
    QPushButton *btn_add;
    QPushButton *num_4;
    QPushButton *btn_logarithm;
    QPushButton *btn_errase;
    QPushButton *num_1;
    QPushButton *num_9;
    QPushButton *btn_equal;
    QPushButton *btn_substruct;
    QPushButton *btn_divide;
    QPushButton *num_2;
    QPushButton *num_3;
    QPushButton *btn_multiply;
    QPushButton *num_7;
    QPushButton *num_6;
    QPushButton *num_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName("Calc");
        Calc->resize(800, 600);
        centralwidget = new QWidget(Calc);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        centralwidget->setAutoFillBackground(false);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(16, 16, 16, 16);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContentsOnFirstShow);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 742, 312));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        o_history = new QLabel(scrollAreaWidgetContents);
        o_history->setObjectName("o_history");
        o_history->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout_2->addWidget(o_history);

        io_display = new QLabel(scrollAreaWidgetContents);
        io_display->setObjectName("io_display");
        io_display->setEnabled(true);
        QFont font;
        font.setPointSize(32);
        io_display->setFont(font);
        io_display->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        io_display->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing);

        verticalLayout_2->addWidget(io_display);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 4);

        num_8 = new QPushButton(centralwidget);
        num_8->setObjectName("num_8");

        gridLayout->addWidget(num_8, 2, 1, 1, 1);

        btn_factorial = new QPushButton(centralwidget);
        btn_factorial->setObjectName("btn_factorial");

        gridLayout->addWidget(btn_factorial, 1, 2, 1, 1);

        num_0 = new QPushButton(centralwidget);
        num_0->setObjectName("num_0");

        gridLayout->addWidget(num_0, 5, 1, 1, 1);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");

        gridLayout->addWidget(btn_add, 4, 3, 1, 1);

        num_4 = new QPushButton(centralwidget);
        num_4->setObjectName("num_4");

        gridLayout->addWidget(num_4, 3, 0, 1, 1);

        btn_logarithm = new QPushButton(centralwidget);
        btn_logarithm->setObjectName("btn_logarithm");

        gridLayout->addWidget(btn_logarithm, 1, 1, 1, 1);

        btn_errase = new QPushButton(centralwidget);
        btn_errase->setObjectName("btn_errase");

        gridLayout->addWidget(btn_errase, 1, 0, 1, 1);

        num_1 = new QPushButton(centralwidget);
        num_1->setObjectName("num_1");

        gridLayout->addWidget(num_1, 4, 0, 1, 1);

        num_9 = new QPushButton(centralwidget);
        num_9->setObjectName("num_9");

        gridLayout->addWidget(num_9, 2, 2, 1, 1);

        btn_equal = new QPushButton(centralwidget);
        btn_equal->setObjectName("btn_equal");

        gridLayout->addWidget(btn_equal, 5, 3, 1, 1);

        btn_substruct = new QPushButton(centralwidget);
        btn_substruct->setObjectName("btn_substruct");

        gridLayout->addWidget(btn_substruct, 3, 3, 1, 1);

        btn_divide = new QPushButton(centralwidget);
        btn_divide->setObjectName("btn_divide");

        gridLayout->addWidget(btn_divide, 1, 3, 1, 1);

        num_2 = new QPushButton(centralwidget);
        num_2->setObjectName("num_2");

        gridLayout->addWidget(num_2, 4, 1, 1, 1);

        num_3 = new QPushButton(centralwidget);
        num_3->setObjectName("num_3");
        num_3->setEnabled(true);

        gridLayout->addWidget(num_3, 4, 2, 1, 1);

        btn_multiply = new QPushButton(centralwidget);
        btn_multiply->setObjectName("btn_multiply");

        gridLayout->addWidget(btn_multiply, 2, 3, 1, 1);

        num_7 = new QPushButton(centralwidget);
        num_7->setObjectName("num_7");

        gridLayout->addWidget(num_7, 2, 0, 1, 1);

        num_6 = new QPushButton(centralwidget);
        num_6->setObjectName("num_6");

        gridLayout->addWidget(num_6, 3, 2, 1, 1);

        num_5 = new QPushButton(centralwidget);
        num_5->setObjectName("num_5");

        gridLayout->addWidget(num_5, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        Calc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calc);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 33));
        Calc->setMenuBar(menubar);
        statusbar = new QStatusBar(Calc);
        statusbar->setObjectName("statusbar");
        Calc->setStatusBar(statusbar);

        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QMainWindow *Calc)
    {
        Calc->setWindowTitle(QCoreApplication::translate("Calc", "Calc", nullptr));
        o_history->setText(QCoreApplication::translate("Calc", " Result", nullptr));
        io_display->setText(QCoreApplication::translate("Calc", "0", nullptr));
        num_8->setText(QCoreApplication::translate("Calc", "8", nullptr));
        btn_factorial->setText(QCoreApplication::translate("Calc", "fac", nullptr));
        num_0->setText(QCoreApplication::translate("Calc", "0", nullptr));
        btn_add->setText(QCoreApplication::translate("Calc", "+", nullptr));
        num_4->setText(QCoreApplication::translate("Calc", "4", nullptr));
        btn_logarithm->setText(QCoreApplication::translate("Calc", "log", nullptr));
        btn_errase->setText(QCoreApplication::translate("Calc", "del", nullptr));
        num_1->setText(QCoreApplication::translate("Calc", "1", nullptr));
        num_9->setText(QCoreApplication::translate("Calc", "9", nullptr));
        btn_equal->setText(QCoreApplication::translate("Calc", "=", nullptr));
        btn_substruct->setText(QCoreApplication::translate("Calc", "-", nullptr));
        btn_divide->setText(QCoreApplication::translate("Calc", "/", nullptr));
        num_2->setText(QCoreApplication::translate("Calc", "2", nullptr));
        num_3->setText(QCoreApplication::translate("Calc", "3", nullptr));
        btn_multiply->setText(QCoreApplication::translate("Calc", "*", nullptr));
        num_7->setText(QCoreApplication::translate("Calc", "7", nullptr));
        num_6->setText(QCoreApplication::translate("Calc", "6", nullptr));
        num_5->setText(QCoreApplication::translate("Calc", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
