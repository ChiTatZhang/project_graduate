/********************************************************************************
** Form generated from reading UI file 'staffdelete.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAFFDELETE_H
#define UI_STAFFDELETE_H

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
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_staffDelete
{
public:
    QGridLayout *gridLayout;
    QLabel *label_16;
    QLabel *label_delete;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_20;
    QLineEdit *lineEdit_id3;
    QPushButton *deleteButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *staffDelete)
    {
        if (staffDelete->objectName().isEmpty())
            staffDelete->setObjectName(QStringLiteral("staffDelete"));
        staffDelete->resize(722, 626);
        staffDelete->setWindowOpacity(5);
        gridLayout = new QGridLayout(staffDelete);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_16 = new QLabel(staffDelete);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 0, 0, 1, 1);

        label_delete = new QLabel(staffDelete);
        label_delete->setObjectName(QStringLiteral("label_delete"));
        label_delete->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_delete, 0, 1, 1, 2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_20 = new QLabel(staffDelete);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_13->addWidget(label_20);

        lineEdit_id3 = new QLineEdit(staffDelete);
        lineEdit_id3->setObjectName(QStringLiteral("lineEdit_id3"));

        horizontalLayout_13->addWidget(lineEdit_id3);


        gridLayout->addLayout(horizontalLayout_13, 1, 0, 1, 2);

        deleteButton = new QPushButton(staffDelete);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        gridLayout->addWidget(deleteButton, 1, 2, 1, 1);

        tableWidget = new QTableWidget(staffDelete);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(3, 6, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(4, 6, __qtablewidgetitem46);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 2, 0, 1, 3);


        retranslateUi(staffDelete);

        QMetaObject::connectSlotsByName(staffDelete);
    } // setupUi

    void retranslateUi(QDialog *staffDelete)
    {
        staffDelete->setWindowTitle(QApplication::translate("staffDelete", "Dialog", Q_NULLPTR));
        label_16->setText(QApplication::translate("staffDelete", "<html><head/><body><p><span style=\" font-size:16pt; font-style:italic; color:#c4a000;\">\345\221\230\345\267\245\344\277\241\346\201\257\345\210\240\351\231\244\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_delete->setText(QString());
        label_20->setText(QApplication::translate("staffDelete", "\345\221\230\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("staffDelete", "\345\210\240\351\231\244", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("staffDelete", "\345\221\230\345\267\245\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("staffDelete", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("staffDelete", "\347\224\265\350\257\235", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("staffDelete", "Emile", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("staffDelete", "\345\205\245\350\201\214\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("staffDelete", "\350\201\214\347\247\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("staffDelete", "\346\211\200\345\234\250\351\203\250\351\227\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("staffDelete", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("staffDelete", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("staffDelete", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("staffDelete", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("staffDelete", "5", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("staffDelete", "201801", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("staffDelete", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("staffDelete", "1453246641", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("staffDelete", "zhangsan@qq.com", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("staffDelete", "2014.12.31", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("staffDelete", "\346\231\256\351\200\232\345\221\230\345\267\245", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 6);
        ___qtablewidgetitem18->setText(QApplication::translate("staffDelete", "\344\272\272\345\212\233\350\265\204\346\272\220\351\203\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("staffDelete", "201802", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 1);
        ___qtablewidgetitem20->setText(QApplication::translate("staffDelete", "\346\235\216\345\233\233", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(1, 2);
        ___qtablewidgetitem21->setText(QApplication::translate("staffDelete", "4534154351", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(1, 3);
        ___qtablewidgetitem22->setText(QApplication::translate("staffDelete", "lisi@qq.com", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(1, 4);
        ___qtablewidgetitem23->setText(QApplication::translate("staffDelete", "2014.05.04", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(1, 5);
        ___qtablewidgetitem24->setText(QApplication::translate("staffDelete", "\351\203\250\351\227\250\347\273\217\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(1, 6);
        ___qtablewidgetitem25->setText(QApplication::translate("staffDelete", "\350\264\242\345\212\241\351\203\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(2, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("staffDelete", "201803", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(2, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("staffDelete", "\347\216\213\344\272\224", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(2, 2);
        ___qtablewidgetitem28->setText(QApplication::translate("staffDelete", "1834535164", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(2, 3);
        ___qtablewidgetitem29->setText(QApplication::translate("staffDelete", "wangwu@qq.com", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(2, 4);
        ___qtablewidgetitem30->setText(QApplication::translate("staffDelete", "2013.01.05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(2, 5);
        ___qtablewidgetitem31->setText(QApplication::translate("staffDelete", "\351\203\250\351\227\250\347\273\217\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(2, 6);
        ___qtablewidgetitem32->setText(QApplication::translate("staffDelete", "\344\272\272\345\212\233\350\265\204\346\272\220\351\203\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(3, 0);
        ___qtablewidgetitem33->setText(QApplication::translate("staffDelete", "201804", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(3, 1);
        ___qtablewidgetitem34->setText(QApplication::translate("staffDelete", "\350\265\265\345\205\255", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(3, 2);
        ___qtablewidgetitem35->setText(QApplication::translate("staffDelete", "1383738451", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(3, 3);
        ___qtablewidgetitem36->setText(QApplication::translate("staffDelete", "zhaoliu@qq.com", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(3, 4);
        ___qtablewidgetitem37->setText(QApplication::translate("staffDelete", "2013.10.21", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(3, 5);
        ___qtablewidgetitem38->setText(QApplication::translate("staffDelete", "\346\231\256\351\200\232\345\221\230\345\267\245", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(3, 6);
        ___qtablewidgetitem39->setText(QApplication::translate("staffDelete", "\350\264\242\345\212\241\351\203\250", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(4, 0);
        ___qtablewidgetitem40->setText(QApplication::translate("staffDelete", "201805", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(4, 1);
        ___qtablewidgetitem41->setText(QApplication::translate("staffDelete", "\345\221\250\345\205\254", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(4, 2);
        ___qtablewidgetitem42->setText(QApplication::translate("staffDelete", "1534346415", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(4, 3);
        ___qtablewidgetitem43->setText(QApplication::translate("staffDelete", "zhougong@qq.com", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(4, 4);
        ___qtablewidgetitem44->setText(QApplication::translate("staffDelete", "2016.02.15", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(4, 5);
        ___qtablewidgetitem45->setText(QApplication::translate("staffDelete", "\346\231\256\351\200\232\345\221\230\345\267\245", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(4, 6);
        ___qtablewidgetitem46->setText(QApplication::translate("staffDelete", "\346\212\200\346\234\257\347\240\224\345\217\221\351\203\250", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class staffDelete: public Ui_staffDelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAFFDELETE_H
