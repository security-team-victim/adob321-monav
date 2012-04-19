/********************************************************************************
** Form generated from reading UI file 'logwindow.ui'
**
** Created: Tue Mar 20 23:29:05 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGWINDOW_H
#define UI_LOGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LogWindow
{
public:
    QAction *actionFile;
    QAction *actionClear;
    QAction *actionEnable;
    QAction *actionTime;
    QAction *actionLevel;
    QAction *actionVerbose;
    QAction *actionWarning;
    QAction *actionCritical;
    QAction *actionFatal;
    QAction *actionSystem;
    QAction *actionClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *text;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOptions;
    QMenu *menuFormat;

    void setupUi(QMainWindow *LogWindow)
    {
        if (LogWindow->objectName().isEmpty())
            LogWindow->setObjectName(QString::fromUtf8("LogWindow"));
        LogWindow->resize(800, 600);
        actionFile = new QAction(LogWindow);
        actionFile->setObjectName(QString::fromUtf8("actionFile"));
        actionClear = new QAction(LogWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionEnable = new QAction(LogWindow);
        actionEnable->setObjectName(QString::fromUtf8("actionEnable"));
        actionEnable->setCheckable(true);
        actionEnable->setChecked(true);
        actionTime = new QAction(LogWindow);
        actionTime->setObjectName(QString::fromUtf8("actionTime"));
        actionTime->setCheckable(true);
        actionTime->setChecked(true);
        actionLevel = new QAction(LogWindow);
        actionLevel->setObjectName(QString::fromUtf8("actionLevel"));
        actionLevel->setCheckable(true);
        actionLevel->setChecked(true);
        actionVerbose = new QAction(LogWindow);
        actionVerbose->setObjectName(QString::fromUtf8("actionVerbose"));
        actionVerbose->setCheckable(true);
        actionVerbose->setChecked(true);
        actionWarning = new QAction(LogWindow);
        actionWarning->setObjectName(QString::fromUtf8("actionWarning"));
        actionWarning->setCheckable(true);
        actionWarning->setChecked(true);
        actionCritical = new QAction(LogWindow);
        actionCritical->setObjectName(QString::fromUtf8("actionCritical"));
        actionCritical->setCheckable(true);
        actionCritical->setChecked(true);
        actionFatal = new QAction(LogWindow);
        actionFatal->setObjectName(QString::fromUtf8("actionFatal"));
        actionFatal->setCheckable(true);
        actionFatal->setChecked(true);
        actionSystem = new QAction(LogWindow);
        actionSystem->setObjectName(QString::fromUtf8("actionSystem"));
        actionSystem->setCheckable(true);
        actionSystem->setChecked(true);
        actionClose = new QAction(LogWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        centralwidget = new QWidget(LogWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        text = new QTextEdit(centralwidget);
        text->setObjectName(QString::fromUtf8("text"));
        text->setLineWrapMode(QTextEdit::NoWrap);

        verticalLayout->addWidget(text);

        LogWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LogWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QString::fromUtf8("menuFormat"));
        LogWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menuFile->addAction(actionFile);
        menuFile->addSeparator();
        menuFile->addAction(actionClear);
        menuFile->addAction(actionClose);
        menuOptions->addAction(actionEnable);
        menuOptions->addAction(actionVerbose);
        menuOptions->addAction(actionWarning);
        menuOptions->addAction(actionCritical);
        menuOptions->addAction(actionFatal);
        menuOptions->addAction(actionSystem);
        menuFormat->addAction(actionTime);
        menuFormat->addAction(actionLevel);

        retranslateUi(LogWindow);

        QMetaObject::connectSlotsByName(LogWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LogWindow)
    {
        LogWindow->setWindowTitle(QApplication::translate("LogWindow", "Log", 0, QApplication::UnicodeUTF8));
        actionFile->setText(QApplication::translate("LogWindow", "Log To File...", 0, QApplication::UnicodeUTF8));
        actionClear->setText(QApplication::translate("LogWindow", "Clear", 0, QApplication::UnicodeUTF8));
        actionEnable->setText(QApplication::translate("LogWindow", "Enable", 0, QApplication::UnicodeUTF8));
        actionTime->setText(QApplication::translate("LogWindow", "Log Time", 0, QApplication::UnicodeUTF8));
        actionLevel->setText(QApplication::translate("LogWindow", "Log Level", 0, QApplication::UnicodeUTF8));
        actionVerbose->setText(QApplication::translate("LogWindow", "Verbose", 0, QApplication::UnicodeUTF8));
        actionWarning->setText(QApplication::translate("LogWindow", "Warning", 0, QApplication::UnicodeUTF8));
        actionCritical->setText(QApplication::translate("LogWindow", "Critical", 0, QApplication::UnicodeUTF8));
        actionFatal->setText(QApplication::translate("LogWindow", "Fatal", 0, QApplication::UnicodeUTF8));
        actionSystem->setText(QApplication::translate("LogWindow", "System", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("LogWindow", "Close", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("LogWindow", "File", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("LogWindow", "Options", 0, QApplication::UnicodeUTF8));
        menuFormat->setTitle(QApplication::translate("LogWindow", "Format", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LogWindow: public Ui_LogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGWINDOW_H
