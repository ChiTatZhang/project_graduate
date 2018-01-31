/********************************************************************************
** Form generated from reading UI file 'settimetable.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIMETABLE_H
#define UI_SETTIMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setTimeTable
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_ss;
    QTimeEdit *morning_s;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_sx;
    QTimeEdit *morning_x;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_xx;
    QTimeEdit *afternoon_x;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_xs;
    QTimeEdit *afternoon_s;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_tips;

    void setupUi(QWidget *setTimeTable)
    {
        if (setTimeTable->objectName().isEmpty())
            setTimeTable->setObjectName(QStringLiteral("setTimeTable"));
        setTimeTable->resize(722, 515);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(setTimeTable->sizePolicy().hasHeightForWidth());
        setTimeTable->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(setTimeTable);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(setTimeTable);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("AR PL UKai CN"));
        font.setPointSize(17);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_ss = new QLabel(setTimeTable);
        label_ss->setObjectName(QStringLiteral("label_ss"));

        horizontalLayout->addWidget(label_ss);

        morning_s = new QTimeEdit(setTimeTable);
        morning_s->setObjectName(QStringLiteral("morning_s"));
        morning_s->setMaximumTime(QTime(23, 59, 59));
        morning_s->setTime(QTime(8, 30, 0));

        horizontalLayout->addWidget(morning_s);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_sx = new QLabel(setTimeTable);
        label_sx->setObjectName(QStringLiteral("label_sx"));

        horizontalLayout_2->addWidget(label_sx);

        morning_x = new QTimeEdit(setTimeTable);
        morning_x->setObjectName(QStringLiteral("morning_x"));
        morning_x->setMaximumTime(QTime(23, 59, 59));
        morning_x->setTime(QTime(11, 30, 0));

        horizontalLayout_2->addWidget(morning_x);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_xx = new QLabel(setTimeTable);
        label_xx->setObjectName(QStringLiteral("label_xx"));

        horizontalLayout_3->addWidget(label_xx);

        afternoon_x = new QTimeEdit(setTimeTable);
        afternoon_x->setObjectName(QStringLiteral("afternoon_x"));
        afternoon_x->setMaximumTime(QTime(23, 59, 59));
        afternoon_x->setTime(QTime(17, 30, 0));

        horizontalLayout_3->addWidget(afternoon_x);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_xs = new QLabel(setTimeTable);
        label_xs->setObjectName(QStringLiteral("label_xs"));

        horizontalLayout_4->addWidget(label_xs);

        afternoon_s = new QTimeEdit(setTimeTable);
        afternoon_s->setObjectName(QStringLiteral("afternoon_s"));
        afternoon_s->setMaximumTime(QTime(23, 59, 59));
        afternoon_s->setTime(QTime(12, 30, 0));

        horizontalLayout_4->addWidget(afternoon_s);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_7->addItem(verticalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(setTimeTable);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 2);

        verticalSpacer_5 = new QSpacerItem(20, 282, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 1, 1, 1);

        label_tips = new QLabel(setTimeTable);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tips, 0, 1, 1, 1);

        label->raise();
        label_tips->raise();

        retranslateUi(setTimeTable);

        QMetaObject::connectSlotsByName(setTimeTable);
    } // setupUi

    void retranslateUi(QWidget *setTimeTable)
    {
        setTimeTable->setWindowTitle(QApplication::translate("setTimeTable", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("setTimeTable", "\344\270\212\344\270\213\347\217\255\346\227\266\351\227\264\350\256\276\347\275\256\357\274\232", Q_NULLPTR));
        label_ss->setText(QApplication::translate("setTimeTable", "\344\270\212\345\215\210\344\270\212\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        morning_s->setDisplayFormat(QApplication::translate("setTimeTable", "hh:mm:ss", Q_NULLPTR));
        label_sx->setText(QApplication::translate("setTimeTable", "\344\270\212\345\215\210\344\270\213\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        morning_x->setDisplayFormat(QApplication::translate("setTimeTable", "hh:mm:ss", Q_NULLPTR));
        label_xx->setText(QApplication::translate("setTimeTable", "\344\270\213\345\215\210\344\270\213\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        afternoon_x->setDisplayFormat(QApplication::translate("setTimeTable", "hh:mm:ss", Q_NULLPTR));
        label_xs->setText(QApplication::translate("setTimeTable", "\344\270\213\345\215\210\344\270\212\347\217\255\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        afternoon_s->setDisplayFormat(QApplication::translate("setTimeTable", "hh:mm:ss", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("setTimeTable", "\350\256\276\347\275\256", Q_NULLPTR));
        label_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class setTimeTable: public Ui_setTimeTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIMETABLE_H
