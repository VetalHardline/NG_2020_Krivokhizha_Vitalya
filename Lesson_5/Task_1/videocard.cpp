#include "videocard.h"

videocard::videocard()
{
    setName("NONAME");
    setPrice(0);
    setSeries("VOODOO 2");
    setPopugai(0);
}

void videocard::setPrice(double newPrice)
{
    if (newPrice >= 0) {
        price = newPrice;
    } else {
        cout << "Error! Price can not be lower that 0! Price set to 0!" << endl;
        price = 0;
    }

}

void videocard::setPopugai(int newPopugai)
{
    if (newPopugai >= 0) {
        popugai = newPopugai;
    } else {
        cout << "Error! Popugai can not be lower that 0! Price set to 0!" << endl;
        popugai = 0;
    }
}

