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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showMap
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *showMap)
    {
        if (showMap->objectName().isEmpty())
            showMap->setObjectName(QString::fromUtf8("showMap"));
        showMap->resize(981, 658);
        pushButton = new QPushButton(showMap);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 240, 89, 25));

        retranslateUi(showMap);

        QMetaObject::connectSlotsByName(showMap);
    } // setupUi

    void retranslateUi(QWidget *showMap)
    {
        showMap->setWindowTitle(QCoreApplication::translate("showMap", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("showMap", "clikcMe", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showMap: public Ui_showMap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMAP_H
