/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    QGroupBox *groupBox;
    QRadioButton *queenRadio;
    QRadioButton *kingRadio;
    QSpinBox *nightsSpinBox;
    QGroupBox *groupBox_2;
    QRadioButton *standardRadio;
    QRadioButton *atriumRadio;
    QLineEdit *customerName;
    QDateEdit *dateEdit;
    QLabel *label_6;
    QSpinBox *childrenBox;
    QSpinBox *adultBox;
    QLabel *label_7;
    QLabel *label_8;
    QCheckBox *parkingCheckBox;
    QLabel *label_10;
    QLabel *priceLabel;
    QLabel *label_4;
    QPushButton *nextPushButton;
    QLabel *label_12;
    QWidget *page_3;
    QPushButton *backPushButton;
    QLabel *label;
    QLineEdit *creditCardLineEdit;
    QLabel *label_5;
    QLabel *roomCostLabel;
    QLabel *label_11;
    QLabel *parkingLabel;
    QLabel *label_13;
    QLabel *taxLabel;
    QLabel *label_15;
    QLabel *resortLabel;
    QLabel *label_17;
    QLabel *totalCostLabel;
    QGroupBox *groupBox_3;
    QRadioButton *visaRadio;
    QRadioButton *masterCardRadio;
    QRadioButton *discoverRadio;
    QRadioButton *americaexpressRadio;
    QPushButton *payPushButton;
    QLineEdit *experationDateLineEdit;
    QWidget *page_2;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *firstDayLabel;
    QLabel *numberOfNightsLabel;
    QLabel *roomTypeLabel;
    QLabel *parkingLabel_2;
    QLabel *guestsLabel;
    QLabel *totalCostLabel_2;
    QLabel *creditCardDigitsLabel;
    QPushButton *pushButton;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(721, 417);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 30, 631, 421));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(14);
        stackedWidget->setFont(font);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 10, 141, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(17);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 100, 161, 131));
        groupBox->setFont(font);
        queenRadio = new QRadioButton(groupBox);
        queenRadio->setObjectName(QString::fromUtf8("queenRadio"));
        queenRadio->setGeometry(QRect(10, 30, 171, 20));
        queenRadio->setFont(font);
        queenRadio->setChecked(true);
        kingRadio = new QRadioButton(groupBox);
        kingRadio->setObjectName(QString::fromUtf8("kingRadio"));
        kingRadio->setGeometry(QRect(10, 50, 161, 20));
        kingRadio->setFont(font);
        nightsSpinBox = new QSpinBox(page);
        nightsSpinBox->setObjectName(QString::fromUtf8("nightsSpinBox"));
        nightsSpinBox->setGeometry(QRect(170, 270, 42, 22));
        nightsSpinBox->setFont(font);
        nightsSpinBox->setMinimum(1);
        nightsSpinBox->setMaximum(7);
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(210, 100, 161, 131));
        groupBox_2->setFont(font);
        standardRadio = new QRadioButton(groupBox_2);
        standardRadio->setObjectName(QString::fromUtf8("standardRadio"));
        standardRadio->setGeometry(QRect(10, 30, 141, 20));
        standardRadio->setFont(font);
        standardRadio->setChecked(true);
        atriumRadio = new QRadioButton(groupBox_2);
        atriumRadio->setObjectName(QString::fromUtf8("atriumRadio"));
        atriumRadio->setGeometry(QRect(10, 50, 141, 21));
        atriumRadio->setFont(font);
        customerName = new QLineEdit(page);
        customerName->setObjectName(QString::fromUtf8("customerName"));
        customerName->setGeometry(QRect(90, 60, 151, 31));
        dateEdit = new QDateEdit(page);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(0, 270, 110, 22));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 240, 131, 16));
        childrenBox = new QSpinBox(page);
        childrenBox->setObjectName(QString::fromUtf8("childrenBox"));
        childrenBox->setGeometry(QRect(520, 130, 42, 22));
        childrenBox->setMaximum(3);
        adultBox = new QSpinBox(page);
        adultBox->setObjectName(QString::fromUtf8("adultBox"));
        adultBox->setGeometry(QRect(440, 130, 42, 22));
        adultBox->setMinimum(1);
        adultBox->setMaximum(4);
        label_7 = new QLabel(page);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(400, 100, 81, 16));
        label_8 = new QLabel(page);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(510, 100, 59, 16));
        parkingCheckBox = new QCheckBox(page);
        parkingCheckBox->setObjectName(QString::fromUtf8("parkingCheckBox"));
        parkingCheckBox->setGeometry(QRect(440, 190, 141, 20));
        label_10 = new QLabel(page);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(270, 270, 101, 21));
        priceLabel = new QLabel(page);
        priceLabel->setObjectName(QString::fromUtf8("priceLabel"));
        priceLabel->setGeometry(QRect(380, 270, 71, 31));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(160, 240, 161, 21));
        label_4->setFont(font);
        nextPushButton = new QPushButton(page);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));
        nextPushButton->setGeometry(QRect(500, 260, 113, 32));
        nextPushButton->setFont(font);
        label_12 = new QLabel(page);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 60, 59, 16));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        backPushButton = new QPushButton(page_3);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));
        backPushButton->setGeometry(QRect(510, 260, 113, 32));
        label = new QLabel(page_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, -10, 121, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        creditCardLineEdit = new QLineEdit(page_3);
        creditCardLineEdit->setObjectName(QString::fromUtf8("creditCardLineEdit"));
        creditCardLineEdit->setGeometry(QRect(430, 120, 171, 31));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 80, 61, 31));
        roomCostLabel = new QLabel(page_3);
        roomCostLabel->setObjectName(QString::fromUtf8("roomCostLabel"));
        roomCostLabel->setGeometry(QRect(90, 80, 59, 16));
        label_11 = new QLabel(page_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 150, 59, 16));
        parkingLabel = new QLabel(page_3);
        parkingLabel->setObjectName(QString::fromUtf8("parkingLabel"));
        parkingLabel->setGeometry(QRect(110, 150, 59, 16));
        label_13 = new QLabel(page_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 120, 59, 16));
        taxLabel = new QLabel(page_3);
        taxLabel->setObjectName(QString::fromUtf8("taxLabel"));
        taxLabel->setGeometry(QRect(90, 110, 59, 16));
        label_15 = new QLabel(page_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 180, 59, 16));
        resortLabel = new QLabel(page_3);
        resortLabel->setObjectName(QString::fromUtf8("resortLabel"));
        resortLabel->setGeometry(QRect(110, 180, 59, 16));
        label_17 = new QLabel(page_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 210, 59, 16));
        totalCostLabel = new QLabel(page_3);
        totalCostLabel->setObjectName(QString::fromUtf8("totalCostLabel"));
        totalCostLabel->setGeometry(QRect(90, 210, 59, 16));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(240, 70, 151, 121));
        visaRadio = new QRadioButton(groupBox_3);
        visaRadio->setObjectName(QString::fromUtf8("visaRadio"));
        visaRadio->setGeometry(QRect(10, 30, 100, 20));
        visaRadio->setChecked(true);
        masterCardRadio = new QRadioButton(groupBox_3);
        masterCardRadio->setObjectName(QString::fromUtf8("masterCardRadio"));
        masterCardRadio->setGeometry(QRect(10, 50, 100, 20));
        discoverRadio = new QRadioButton(groupBox_3);
        discoverRadio->setObjectName(QString::fromUtf8("discoverRadio"));
        discoverRadio->setGeometry(QRect(10, 70, 100, 20));
        americaexpressRadio = new QRadioButton(groupBox_3);
        americaexpressRadio->setObjectName(QString::fromUtf8("americaexpressRadio"));
        americaexpressRadio->setGeometry(QRect(10, 90, 141, 20));
        payPushButton = new QPushButton(page_3);
        payPushButton->setObjectName(QString::fromUtf8("payPushButton"));
        payPushButton->setGeometry(QRect(510, 230, 113, 32));
        experationDateLineEdit = new QLineEdit(page_3);
        experationDateLineEdit->setObjectName(QString::fromUtf8("experationDateLineEdit"));
        experationDateLineEdit->setGeometry(QRect(430, 170, 141, 31));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 20, 201, 21));
        label_3->setFont(font2);
        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 40, 141, 16));
        firstDayLabel = new QLabel(page_2);
        firstDayLabel->setObjectName(QString::fromUtf8("firstDayLabel"));
        firstDayLabel->setGeometry(QRect(200, 90, 131, 31));
        numberOfNightsLabel = new QLabel(page_2);
        numberOfNightsLabel->setObjectName(QString::fromUtf8("numberOfNightsLabel"));
        numberOfNightsLabel->setGeometry(QRect(200, 130, 91, 41));
        roomTypeLabel = new QLabel(page_2);
        roomTypeLabel->setObjectName(QString::fromUtf8("roomTypeLabel"));
        roomTypeLabel->setGeometry(QRect(200, 180, 151, 41));
        parkingLabel_2 = new QLabel(page_2);
        parkingLabel_2->setObjectName(QString::fromUtf8("parkingLabel_2"));
        parkingLabel_2->setGeometry(QRect(200, 250, 59, 16));
        guestsLabel = new QLabel(page_2);
        guestsLabel->setObjectName(QString::fromUtf8("guestsLabel"));
        guestsLabel->setGeometry(QRect(200, 290, 171, 61));
        totalCostLabel_2 = new QLabel(page_2);
        totalCostLabel_2->setObjectName(QString::fromUtf8("totalCostLabel_2"));
        totalCostLabel_2->setGeometry(QRect(530, 90, 59, 16));
        creditCardDigitsLabel = new QLabel(page_2);
        creditCardDigitsLabel->setObjectName(QString::fromUtf8("creditCardDigitsLabel"));
        creditCardDigitsLabel->setGeometry(QRect(530, 140, 101, 51));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(520, 270, 113, 32));
        label_22 = new QLabel(page_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(60, 90, 121, 16));
        label_23 = new QLabel(page_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(80, 130, 59, 16));
        label_24 = new QLabel(page_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(80, 180, 101, 16));
        label_25 = new QLabel(page_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(90, 230, 59, 16));
        label_26 = new QLabel(page_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(60, 300, 91, 16));
        label_27 = new QLabel(page_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(430, 90, 59, 16));
        label_28 = new QLabel(page_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(300, 140, 221, 16));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 721, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Canal Resort", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Room Type", nullptr));
        queenRadio->setText(QApplication::translate("MainWindow", "2 Queen Bed", nullptr));
        kingRadio->setText(QApplication::translate("MainWindow", "1 King Bed", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Room View Type", nullptr));
        standardRadio->setText(QApplication::translate("MainWindow", "Standard", nullptr));
        atriumRadio->setText(QApplication::translate("MainWindow", "Atrium", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("MainWindow", "MM/dd/yyyy", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "First Day of Stay", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Adults 18+", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Children", nullptr));
        parkingCheckBox->setText(QApplication::translate("MainWindow", "Parking", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Estimated total: ", nullptr));
        priceLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Nights", nullptr));
        nextPushButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Name:", nullptr));
        backPushButton->setText(QApplication::translate("MainWindow", "Back", nullptr));
        label->setText(QApplication::translate("MainWindow", "Cost", nullptr));
        creditCardLineEdit->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Room:", nullptr));
        roomCostLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Parking: ", nullptr));
        parkingLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Tax:", nullptr));
        taxLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Resort:", nullptr));
        resortLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Total:", nullptr));
        totalCostLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        visaRadio->setText(QApplication::translate("MainWindow", "VISA", nullptr));
        masterCardRadio->setText(QApplication::translate("MainWindow", "MasterCard", nullptr));
        discoverRadio->setText(QApplication::translate("MainWindow", "Discover", nullptr));
        americaexpressRadio->setText(QApplication::translate("MainWindow", "American Express", nullptr));
        payPushButton->setText(QApplication::translate("MainWindow", "Pay", nullptr));
        experationDateLineEdit->setInputMask(QApplication::translate("MainWindow", "99/99", nullptr));
        experationDateLineEdit->setText(QApplication::translate("MainWindow", "01/20", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Reservation Confirmation", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Reservation Details:", nullptr));
        firstDayLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        numberOfNightsLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        roomTypeLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        parkingLabel_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        guestsLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        totalCostLabel_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        creditCardDigitsLabel->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "PushButton", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "First Day of Stay", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "Nights", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Room type: ", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "Parking", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Guests", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "total", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "paid with credit card ending in:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
