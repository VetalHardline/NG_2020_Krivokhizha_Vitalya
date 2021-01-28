#include <iostream>
#include <string>

using namespace std;

class matPlata
{
public:
    matPlata();

    void setProizvoditel(string newProizvoditel) { proizvoditel = newProizvoditel; }
    string getProizvoditel() { return proizvoditel; }

    void setModel(string newModel) { model = newModel; }
    string getModel() { return model; }

    void setPrice(double newPrice);
    double getPrice() {return price; }

    void setSocket(string newSocket) { socket = newSocket; }
    string getSocket() { return socket; }

private:
    string proizvoditel;
    string model;
    double price;
    string socket;
};

