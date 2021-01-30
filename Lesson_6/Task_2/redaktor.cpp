#include "redaktor.h"
#include "ui_redaktor.h"
#include <QString>

redaktor::redaktor(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::redaktor)
{
    ui->setupUi(this);

    ui->kolichestvoSlov->setReadOnly(true);

    connect (ui->userText, &QTextEdit::textChanged, this, &redaktor::schitatelSlov);
}

redaktor::~redaktor()
{
    delete ui;
}

void redaktor::schitatelSlov()
{
    QString stroka = ui->userText->toPlainText();

    int vsegoSlov = 0;
    for(int elem = 0; stroka[elem] != '\0'; elem++)
        {
            if((stroka[elem] >= 'a' && stroka[elem] <= 'z') || (stroka[elem] >= 'A' && stroka[elem] <= 'Z')){
                if(!(stroka[elem + 1] >= 'a' && stroka[elem + 1] <= 'z') && !(stroka[elem + 1] >= 'A' && stroka[elem + 1] <= 'Z')){
                    vsegoSlov++;
                }
            }
        }

     ui->kolichestvoSlov->setValue(vsegoSlov);
}

