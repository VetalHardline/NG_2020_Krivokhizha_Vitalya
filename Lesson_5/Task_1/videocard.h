#include <iostream>
#include <string>

using namespace std;

class videocard
{
public:
    videocard();

    void setName (string newName) { name = newName; }
    string getName() { return name; }

    void setPrice(double newPrice);
    double getPrice() { return price;}

    void setSeries (string newSeries) { series = newSeries; }
    string getSeries() { return series; }

    void setPopugai(int newPopugai);
    int getPopugai() { return popugai;}

private:
    string name;
    double price;
    string series;
    int popugai;
};


