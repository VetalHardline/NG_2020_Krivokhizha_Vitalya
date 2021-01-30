#include "kalkulator.h"
#include "ui_kalkulator.h"

kalkulator::kalkulator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::kalkulator)
{
    ui->setupUi(this);

    connect(ui->suma, &QPushButton::clicked, this, &kalkulator::resultatNazhatia);
    ui->resultat->setReadOnly(true);
}

kalkulator::~kalkulator()
{
    delete ui;
}

void kalkulator::resultatNazhatia()
{
    int userNumber1, userNumber2;
    userNumber1 = ui->chislo1->value();
    userNumber2 = ui->chislo2->value();
    ui->resultat->setValue(userNumber1 + userNumber2);
}

