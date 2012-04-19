/********************************************************************************
** Form generated from reading UI file 'nodemodificatorwidget.ui'
**
** Created: Tue Mar 20 23:25:31 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NODEMODIFICATORWIDGET_H
#define UI_NODEMODIFICATORWIDGET_H

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

class Ui_NodeModificatorWidget
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
    QLabel *label_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *fixed;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *access;
    QToolButton *delete_2;

    void setupUi(QFrame *NodeModificatorWidget)
    {
        if (NodeModificatorWidget->objectName().isEmpty())
            NodeModificatorWidget->setObjectName(QString::fromUtf8("NodeModificatorWidget"));
        NodeModificatorWidget->resize(764, 46);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NodeModificatorWidget->sizePolicy().hasHeightForWidth());
        NodeModificatorWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(NodeModificatorWidget);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(NodeModificatorWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 2, 1, 1);

        type = new QComboBox(NodeModificatorWidget);
        type->setObjectName(QString::fromUtf8("type"));

        gridLayout->addWidget(type, 1, 1, 1, 1);

        key = new QLineEdit(NodeModificatorWidget);
        key->setObjectName(QString::fromUtf8("key"));

        gridLayout->addWidget(key, 1, 2, 1, 1);

        value = new QLineEdit(NodeModificatorWidget);
        value->setObjectName(QString::fromUtf8("value"));
        value->setEnabled(false);

        gridLayout->addWidget(value, 1, 4, 1, 1);

        action = new QComboBox(NodeModificatorWidget);
        action->setObjectName(QString::fromUtf8("action"));

        gridLayout->addWidget(action, 1, 5, 1, 1);

        useValue = new QCheckBox(NodeModificatorWidget);
        useValue->setObjectName(QString::fromUtf8("useValue"));

        gridLayout->addWidget(useValue, 1, 3, 1, 1);

        label_2 = new QLabel(NodeModificatorWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 2);

        label_3 = new QLabel(NodeModificatorWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        stackedWidget = new QStackedWidget(NodeModificatorWidget);
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

        gridLayout->addWidget(stackedWidget, 1, 6, 1, 1);

        delete_2 = new QToolButton(NodeModificatorWidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setAutoRaise(true);

        gridLayout->addWidget(delete_2, 1, 0, 1, 1);


        retranslateUi(NodeModificatorWidget);
        QObject::connect(useValue, SIGNAL(toggled(bool)), value, SLOT(setEnabled(bool)));
        QObject::connect(action, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(delete_2, SIGNAL(clicked()), NodeModificatorWidget, SLOT(deleteLater()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NodeModificatorWidget);
    } // setupUi

    void retranslateUi(QFrame *NodeModificatorWidget)
    {
        NodeModificatorWidget->setWindowTitle(QApplication::translate("NodeModificatorWidget", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("NodeModificatorWidget", "Key", 0, QApplication::UnicodeUTF8));
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("NodeModificatorWidget", "Tag Present", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NodeModificatorWidget", "Tag Not Present", 0, QApplication::UnicodeUTF8)
        );
        key->setText(QApplication::translate("NodeModificatorWidget", "Key", 0, QApplication::UnicodeUTF8));
        value->setText(QApplication::translate("NodeModificatorWidget", "Value", 0, QApplication::UnicodeUTF8));
        action->clear();
        action->insertItems(0, QStringList()
         << QApplication::translate("NodeModificatorWidget", "Travel Time (Fixed)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("NodeModificatorWidget", "Access", 0, QApplication::UnicodeUTF8)
        );
        useValue->setText(QString());
        label_2->setText(QApplication::translate("NodeModificatorWidget", "Value", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("NodeModificatorWidget", "Modify", 0, QApplication::UnicodeUTF8));
        fixed->setSuffix(QApplication::translate("NodeModificatorWidget", " seconds", 0, QApplication::UnicodeUTF8));
        fixed->setPrefix(QApplication::translate("NodeModificatorWidget", "+ ", 0, QApplication::UnicodeUTF8));
        access->setText(QApplication::translate("NodeModificatorWidget", "access", 0, QApplication::UnicodeUTF8));
        delete_2->setText(QApplication::translate("NodeModificatorWidget", "x", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NodeModificatorWidget: public Ui_NodeModificatorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NODEMODIFICATORWIDGET_H
