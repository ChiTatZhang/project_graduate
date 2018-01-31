/********************************************************************************
** Form generated from reading UI file 'iochalk.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IOCHALK_H
#define UI_IOCHALK_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_iochalk
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_id;
    QPushButton *pushButton;
    QDateEdit *dateEdit;
    QLabel *label_3;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QLabel *label_tips;

    void setupUi(QDialog *iochalk)
    {
        if (iochalk->objectName().isEmpty())
            iochalk->setObjectName(QStringLiteral("iochalk"));
        iochalk->resize(722, 626);
        gridLayout = new QGridLayout(iochalk);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(iochalk);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEdit_id = new QLineEdit(iochalk);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        gridLayout->addWidget(lineEdit_id, 1, 1, 1, 1);

        pushButton = new QPushButton(iochalk);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        dateEdit = new QDateEdit(iochalk);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDate(QDate(2018, 1, 9));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        label_3 = new QLabel(iochalk);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(iochalk);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tableWidget = new QTableWidget(iochalk);
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
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem23);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(172);
        tableWidget->verticalHeader()->setDefaultSectionSize(30);
        tableWidget->verticalHeader()->setMinimumSectionSize(21);

        gridLayout->addWidget(tableWidget, 4, 0, 1, 3);

        label_tips = new QLabel(iochalk);
        label_tips->setObjectName(QStringLiteral("label_tips"));

        gridLayout->addWidget(label_tips, 5, 0, 2, 3);


        retranslateUi(iochalk);

        QMetaObject::connectSlotsByName(iochalk);
    } // setupUi

    void retranslateUi(QDialog *iochalk)
    {
        iochalk->setWindowTitle(QApplication::translate("iochalk", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("iochalk", "<html><head/><body><p><span style=\" font-size:16pt; color:#c4a000;\">\345\207\272\345\205\245\350\256\260\345\275\225\346\237\245\350\257\242\357\274\232</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("iochalk", "\346\237\245\350\257\242", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("iochalk", "yyyy-MM-dd", Q_NULLPTR));
        label_3->setText(QApplication::translate("iochalk", "\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("iochalk", "\345\221\230\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("iochalk", "\345\221\230\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("iochalk", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("iochalk", "\345\207\272\345\205\245\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("iochalk", "\345\207\272\345\205\245\347\212\266\346\200\201", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("iochalk", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("iochalk", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("iochalk", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("iochalk", "4", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("iochalk", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("iochalk", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("iochalk", "2018/01/01 8:00:00", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("iochalk", "\345\205\245", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("iochalk", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("iochalk", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("iochalk", "2018/01/01 8:00:00", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(1, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("iochalk", "\345\207\272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("iochalk", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("iochalk", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 2);
        ___qtablewidgetitem18->setText(QApplication::translate("iochalk", "2018/01/01 8:00:00", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 3);
        ___qtablewidgetitem19->setText(QApplication::translate("iochalk", "\345\207\272", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(3, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("iochalk", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(3, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("iochalk", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(3, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("iochalk", "2018/01/01 8:00:00", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("iochalk", "\345\205\245", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_tips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class iochalk: public Ui_iochalk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IOCHALK_H
