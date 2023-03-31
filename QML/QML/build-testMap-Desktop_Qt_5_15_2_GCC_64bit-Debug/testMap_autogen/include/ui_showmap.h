/********************************************************************************
** Form generated from reading UI file 'showmap.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMAP_H
#define UI_SHOWMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showMap
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *tab_2;

    void setupUi(QWidget *showMap)
    {
        if (showMap->objectName().isEmpty())
            showMap->setObjectName(QString::fromUtf8("showMap"));
        showMap->resize(981, 658);
        tabWidget = new QTabWidget(showMap);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(220, 50, 481, 451));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(showMap);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(showMap);
    } // setupUi

    void retranslateUi(QWidget *showMap)
    {
        showMap->setWindowTitle(QCoreApplication::translate("showMap", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("showMap", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("showMap", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showMap: public Ui_showMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMAP_H
