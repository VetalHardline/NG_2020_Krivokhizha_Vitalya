#include "procesori.h"

procesori::procesori()
{
    setName("NONAME");
    setProizvoditel("NONAME");
    setPokolenie(0);
    setChastota(0);
    setPrice(0);
    setSocket("NONAME");
}

void procesori::setPokolenie(int newPokolenie)
{
    if(newPokolenie >= 0){
        pokolenie = newPokolenie;
    } else {
        cout << "Error! Pokolenie can not be lower that 0!" << endl;
    }
}

void procesori::setChastota(double newChastota)
{
    if(newChastota >= 0){
        chastota = newChastota;
    } else {
        cout << "Error! Chastota can not be lower that 0!" << endl;
    }
}

void procesori::setPrice(double newPrice)
{
    if(newPrice >= 0){
        price = newPrice;
    } else {
        cout << "Error! price can not be lower that 0!" << endl;
    }
}
