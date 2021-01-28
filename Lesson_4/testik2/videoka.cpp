#include "videoka.h"
#include "ui_videoka.h"

videoka::videoka(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::videoka)
{
    ui->setupUi(this);
}

videoka::~videoka()
{
    delete ui;
}

