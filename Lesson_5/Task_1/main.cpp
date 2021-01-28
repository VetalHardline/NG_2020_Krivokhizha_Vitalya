#include <iostream>
#include <string>
#include "videocard.h"
#include "procesori.h"
#include "matplata.h"
#include "computer.h"

using namespace std;

int main()
{
    videocard v_test;
    v_test.setName("Gtx 1660 Ti");
    cout << v_test.getName() << endl;

    v_test.setPrice(16000);
    cout << v_test.getPrice() << endl;

    v_test.setSeries("GeForce 16 Series");
    cout << v_test.getSeries() << endl;

    v_test.setPopugai(7400);
    cout << v_test.getPopugai() << "\n\n\n";



    procesori cpu_test;
    cpu_test.setName("Intel core i5");
    cout << cpu_test.getName() << endl;

    cpu_test.setProizvoditel("Intel");
    cout << cpu_test.getProizvoditel() << endl;

    cpu_test.setPokolenie(10);
    cout << cpu_test.getPokolenie() << endl;

    cpu_test.setChastota(2.50);
    cout << cpu_test.getChastota() << endl;

    cpu_test.setPrice(4000);
    cout << cpu_test.getPrice() << endl;

    cpu_test.setSocket("Socket H");
    cout << cpu_test.getSocket() << "\n\n\n";


    matPlata pl_test;
    pl_test.setProizvoditel("MSI");
    cout << pl_test.getProizvoditel() << endl;

    pl_test.setModel("A320M-A PRO MAX");
    cout << pl_test.getModel() << endl;

    pl_test.setPrice(1400);
    cout << pl_test.getPrice() << endl;

    pl_test.setSocket("AMD AM4");
    cout << pl_test.getSocket() << "\n\n\n";














    return 0;
}
