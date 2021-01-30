#include "computer.h"

computer::computer()
{

}

double computer::priceKomponents()
{
    return materPlata.getPrice() + videocarta.getPrice() + procik.getPrice();
}

void computer::infoPK()
{
    cout << "Procik : " << procik.getName() << ", proizvoditel " << procik.getProizvoditel() << "\t" << procik.getPokolenie() << " MHz" << "\t" << procik.getChastota() << " chastota\tee cena "<< procik.getPrice()<< "$\t" << procik.getSocket() << endl;
    cout << "Videocard: " << videocarta.getName() << "\t ee cena " << videocarta.getPrice() << "$\t\tSeriya: " << videocarta.getSeries() << "\t" << videocarta.getPopugai() << " Popugaev" << endl;
    cout << "Motherboard: " << materPlata.getProizvoditel() << " proizvoditel\tModel: " << materPlata.getModel() << "\tee cena " << materPlata.getPrice() << "$\tSocket: " << materPlata.getSocket() << " Socket" << endl;
    cout << "Polnaya stoimost computera: " << priceKomponents() << "$\n\n\n";
}

void computer::proverkaSocketov()
{
    if (materPlata.getSocket() != procik.getSocket())
    {
        cout << "Izvini no soket iz procesora ne sootvetstvuet socketu iz matplati" << endl;
        cout << endl;
    }
}


