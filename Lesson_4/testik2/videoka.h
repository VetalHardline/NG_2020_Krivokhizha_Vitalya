#ifndef VIDEOKA_H
#define VIDEOKA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class videoka; }
QT_END_NAMESPACE

class videoka : public QMainWindow
{
    Q_OBJECT

public:
    videoka(QWidget *parent = nullptr);
    ~videoka();

private:
    Ui::videoka *ui;
};
#endif // VIDEOKA_H
