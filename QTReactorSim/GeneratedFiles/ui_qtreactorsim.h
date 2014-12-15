/********************************************************************************
** Form generated from reading UI file 'qtreactorsim.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTREACTORSIM_H
#define UI_QTREACTORSIM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTReactorSimClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTReactorSimClass)
    {
        if (QTReactorSimClass->objectName().isEmpty())
            QTReactorSimClass->setObjectName(QStringLiteral("QTReactorSimClass"));
        QTReactorSimClass->resize(600, 400);
        menuBar = new QMenuBar(QTReactorSimClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QTReactorSimClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTReactorSimClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTReactorSimClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QTReactorSimClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QTReactorSimClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTReactorSimClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTReactorSimClass->setStatusBar(statusBar);

        retranslateUi(QTReactorSimClass);

        QMetaObject::connectSlotsByName(QTReactorSimClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTReactorSimClass)
    {
        QTReactorSimClass->setWindowTitle(QApplication::translate("QTReactorSimClass", "QTReactorSim", 0));
    } // retranslateUi

};

namespace Ui {
    class QTReactorSimClass: public Ui_QTReactorSimClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTREACTORSIM_H
