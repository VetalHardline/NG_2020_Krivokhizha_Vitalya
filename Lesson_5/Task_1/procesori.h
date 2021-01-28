#include <iostream>
#include <string>

using namespace std;

class procesori
{
public:
    procesori();

    void setName (string newName) { name = newName; }
    string getName() { return name; }

    void setProizvoditel(string newProizvoditel) { proizvoditel = newProizvoditel; }
    string getProizvoditel() { return proizvoditel; }

    void setPokolenie(int newPokolenie);
    int getPokolenie() { return pokolenie; }

    void setChastota(double newChastota);
    double getChastota() {return chastota; }

    void setPrice(double newPrice);
    double getPrice() {return price; }

    void setSocket(string newSocket) { socket = newSocket; }
    string getSocket() { return socket; }

private:
    string name;
    string proizvoditel;
    int pokolenie;
    double chastota;
    double price;
    string socket;
};


