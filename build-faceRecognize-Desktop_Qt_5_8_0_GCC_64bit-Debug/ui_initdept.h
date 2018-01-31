/********************************************************************************
** Form generated from reading UI file 'initdept.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INITDEPT_H
#define UI_INITDEPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_initDept
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *listWidget_dept;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *listWidget;

    void setupUi(QDialog *initDept)
    {
        if (initDept->objectName().isEmpty())
            initDept->setObjectName(QStringLiteral("initDept"));
        initDept->resize(790, 726);
        gridLayout = new QGridLayout(initDept);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(initDept);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(initDept);
        label->setObjectName(QStringLiteral("label"));
        label->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(label);

        listWidget_dept = new QListWidget(initDept);
        listWidget_dept->setObjectName(QStringLiteral("listWidget_dept"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget_dept->sizePolicy().hasHeightForWidth());
        listWidget_dept->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QStringLiteral("AR PL UKai CN"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        listWidget_dept->setFont(font);
        listWidget_dept->setFocusPolicy(Qt::StrongFocus);
        listWidget_dept->setInputMethodHints(Qt::ImhNone);
        listWidget_dept->setFrameShape(QFrame::WinPanel);
        listWidget_dept->setFrameShadow(QFrame::Sunken);
        listWidget_dept->setLineWidth(2);
        listWidget_dept->setMidLineWidth(0);
        listWidget_dept->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget_dept->setAutoScrollMargin(17);
        listWidget_dept->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget_dept->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget_dept->setLayoutMode(QListView::Batched);

        verticalLayout->addWidget(listWidget_dept);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        line = new QFrame(initDept);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(initDept);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setTextFormat(Qt::AutoText);

        verticalLayout_2->addWidget(label_2);

        listWidget = new QListWidget(initDept);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setFont(font);
        listWidget->setFocusPolicy(Qt::StrongFocus);
        listWidget->setInputMethodHints(Qt::ImhNone);
        listWidget->setFrameShape(QFrame::WinPanel);
        listWidget->setFrameShadow(QFrame::Sunken);
        listWidget->setLineWidth(2);
        listWidget->setMidLineWidth(0);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget->setAutoScrollMargin(17);
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget->setLayoutMode(QListView::Batched);

        verticalLayout_2->addWidget(listWidget);


        gridLayout->addLayout(verticalLayout_2, 1, 2, 1, 1);


        retranslateUi(initDept);

        QMetaObject::connectSlotsByName(initDept);
    } // setupUi

    void retranslateUi(QDialog *initDept)
    {
        initDept->setWindowTitle(QApplication::translate("initDept", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("initDept", "<html><head/><body><p><span style=\" color:#ef2929;\">tips:\345\234\250\347\251\272\347\231\275\345\244\204\345\215\225\345\207\273\345\217\263\351\224\256\346\267\273\345\212\240item,\345\215\225\345\207\273\345\217\263\351\224\256click item \344\277\256\346\224\271\345\222\214\345\210\240\351\231\244item</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("initDept", "<html><head/><body><p><span style=\" font-size:20pt; color:#f57900;\">\345\205\254\345\217\270\351\203\250\351\227\250\344\275\223\347\263\273\350\256\276\347\275\256\357\274\232</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("initDept", "<html><head/><body><p><span style=\" font-size:20pt; color:#f57900;\">\345\205\254\345\217\270\350\201\214\344\275\215\344\275\223\347\263\273\350\256\276\347\275\256\357\274\232</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class initDept: public Ui_initDept {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INITDEPT_H
