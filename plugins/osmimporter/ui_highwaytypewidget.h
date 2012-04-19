/********************************************************************************
** Form generated from reading UI file 'highwaytypewidget.ui'
**
** Created: Tue Mar 20 23:25:31 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIGHWAYTYPEWIDGET_H
#define UI_HIGHWAYTYPEWIDGET_H

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
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HighwayTypeWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label_8;
    QFrame *line_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_3;
    QLabel *label_7;
    QFrame *line;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *line_4;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *type;
    QSpinBox *maxSpeed;
    QSpinBox *citySpeed;
    QSpinBox *averageSpeed;
    QLabel *label_5;
    QComboBox *otherCarsLeft;
    QComboBox *otherCarsStraight;
    QComboBox *otherCarsRight;
    QSpinBox *leftPenalty;
    QSpinBox *rightPenalty;
    QToolButton *close;
    QCheckBox *pedestrian;
    QSpinBox *priority;

    void setupUi(QWidget *HighwayTypeWidget)
    {
        if (HighwayTypeWidget->objectName().isEmpty())
            HighwayTypeWidget->setObjectName(QString::fromUtf8("HighwayTypeWidget"));
        HighwayTypeWidget->resize(1629, 56);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HighwayTypeWidget->sizePolicy().hasHeightForWidth());
        HighwayTypeWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(HighwayTypeWidget);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(HighwayTypeWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 0, 1, 1, 1);

        line_2 = new QFrame(HighwayTypeWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 2, 4, 1);

        label = new QLabel(HighwayTypeWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 3, 1, 1);

        label_2 = new QLabel(HighwayTypeWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 4, 1, 1);

        label_3 = new QLabel(HighwayTypeWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 5, 1, 1);

        label_4 = new QLabel(HighwayTypeWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 6, 1, 1);

        line_3 = new QFrame(HighwayTypeWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 0, 7, 4, 1);

        label_7 = new QLabel(HighwayTypeWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 9, 1, 1);

        line = new QFrame(HighwayTypeWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 10, 4, 1);

        label_6 = new QLabel(HighwayTypeWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 12, 1, 1);

        label_9 = new QLabel(HighwayTypeWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 13, 1, 1);

        label_10 = new QLabel(HighwayTypeWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 14, 1, 1);

        line_4 = new QFrame(HighwayTypeWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 0, 15, 4, 1);

        label_11 = new QLabel(HighwayTypeWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 0, 16, 1, 1);

        label_12 = new QLabel(HighwayTypeWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 17, 1, 1);

        type = new QLineEdit(HighwayTypeWidget);
        type->setObjectName(QString::fromUtf8("type"));

        gridLayout->addWidget(type, 1, 3, 3, 1);

        maxSpeed = new QSpinBox(HighwayTypeWidget);
        maxSpeed->setObjectName(QString::fromUtf8("maxSpeed"));
        maxSpeed->setMinimum(1);
        maxSpeed->setMaximum(1000);
        maxSpeed->setValue(100);

        gridLayout->addWidget(maxSpeed, 1, 4, 3, 1);

        citySpeed = new QSpinBox(HighwayTypeWidget);
        citySpeed->setObjectName(QString::fromUtf8("citySpeed"));
        citySpeed->setMinimum(1);
        citySpeed->setMaximum(1000);
        citySpeed->setValue(100);

        gridLayout->addWidget(citySpeed, 1, 5, 3, 1);

        averageSpeed = new QSpinBox(HighwayTypeWidget);
        averageSpeed->setObjectName(QString::fromUtf8("averageSpeed"));
        averageSpeed->setMaximum(100);
        averageSpeed->setValue(80);

        gridLayout->addWidget(averageSpeed, 1, 6, 3, 1);

        label_5 = new QLabel(HighwayTypeWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 11, 2, 1);

        otherCarsLeft = new QComboBox(HighwayTypeWidget);
        otherCarsLeft->setObjectName(QString::fromUtf8("otherCarsLeft"));

        gridLayout->addWidget(otherCarsLeft, 1, 12, 3, 1);

        otherCarsStraight = new QComboBox(HighwayTypeWidget);
        otherCarsStraight->setObjectName(QString::fromUtf8("otherCarsStraight"));

        gridLayout->addWidget(otherCarsStraight, 1, 13, 3, 1);

        otherCarsRight = new QComboBox(HighwayTypeWidget);
        otherCarsRight->setObjectName(QString::fromUtf8("otherCarsRight"));

        gridLayout->addWidget(otherCarsRight, 1, 14, 3, 1);

        leftPenalty = new QSpinBox(HighwayTypeWidget);
        leftPenalty->setObjectName(QString::fromUtf8("leftPenalty"));

        gridLayout->addWidget(leftPenalty, 1, 16, 3, 1);

        rightPenalty = new QSpinBox(HighwayTypeWidget);
        rightPenalty->setObjectName(QString::fromUtf8("rightPenalty"));

        gridLayout->addWidget(rightPenalty, 1, 17, 3, 1);

        close = new QToolButton(HighwayTypeWidget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setAutoRaise(true);

        gridLayout->addWidget(close, 2, 0, 1, 1);

        pedestrian = new QCheckBox(HighwayTypeWidget);
        pedestrian->setObjectName(QString::fromUtf8("pedestrian"));
        pedestrian->setChecked(true);

        gridLayout->addWidget(pedestrian, 2, 9, 1, 1);

        priority = new QSpinBox(HighwayTypeWidget);
        priority->setObjectName(QString::fromUtf8("priority"));
        priority->setMaximum(10000);

        gridLayout->addWidget(priority, 2, 1, 1, 1);


        retranslateUi(HighwayTypeWidget);
        QObject::connect(close, SIGNAL(clicked()), HighwayTypeWidget, SLOT(deleteLater()));

        QMetaObject::connectSlotsByName(HighwayTypeWidget);
    } // setupUi

    void retranslateUi(QWidget *HighwayTypeWidget)
    {
        HighwayTypeWidget->setWindowTitle(QApplication::translate("HighwayTypeWidget", "Form", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("HighwayTypeWidget", "Priority", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("HighwayTypeWidget", "Highway Tag Value", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("HighwayTypeWidget", "Maximum Speed", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("HighwayTypeWidget", "Default City Speed", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("HighwayTypeWidget", "Average Speed", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("HighwayTypeWidget", "Turning Into", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("HighwayTypeWidget", "Left Turn", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("HighwayTypeWidget", "Straight", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("HighwayTypeWidget", "Right Turn", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("HighwayTypeWidget", "Left Turn Penalty", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("HighwayTypeWidget", "Right Turn Penalty", 0, QApplication::UnicodeUTF8));
        type->setText(QApplication::translate("HighwayTypeWidget", "motorway", 0, QApplication::UnicodeUTF8));
        maxSpeed->setSuffix(QApplication::translate("HighwayTypeWidget", " km/h", 0, QApplication::UnicodeUTF8));
        citySpeed->setSuffix(QApplication::translate("HighwayTypeWidget", " km/h", 0, QApplication::UnicodeUTF8));
        averageSpeed->setSuffix(QApplication::translate("HighwayTypeWidget", " %", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("HighwayTypeWidget", "Look out for Highways with", 0, QApplication::UnicodeUTF8));
        otherCarsLeft->clear();
        otherCarsLeft->insertItems(0, QStringList()
         << QApplication::translate("HighwayTypeWidget", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HighwayTypeWidget", "Higher Priority", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HighwayTypeWidget", "Equal or Higher Priority", 0, QApplication::UnicodeUTF8)
        );
        otherCarsStraight->clear();
        otherCarsStraight->insertItems(0, QStringList()
         << QApplication::translate("HighwayTypeWidget", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HighwayTypeWidget", "Higher Priority", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HighwayTypeWidget", "Equal or Higher Priority", 0, QApplication::UnicodeUTF8)
        );
        otherCarsRight->clear();
        otherCarsRight->insertItems(0, QStringList()
         << QApplication::translate("HighwayTypeWidget", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HighwayTypeWidget", "Higher Priority", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HighwayTypeWidget", "Equal or Higher Priority", 0, QApplication::UnicodeUTF8)
        );
        leftPenalty->setSuffix(QApplication::translate("HighwayTypeWidget", " s", 0, QApplication::UnicodeUTF8));
        rightPenalty->setSuffix(QApplication::translate("HighwayTypeWidget", " s", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("HighwayTypeWidget", "x", 0, QApplication::UnicodeUTF8));
        pedestrian->setText(QApplication::translate("HighwayTypeWidget", "Pedestrian Penalty", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HighwayTypeWidget: public Ui_HighwayTypeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIGHWAYTYPEWIDGET_H
