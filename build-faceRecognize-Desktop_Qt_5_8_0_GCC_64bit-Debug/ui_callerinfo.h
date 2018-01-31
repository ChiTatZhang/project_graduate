/********************************************************************************
** Form generated from reading UI file 'callerinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALLERINFO_H
#define UI_CALLERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_callerInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QPushButton *pushButton_2;
    QLabel *label_tips1;

    void setupUi(QDialog *callerInfo)
    {
        if (callerInfo->objectName().isEmpty())
            callerInfo->setObjectName(QStringLiteral("callerInfo"));
        callerInfo->resize(722, 626);
        gridLayout = new QGridLayout(callerInfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(callerInfo);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tableWidget = new QTableWidget(callerInfo);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 2)
            tableWidget->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem13);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->horizontalHeader()->setDefaultSectionSize(172);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_7 = new QLabel(callerInfo);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        dateEdit = new QDateEdit(callerInfo);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setAlignment(Qt::AlignCenter);
        dateEdit->setDateTime(QDateTime(QDate(2018, 1, 8), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(dateEdit);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        pushButton_2 = new QPushButton(callerInfo);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_5->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 3);

        label_tips1 = new QLabel(callerInfo);
        label_tips1->setObjectName(QStringLiteral("label_tips1"));
        label_tips1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tips1, 0, 1, 1, 2);


        retranslateUi(callerInfo);

        QMetaObject::connectSlotsByName(callerInfo);
    } // setupUi

    void retranslateUi(QDialog *callerInfo)
    {
        callerInfo->setWindowTitle(QApplication::translate("callerInfo", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("callerInfo", "<html><head/><body><p><span style=\" font-size:16pt; color:#f57900;\">\350\256\277\345\256\242\346\237\245\350\257\242\357\274\232</span></p></body></html>", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("callerInfo", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("callerInfo", "\346\235\245\350\256\277\345\257\271\350\261\241", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("callerInfo", "\346\235\245\350\256\277\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("callerInfo", "\346\235\245\350\256\277\347\274\230\347\224\261", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("callerInfo", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("callerInfo", "2", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 0);
        ___qtablewidgetitem6->setText(QApplication::translate("callerInfo", "\345\274\240\344\274\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 1);
        ___qtablewidgetitem7->setText(QApplication::translate("callerInfo", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 2);
        ___qtablewidgetitem8->setText(QApplication::translate("callerInfo", "2018/1/8 \344\270\212\345\215\21010:00", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 3);
        ___qtablewidgetitem9->setText(QApplication::translate("callerInfo", "\350\201\212\345\244\251\345\220\204\345\234\260\345\210\206\345\205\254\345\217\270\350\233\213\347\263\225\344\270\212\347\232\204\345\231\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("callerInfo", "\346\235\216\345\210\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("callerInfo", "\346\235\216\345\233\233", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("callerInfo", "2018/1/8 \344\270\212\345\215\21010:10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("callerInfo", "\351\200\201\345\244\226\345\215\226", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_7->setText(QApplication::translate("callerInfo", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("callerInfo", "yyyy-MM-dd", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("callerInfo", "\346\237\245\350\257\242", Q_NULLPTR));
        label_tips1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class callerInfo: public Ui_callerInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALLERINFO_H
