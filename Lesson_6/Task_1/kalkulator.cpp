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
    int a, b;
    a = ui->chislo1->value();
    b = ui->chislo2->value();
    ui->resultat->setValue(a + b);
}

