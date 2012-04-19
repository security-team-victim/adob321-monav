/********************************************************************************
** Form generated from reading UI file 'waymodificatorwidget.ui'
**
** Created: Tue Mar 20 23:25:31 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAYMODIFICATORWIDGET_H
#define UI_WAYMODIFICATORWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WayModificatorWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *type;
    QLineEdit *key;
    QLineEdit *value;
    QComboBox *action;
    QCheckBox *useValue;
    QLabel *label_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *fixed;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_3;
    QSpinBox *percentage;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *access;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *oneway;
    QLabel *label_3;
    QToolButton *delete_2;

    void setupUi(QFrame *WayModificatorWidget)
    {
        if (WayModificatorWidget->objectName().isEmpty())
            WayModificatorWidget->setObjectName(QString::fromUtf8("WayModificatorWidget"));
        WayModificatorWidget->resize(764, 46);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WayModificatorWidget->sizePolicy().hasHeightForWidth());
        WayModificatorWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(WayModificatorWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(WayModificatorWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        type = new QComboBox(WayModificatorWidget);
        type->setObjectName(QString::fromUtf8("type"));

        gridLayout->addWidget(type, 1, 1, 1, 1);

        key = new QLineEdit(WayModificatorWidget);
        key->setObjectName(QString::fromUtf8("key"));

        gridLayout->addWidget(key, 1, 2, 1, 1);

        value = new QLineEdit(WayModificatorWidget);
        value->setObjectName(QString::fromUtf8("value"));
        value->setEnabled(false);

        gridLayout->addWidget(value, 1, 4, 1, 1);

        action = new QComboBox(WayModificatorWidget);
        action->setObjectName(QString::fromUtf8("action"));

        gridLayout->addWidget(action, 1, 5, 1, 1);

        useValue = new QCheckBox(WayModificatorWidget);
        useValue->setObjectName(QString::fromUtf8("useValue"));

        gridLayout->addWidget(useValue, 1, 3, 1, 1);

        label_2 = new QLabel(WayModificatorWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 2);

        stackedWidget = new QStackedWidget(WayModificatorWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        sizePolicy.setHeightForWidth(page->sizePolicy().hasHeightForWidth());
        page->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        fixed = new QSpinBox(page);
        fixed->setObjectName(QString::fromUtf8("fixed"));
        fixed->setMaximum(60);

        verticalLayout_2->addWidget(fixed);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        sizePolicy.setHeightForWidth(page_3->sizePolicy().hasHeightForWidth());
        page_3->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(page_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        percentage = new QSpinBox(page_3);
        percentage->setObjectName(QString::fromUtf8("percentage"));
        percentage->setMinimum(-99);
        percentage->setMaximum(1000);

        verticalLayout_3->addWidget(percentage);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        sizePolicy.setHeightForWidth(page_2->sizePolicy().hasHeightForWidth());
        page_2->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        access = new QCheckBox(page_2);
        access->setObjectName(QString::fromUtf8("access"));

        verticalLayout_5->addWidget(access);

        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        sizePolicy.setHeightForWidth(page_4->sizePolicy().hasHeightForWidth());
        page_4->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(page_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        oneway = new QCheckBox(page_4);
        oneway->setObjectName(QString::fromUtf8("oneway"));

        verticalLayout_4->addWidget(oneway);

        stackedWidget->addWidget(page_4);

        gridLayout->addWidget(stackedWidget, 1, 6, 1, 1);

        label_3 = new QLabel(WayModificatorWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        delete_2 = new QToolButton(WayModificatorWidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setAutoRaise(true);

        gridLayout->addWidget(delete_2, 1, 0, 1, 1);


        retranslateUi(WayModificatorWidget);
        QObject::connect(delete_2, SIGNAL(clicked()), WayModificatorWidget, SLOT(deleteLater()));
        QObject::connect(useValue, SIGNAL(toggled(bool)), value, SLOT(setEnabled(bool)));
        QObject::connect(action, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WayModificatorWidget);
    } // setupUi

    void retranslateUi(QFrame *WayModificatorWidget)
    {
        WayModificatorWidget->setWindowTitle(QApplication::translate("WayModificatorWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("WayModificatorWidget", "Key", 0, QApplication::UnicodeUTF8));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("WayModificatorWidget", "Tag Present", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WayModificatorWidget", "Tag Not Present", 0, QApplication::UnicodeUTF8)
        );
        key->setText(QApplication::translate("WayModificatorWidget", "Key", 0, QApplication::UnicodeUTF8));
        value->setText(QApplication::translate("WayModificatorWidget", "Value", 0, QApplication::UnicodeUTF8));
        action->clear();
        action->insertItems(0, QStringList()
         << QApplication::translate("WayModificatorWidget", "Travel Time (Fixed)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WayModificatorWidget", "Travel Time (Percentage)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WayModificatorWidget", "Access", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WayModificatorWidget", "Oneway", 0, QApplication::UnicodeUTF8)
        );
        useValue->setText(QString());
        label_2->setText(QApplication::translate("WayModificatorWidget", "Value", 0, QApplication::UnicodeUTF8));
        fixed->setSuffix(QApplication::translate("WayModificatorWidget", " seconds", 0, QApplication::UnicodeUTF8));
        fixed->setPrefix(QApplication::translate("WayModificatorWidget", "+ ", 0, QApplication::UnicodeUTF8));
        percentage->setSuffix(QApplication::translate("WayModificatorWidget", " %", 0, QApplication::UnicodeUTF8));
        percentage->setPrefix(QApplication::translate("WayModificatorWidget", "+ ", 0, QApplication::UnicodeUTF8));
        access->setText(QApplication::translate("WayModificatorWidget", "access", 0, QApplication::UnicodeUTF8));
        oneway->setText(QApplication::translate("WayModificatorWidget", "oneway", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WayModificatorWidget", "Modify", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("WayModificatorWidget", "x", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WayModificatorWidget: public Ui_WayModificatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAYMODIFICATORWIDGET_H
