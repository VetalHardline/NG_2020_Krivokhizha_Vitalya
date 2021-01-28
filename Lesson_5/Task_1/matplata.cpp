#include "matplata.h"

matPlata::matPlata()
{
    setProizvoditel("NONAME");
    setModel("NONAME");
    setPrice(0);
    setSocket("NONAME");
}

void matPlata::setPrice(double newPrice)
{
    if(newPrice >= 0){
        price = newPrice;
    } else {
        cout << "Error! price can not be lower that 0!" << endl;
    }
}
