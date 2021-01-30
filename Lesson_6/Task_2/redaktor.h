#ifndef REDAKTOR_H
#define REDAKTOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class redaktor; }
QT_END_NAMESPACE

class redaktor : public QMainWindow
{
    Q_OBJECT

public:
    redaktor(QWidget *parent = nullptr);
    ~redaktor();

private slots:
    void schitatelSlov();

private:
    Ui::redaktor *ui;
};
#endif // REDAKTOR_H
