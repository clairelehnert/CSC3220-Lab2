//Daniela Castro
#include "mainwindow.h"
#include "ui_mainwindow.h"


const double ROOM_PRICES[] = {284, 325, 290, 350};
const double PARKING_PRICE = 12.75;
const double TAX_RATE = 15;
const double RESORT_FEE = 15;

const QStringList CREDIT_CARD_MASKS = {
    "4999-9999-9999-9999",
    "5999-9999-9999-9999",
    "6999-9999-9999-9999",
    "3999-999999-99999",

};


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->creditCardsRadioButtons = {ui->visaRadio, ui->masterCardRadio, ui->discoverRadio, ui->americaexpressRadio};
    ui->creditCardLineEdit->setInputMask(CREDIT_CARD_MASKS.at(0));

    this->calculatePreviewPrice();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calculatePreviewPrice()
{
    bool isQueen = this->ui->queenRadio->isChecked();
    bool isStandard = this->ui->standardRadio->isChecked();
    int index = 0;

    if(!isQueen)
        index = 2;
    if(!isStandard)
        index++;

    double price = ROOM_PRICES[index];
    bool hasParking = this->ui->parkingCheckBox->isChecked();

    if(hasParking)
        price = price + PARKING_PRICE;

    int nights = this->ui->nightsSpinBox->value();
    price = price * nights;

    QLocale* locale = new QLocale("en_US");

    this->ui->priceLabel->setText(locale->toString(price));
}

void MainWindow::on_queenRadio_toggled(bool checked)
{
    this->calculatePreviewPrice();
}

void MainWindow::on_standardRadio_toggled(bool checked)
{
    this->calculatePreviewPrice();
}

void MainWindow::on_nightsSpinBox_valueChanged(int arg1)
{
    this->calculatePreviewPrice();
}

void MainWindow::on_parkingCheckBox_stateChanged(int arg1)
{
    this->calculatePreviewPrice();
}

void MainWindow::on_nextPushButton_clicked()
{
    bool isQueen = this->ui->queenRadio->isChecked();
    bool isStandard = this->ui->standardRadio->isChecked();
    int index = 0;

    if(!isQueen)
        index = 2;
    if(!isStandard)
        index++;

    double price = ROOM_PRICES[index];
    int nights = this->ui->nightsSpinBox->value();
    double roomPrice = price * nights;
    double tax = roomPrice * TAX_RATE/100;
    bool hasParking = this->ui->parkingCheckBox->isChecked();

    double parking = 0;
    if(hasParking)
        parking = PARKING_PRICE * nights;

    double resort = RESORT_FEE * nights;

    double total = roomPrice + tax + parking + resort;

    QLocale* locale = new QLocale("en_US");

    this->ui->roomCostLabel->setText(locale->toString(roomPrice));
    this->ui->taxLabel->setText(locale->toString(tax));
    this->ui->parkingLabel->setText(locale->toString(parking));
    this->ui->resortLabel->setText(locale->toString(resort));
    this->ui->totalCostLabel->setText(locale->toString(total));



    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_backPushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);

}

void MainWindow::on_visaRadio_toggled(bool checked)
{
    if (!checked)
        return;
    ui->creditCardLineEdit->setInputMask(CREDIT_CARD_MASKS.at(0));
    ui->creditCardLineEdit->clear();


}

void MainWindow::on_masterCardRadio_toggled(bool checked)
{
    if (!checked)
        return;
    ui->creditCardLineEdit->setInputMask(CREDIT_CARD_MASKS.at(1));
    ui->creditCardLineEdit->clear();

}

void MainWindow::on_discoverRadio_toggled(bool checked)
{
    if (!checked)
        return;
    ui->creditCardLineEdit->setInputMask(CREDIT_CARD_MASKS.at(2));
    ui->creditCardLineEdit->clear();

}

void MainWindow::on_americaexpressRadio_toggled(bool checked)
{
    if (!checked)
        return;
    ui->creditCardLineEdit->setInputMask(CREDIT_CARD_MASKS.at(3));
    ui->creditCardLineEdit->clear();

}
