/********************************************************************************
** Form generated from reading UI file 'preprocessingwindow.ui'
**
** Created: Tue Mar 20 23:29:05 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREPROCESSINGWINDOW_H
#define UI_PREPROCESSINGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreprocessingWindow
{
public:
    QAction *actionClearOutputDirectory;
    QAction *actionExit;
    QAction *actionManual;
    QAction *actionAbout;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QListWidget *pageList;
    QStackedWidget *pages;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_13;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_4;
    QWidget *page_3;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_13;
    QLineEdit *input;
    QToolButton *inputBrowse;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QLineEdit *output;
    QToolButton *outputBrowse;
    QLabel *label_7;
    QSpinBox *threads;
    QLabel *label_8;
    QLineEdit *name;
    QGroupBox *packaging;
    QFormLayout *formLayout_3;
    QLabel *label_3;
    QSpinBox *dictionarySize;
    QLabel *label_9;
    QSpinBox *blockSize;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *loadSettings;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *saveSettings;
    QWidget *page_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *daemonPreprocessButton;
    QPushButton *allPreprocessButton;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *importerComboBox;
    QPushButton *importerPreprocessButton;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_15;
    QLabel *label_18;
    QComboBox *routerComboBox;
    QComboBox *gpsLookupComboBox;
    QPushButton *routerPreprocessButton;
    QLineEdit *routingName;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_7;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QLabel *label_16;
    QComboBox *rendererComboBox;
    QPushButton *rendererPreprocessButton;
    QLineEdit *renderingName;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QComboBox *addressLookupComboBox;
    QPushButton *addressLookupPreprocessButton;
    QLineEdit *addressLookupName;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *deleteTemporaryButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *writeConfigButton;
    QLabel *configLabel;
    QLabel *importerLabel;
    QLabel *routerLabel;
    QLabel *rendererLabel;
    QLabel *addressLookupLabel;
    QLabel *deleteTemporaryLabel;
    QWidget *page_6;

    void setupUi(QMainWindow *PreprocessingWindow)
    {
        if (PreprocessingWindow->objectName().isEmpty())
            PreprocessingWindow->setObjectName(QString::fromUtf8("PreprocessingWindow"));
        PreprocessingWindow->resize(834, 612);
        actionClearOutputDirectory = new QAction(PreprocessingWindow);
        actionClearOutputDirectory->setObjectName(QString::fromUtf8("actionClearOutputDirectory"));
        actionExit = new QAction(PreprocessingWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionManual = new QAction(PreprocessingWindow);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        actionAbout = new QAction(PreprocessingWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(PreprocessingWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        pageList = new QListWidget(splitter);
        new QListWidgetItem(pageList);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(pageList);
        __qlistwidgetitem->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        new QListWidgetItem(pageList);
        new QListWidgetItem(pageList);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(pageList);
        __qlistwidgetitem1->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable);
        pageList->setObjectName(QString::fromUtf8("pageList"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(pageList->sizePolicy().hasHeightForWidth());
        pageList->setSizePolicy(sizePolicy);
        pageList->setResizeMode(QListView::Adjust);
        splitter->addWidget(pageList);
        pages = new QStackedWidget(splitter);
        pages->setObjectName(QString::fromUtf8("pages"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(pages->sizePolicy().hasHeightForWidth());
        pages->setSizePolicy(sizePolicy1);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_2 = new QVBoxLayout(page_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_13 = new QLabel(page_5);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font;
        font.setPointSize(18);
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_13);

        label_12 = new QLabel(page_5);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_11 = new QLabel(page_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/images/about.png")));
        label_11->setScaledContents(true);

        horizontalLayout_4->addWidget(label_11);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_2 = new QSpacerItem(20, 181, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pages->addWidget(page_5);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        pages->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout = new QVBoxLayout(page_3);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_22 = new QLabel(page_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_22);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        input = new QLineEdit(page_3);
        input->setObjectName(QString::fromUtf8("input"));

        horizontalLayout_13->addWidget(input);

        inputBrowse = new QToolButton(page_3);
        inputBrowse->setObjectName(QString::fromUtf8("inputBrowse"));

        horizontalLayout_13->addWidget(inputBrowse);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_13);

        label_6 = new QLabel(page_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        output = new QLineEdit(page_3);
        output->setObjectName(QString::fromUtf8("output"));

        horizontalLayout->addWidget(output);

        outputBrowse = new QToolButton(page_3);
        outputBrowse->setObjectName(QString::fromUtf8("outputBrowse"));

        horizontalLayout->addWidget(outputBrowse);


        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout);

        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_7);

        threads = new QSpinBox(page_3);
        threads->setObjectName(QString::fromUtf8("threads"));
        threads->setMinimum(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, threads);

        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        name = new QLineEdit(page_3);
        name->setObjectName(QString::fromUtf8("name"));

        formLayout->setWidget(3, QFormLayout::FieldRole, name);


        verticalLayout->addLayout(formLayout);

        packaging = new QGroupBox(page_3);
        packaging->setObjectName(QString::fromUtf8("packaging"));
        packaging->setCheckable(true);
        formLayout_3 = new QFormLayout(packaging);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_3 = new QLabel(packaging);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_3);

        dictionarySize = new QSpinBox(packaging);
        dictionarySize->setObjectName(QString::fromUtf8("dictionarySize"));
        dictionarySize->setMaximum(1073741824);
        dictionarySize->setSingleStep(1024);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, dictionarySize);

        label_9 = new QLabel(packaging);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_9);

        blockSize = new QSpinBox(packaging);
        blockSize->setObjectName(QString::fromUtf8("blockSize"));
        blockSize->setMaximum(1073741824);
        blockSize->setSingleStep(1024);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, blockSize);


        verticalLayout->addWidget(packaging);

        verticalSpacer_3 = new QSpacerItem(20, 367, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        loadSettings = new QPushButton(page_3);
        loadSettings->setObjectName(QString::fromUtf8("loadSettings"));

        horizontalLayout_14->addWidget(loadSettings);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);

        saveSettings = new QPushButton(page_3);
        saveSettings->setObjectName(QString::fromUtf8("saveSettings"));

        horizontalLayout_14->addWidget(saveSettings);


        verticalLayout->addLayout(horizontalLayout_14);

        pages->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_4 = new QGridLayout(page_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(86, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        daemonPreprocessButton = new QPushButton(page_2);
        daemonPreprocessButton->setObjectName(QString::fromUtf8("daemonPreprocessButton"));

        horizontalLayout_2->addWidget(daemonPreprocessButton);

        allPreprocessButton = new QPushButton(page_2);
        allPreprocessButton->setObjectName(QString::fromUtf8("allPreprocessButton"));

        horizontalLayout_2->addWidget(allPreprocessButton);


        gridLayout_4->addLayout(horizontalLayout_2, 9, 1, 1, 1);

        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        importerComboBox = new QComboBox(groupBox);
        importerComboBox->setObjectName(QString::fromUtf8("importerComboBox"));

        gridLayout->addWidget(importerComboBox, 1, 0, 1, 1);

        importerPreprocessButton = new QPushButton(groupBox);
        importerPreprocessButton->setObjectName(QString::fromUtf8("importerPreprocessButton"));

        gridLayout->addWidget(importerPreprocessButton, 1, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 0, 1, 1, 1);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 0, 2, 1, 1);

        routerComboBox = new QComboBox(groupBox_2);
        routerComboBox->setObjectName(QString::fromUtf8("routerComboBox"));

        gridLayout_2->addWidget(routerComboBox, 1, 1, 1, 1);

        gpsLookupComboBox = new QComboBox(groupBox_2);
        gpsLookupComboBox->setObjectName(QString::fromUtf8("gpsLookupComboBox"));

        gridLayout_2->addWidget(gpsLookupComboBox, 1, 2, 1, 1);

        routerPreprocessButton = new QPushButton(groupBox_2);
        routerPreprocessButton->setObjectName(QString::fromUtf8("routerPreprocessButton"));

        gridLayout_2->addWidget(routerPreprocessButton, 1, 4, 1, 1);

        routingName = new QLineEdit(groupBox_2);
        routingName->setObjectName(QString::fromUtf8("routingName"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(routingName->sizePolicy().hasHeightForWidth());
        routingName->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(routingName, 1, 0, 1, 1);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 1, 3, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(page_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setSpacing(2);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_5->addWidget(label_16, 0, 1, 1, 1);

        rendererComboBox = new QComboBox(groupBox_3);
        rendererComboBox->setObjectName(QString::fromUtf8("rendererComboBox"));

        gridLayout_5->addWidget(rendererComboBox, 1, 1, 1, 1);

        rendererPreprocessButton = new QPushButton(groupBox_3);
        rendererPreprocessButton->setObjectName(QString::fromUtf8("rendererPreprocessButton"));

        gridLayout_5->addWidget(rendererPreprocessButton, 1, 3, 1, 1);

        renderingName = new QLineEdit(groupBox_3);
        renderingName->setObjectName(QString::fromUtf8("renderingName"));
        sizePolicy3.setHeightForWidth(renderingName->sizePolicy().hasHeightForWidth());
        renderingName->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(renderingName, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_5->addWidget(label_4, 0, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_9, 1, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 2, 1, 1, 1);

        groupBox_4 = new QGroupBox(page_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(2);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_19 = new QLabel(groupBox_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 0, 1, 1, 1);

        addressLookupComboBox = new QComboBox(groupBox_4);
        addressLookupComboBox->setObjectName(QString::fromUtf8("addressLookupComboBox"));

        gridLayout_3->addWidget(addressLookupComboBox, 1, 1, 1, 1);

        addressLookupPreprocessButton = new QPushButton(groupBox_4);
        addressLookupPreprocessButton->setObjectName(QString::fromUtf8("addressLookupPreprocessButton"));

        gridLayout_3->addWidget(addressLookupPreprocessButton, 1, 3, 1, 1);

        addressLookupName = new QLineEdit(groupBox_4);
        addressLookupName->setObjectName(QString::fromUtf8("addressLookupName"));
        sizePolicy3.setHeightForWidth(addressLookupName->sizePolicy().hasHeightForWidth());
        addressLookupName->setSizePolicy(sizePolicy3);

        gridLayout_3->addWidget(addressLookupName, 1, 0, 1, 1);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_10, 1, 2, 1, 1);


        gridLayout_4->addWidget(groupBox_4, 3, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        deleteTemporaryButton = new QPushButton(page_2);
        deleteTemporaryButton->setObjectName(QString::fromUtf8("deleteTemporaryButton"));

        horizontalLayout_5->addWidget(deleteTemporaryButton);


        gridLayout_4->addLayout(horizontalLayout_5, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 7, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        writeConfigButton = new QPushButton(page_2);
        writeConfigButton->setObjectName(QString::fromUtf8("writeConfigButton"));

        horizontalLayout_6->addWidget(writeConfigButton);


        gridLayout_4->addLayout(horizontalLayout_6, 4, 1, 1, 1);

        configLabel = new QLabel(page_2);
        configLabel->setObjectName(QString::fromUtf8("configLabel"));
        configLabel->setMinimumSize(QSize(32, 32));
        configLabel->setMaximumSize(QSize(32, 32));
        configLabel->setScaledContents(true);

        gridLayout_4->addWidget(configLabel, 4, 0, 1, 1);

        importerLabel = new QLabel(page_2);
        importerLabel->setObjectName(QString::fromUtf8("importerLabel"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(importerLabel->sizePolicy().hasHeightForWidth());
        importerLabel->setSizePolicy(sizePolicy4);
        importerLabel->setMinimumSize(QSize(32, 32));
        importerLabel->setMaximumSize(QSize(32, 32));
        importerLabel->setScaledContents(true);

        gridLayout_4->addWidget(importerLabel, 0, 0, 1, 1);

        routerLabel = new QLabel(page_2);
        routerLabel->setObjectName(QString::fromUtf8("routerLabel"));
        sizePolicy4.setHeightForWidth(routerLabel->sizePolicy().hasHeightForWidth());
        routerLabel->setSizePolicy(sizePolicy4);
        routerLabel->setMinimumSize(QSize(32, 32));
        routerLabel->setMaximumSize(QSize(32, 32));
        routerLabel->setScaledContents(true);

        gridLayout_4->addWidget(routerLabel, 1, 0, 1, 1);

        rendererLabel = new QLabel(page_2);
        rendererLabel->setObjectName(QString::fromUtf8("rendererLabel"));
        sizePolicy4.setHeightForWidth(rendererLabel->sizePolicy().hasHeightForWidth());
        rendererLabel->setSizePolicy(sizePolicy4);
        rendererLabel->setMinimumSize(QSize(32, 32));
        rendererLabel->setMaximumSize(QSize(32, 32));
        rendererLabel->setScaledContents(true);

        gridLayout_4->addWidget(rendererLabel, 2, 0, 1, 1);

        addressLookupLabel = new QLabel(page_2);
        addressLookupLabel->setObjectName(QString::fromUtf8("addressLookupLabel"));
        sizePolicy4.setHeightForWidth(addressLookupLabel->sizePolicy().hasHeightForWidth());
        addressLookupLabel->setSizePolicy(sizePolicy4);
        addressLookupLabel->setMinimumSize(QSize(32, 32));
        addressLookupLabel->setMaximumSize(QSize(32, 32));
        addressLookupLabel->setScaledContents(true);

        gridLayout_4->addWidget(addressLookupLabel, 3, 0, 1, 1);

        deleteTemporaryLabel = new QLabel(page_2);
        deleteTemporaryLabel->setObjectName(QString::fromUtf8("deleteTemporaryLabel"));
        deleteTemporaryLabel->setMinimumSize(QSize(32, 32));
        deleteTemporaryLabel->setMaximumSize(QSize(32, 32));
        deleteTemporaryLabel->setScaledContents(true);

        gridLayout_4->addWidget(deleteTemporaryLabel, 5, 0, 1, 1);

        pages->addWidget(page_2);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        pages->addWidget(page_6);
        splitter->addWidget(pages);

        verticalLayout_3->addWidget(splitter);

        PreprocessingWindow->setCentralWidget(centralWidget);

        retranslateUi(PreprocessingWindow);
        QObject::connect(pageList, SIGNAL(currentRowChanged(int)), pages, SLOT(setCurrentIndex(int)));

        pageList->setCurrentRow(-1);
        pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreprocessingWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PreprocessingWindow)
    {
        PreprocessingWindow->setWindowTitle(QApplication::translate("PreprocessingWindow", "MoNav Preprocessor", 0, QApplication::UnicodeUTF8));
        actionClearOutputDirectory->setText(QApplication::translate("PreprocessingWindow", "Clear Output Directory", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("PreprocessingWindow", "Exit", 0, QApplication::UnicodeUTF8));
        actionManual->setText(QApplication::translate("PreprocessingWindow", "&Manual", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("PreprocessingWindow", "About", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = pageList->isSortingEnabled();
        pageList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = pageList->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("PreprocessingWindow", "About", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = pageList->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("PreprocessingWindow", "---", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = pageList->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("PreprocessingWindow", "General Options", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = pageList->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("PreprocessingWindow", "Preprocessing", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = pageList->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("PreprocessingWindow", "---", 0, QApplication::UnicodeUTF8));
        pageList->setSortingEnabled(__sortingEnabled);

        label_13->setText(QApplication::translate("PreprocessingWindow", "MoNav Preprocessor 0.2", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("PreprocessingWindow", "\302\251 2009-2010 The MoNav authors", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_22->setText(QApplication::translate("PreprocessingWindow", "Input File:", 0, QApplication::UnicodeUTF8));
        inputBrowse->setText(QApplication::translate("PreprocessingWindow", "...", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("PreprocessingWindow", "Output Directory:", 0, QApplication::UnicodeUTF8));
        outputBrowse->setText(QApplication::translate("PreprocessingWindow", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("PreprocessingWindow", "Threads:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("PreprocessingWindow", "Name:", 0, QApplication::UnicodeUTF8));
        packaging->setTitle(QApplication::translate("PreprocessingWindow", "Packaging", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("PreprocessingWindow", "LZMA Dictionary Size:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("PreprocessingWindow", "Block Size", 0, QApplication::UnicodeUTF8));
        loadSettings->setText(QApplication::translate("PreprocessingWindow", "Load Settings...", 0, QApplication::UnicodeUTF8));
        saveSettings->setText(QApplication::translate("PreprocessingWindow", "Save Settings...", 0, QApplication::UnicodeUTF8));
        daemonPreprocessButton->setText(QApplication::translate("PreprocessingWindow", "Build Daemon Data", 0, QApplication::UnicodeUTF8));
        allPreprocessButton->setText(QApplication::translate("PreprocessingWindow", "Build All", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PreprocessingWindow", "Importing", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PreprocessingWindow", "Importer:", 0, QApplication::UnicodeUTF8));
        importerPreprocessButton->setText(QApplication::translate("PreprocessingWindow", "Preprocess", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("PreprocessingWindow", "Routing Module", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("PreprocessingWindow", "Router:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("PreprocessingWindow", "GPS Lookup:", 0, QApplication::UnicodeUTF8));
        routerPreprocessButton->setText(QApplication::translate("PreprocessingWindow", "Preprocess", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("PreprocessingWindow", "Name:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("PreprocessingWindow", "Rendering Module", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("PreprocessingWindow", "Renderer:", 0, QApplication::UnicodeUTF8));
        rendererPreprocessButton->setText(QApplication::translate("PreprocessingWindow", "Preprocess", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("PreprocessingWindow", "Name:", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("PreprocessingWindow", "Address Lookup Module", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("PreprocessingWindow", "Address Lookup:", 0, QApplication::UnicodeUTF8));
        addressLookupPreprocessButton->setText(QApplication::translate("PreprocessingWindow", "Preprocess", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PreprocessingWindow", "Name:", 0, QApplication::UnicodeUTF8));
        deleteTemporaryButton->setText(QApplication::translate("PreprocessingWindow", "Delete Temporary Files", 0, QApplication::UnicodeUTF8));
        writeConfigButton->setText(QApplication::translate("PreprocessingWindow", "Write Main Map Config", 0, QApplication::UnicodeUTF8));
        configLabel->setText(QString());
        importerLabel->setText(QString());
        routerLabel->setText(QString());
        rendererLabel->setText(QString());
        addressLookupLabel->setText(QString());
        deleteTemporaryLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PreprocessingWindow: public Ui_PreprocessingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREPROCESSINGWINDOW_H
