/********************************************************************************
** Form generated from reading UI file 'overtime.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERTIME_H
#define UI_OVERTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_overtime
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBox_year;
    QLabel *label_4;
    QSpinBox *spinBox_month;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label_tips;

    void setupUi(QDialog *overtime)
    {
        if (overtime->objectName().isEmpty())
            overtime->setObjectName(QStringLiteral("overtime"));
        overtime->resize(722, 626);
        gridLayout = new QGridLayout(overtime);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(overtime);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(overtime);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(overtime);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_year = new QSpinBox(overtime);
        spinBox_year->setObjectName(QStringLiteral("spinBox_year"));
        spinBox_year->setMinimum(1990);
        spinBox_year->setMaximum(2100);
        spinBox_year->setValue(2018);

        horizontalLayout->addWidget(spinBox_year);

        label_4 = new QLabel(overtime);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        spinBox_month = new QSpinBox(overtime);
        spinBox_month->setObjectName(QStringLiteral("spinBox_month"));
        spinBox_month->setMinimum(1);
        spinBox_month->setMaximum(12);

        horizontalLayout->addWidget(spinBox_month);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(overtime);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit = new QLineEdit(overtime);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(32767);
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setDragEnabled(false);

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        pushButton = new QPushButton(overtime);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 3, 1, 1);

        tableWidget = new QTableWidget(overtime);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem47);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(115);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 4);

        label_tips = new QLabel(overtime);
        label_tips->setObjectName(QStringLiteral("label_tips"));
        label_tips->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tips, 0, 2, 1, 2);


        retranslateUi(overtime);

        QMetaObject::connectSlotsByName(overtime);
    } // setupUi

    void retranslateUi(QDialog *overtime)
    {
        overtime->setWindowTitle(QApplication::translate("overtime", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("overtime", "<html><head/><body><p><span style=\" font-size:20pt; color:#c4a000;\">\345\212\240\347\217\255\350\256\260\345\275\225\346\237\245\350\257\242\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("overtime", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("overtime", "\345\271\264\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("overtime", "\346\234\210\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("overtime", "\345\221\230\345\267\245\345\217\267:", Q_NULLPTR));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("overtime", "20180100", Q_NULLPTR));
        pushButton->setText(QApplication::translate("overtime", "\346\237\245\350\257\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("overtime", "\345\221\230\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("overtime", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("overtime", "\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("overtime", "\350\265\267\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("overtime", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("overtime", "\345\212\240\347\217\255\346\227\266\351\225\277", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("overtime", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("overtime", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("overtime", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("overtime", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("overtime", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("overtime", "7", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 0);
        ___qtablewidgetitem13->setText(QApplication::translate("overtime", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 1);
        ___qtablewidgetitem14->setText(QApplication::translate("overtime", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("overtime", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("overtime", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("overtime", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("overtime", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 3);
        ___qtablewidgetitem20->setText(QApplication::translate("overtime", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(1, 4);
        ___qtablewidgetitem21->setText(QApplication::translate("overtime", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(1, 5);
        ___qtablewidgetitem22->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(2, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("overtime", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(2, 1);
        ___qtablewidgetitem24->setText(QApplication::translate("overtime", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(2, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("overtime", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(2, 4);
        ___qtablewidgetitem26->setText(QApplication::translate("overtime", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(2, 5);
        ___qtablewidgetitem27->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(3, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("overtime", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(3, 1);
        ___qtablewidgetitem29->setText(QApplication::translate("overtime", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(3, 3);
        ___qtablewidgetitem30->setText(QApplication::translate("overtime", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(3, 4);
        ___qtablewidgetitem31->setText(QApplication::translate("overtime", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(3, 5);
        ___qtablewidgetitem32->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(4, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("overtime", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(4, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("overtime", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(4, 3);
        ___qtablewidgetitem35->setText(QApplication::translate("overtime", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(4, 4);
        ___qtablewidgetitem36->setText(QApplication::translate("overtime", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(4, 5);
        ___qtablewidgetitem37->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(5, 0);
        ___qtablewidgetitem38->setText(QApplication::translate("overtime", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(5, 1);
        ___qtablewidgetitem39->setText(QApplication::translate("overtime", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(5, 3);
        ___qtablewidgetitem40->setText(QApplication::translate("overtime", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(5, 4);
        ___qtablewidgetitem41->setText(QApplication::translate("overtime", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(5, 5);
        ___qtablewidgetitem42->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(6, 0);
        ___qtablewidgetitem43->setText(QApplication::translate("overtime", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(6, 1);
        ___qtablewidgetitem44->setText(QApplication::translate("overtime", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(6, 3);
        ___qtablewidgetitem45->setText(QApplication::translate("overtime", "2018/01/02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(6, 4);
        ___qtablewidgetitem46->setText(QApplication::translate("overtime", "2018/01/05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(6, 5);
        ___qtablewidgetitem47->setText(QApplication::translate("overtime", "3", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class overtime: public Ui_overtime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERTIME_H
