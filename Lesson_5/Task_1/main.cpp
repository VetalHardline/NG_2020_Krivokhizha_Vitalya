#include <iostream>
#include <string>
#include "computer.h"

using namespace std;

int main()
{
    videocard v_test1;
    v_test1.setName("Gtx 1660 Ti");
    v_test1.setPrice(16000);
    v_test1.setSeries("GeForce 16 Series");
    v_test1.setPopugai(7400);


    procesori cpu_test1;
    cpu_test1.setName("Intel core i5");
    cpu_test1.setProizvoditel("Intel");
    cpu_test1.setPokolenie(10);
    cpu_test1.setChastota(2.50);
    cpu_test1.setPrice(4000);
    cpu_test1.setSocket("Socket H");



    matPlata pl_test1;
    pl_test1.setProizvoditel("MSI");
    pl_test1.setModel("A320M-A PRO MAX");
    pl_test1.setPrice(1400);
    pl_test1.setSocket("AMD AM4");




    videocard v_test2;
    v_test2.setName("Gtx 1060");
    v_test2.setPrice(7000);
    v_test2.setSeries("GeForce 10 Series");
    v_test2.setPopugai(3014);


    procesori cpu_test2;
    cpu_test2.setName("Intel Core i7-9800X");
    cpu_test2.setProizvoditel("Intel");
    cpu_test2.setPokolenie(9);
    cpu_test2.setChastota(3.8);
    cpu_test2.setPrice(12000);
    cpu_test2.setSocket("Socket 2066");



    matPlata pl_test2;
    pl_test2.setProizvoditel("GIGABYTE");
    pl_test2.setModel("Gigabyte X299 Designare EX");
    pl_test2.setPrice(18000);
    pl_test2.setSocket("Socket 2066");



    videocard v_test3;
    v_test3.setName("Gtx 1050 Ti");
    v_test3.setPrice(6400);
    v_test3.setSeries("GeForce 10 Series");
    v_test3.setPopugai(6700);


    procesori cpu_test3;
    cpu_test3.setName("Intel Pentium Gold G4560");
    cpu_test3.setProizvoditel("Intel");
    cpu_test3.setPokolenie(7);
    cpu_test3.setChastota(3.50);
    cpu_test3.setPrice(2000);
    cpu_test3.setSocket("Socket 1151");



    matPlata pl_test3;
    pl_test3.setProizvoditel("Asus");
    pl_test3.setModel("Asus Prime H310M-R R2.0");
    pl_test3.setPrice(1600);
    pl_test3.setSocket("Socket 1151");


    computer pk1;

    pk1.setMaterPlata(pl_test1);

    pk1.setVideocarta(v_test1);

    pk1.setProcik(cpu_test1);

    pk1.proverkaSocketov();

    pk1.infoPK();



    computer pk2;

    pk2.setMaterPlata(pl_test2);

    pk2.setVideocarta(v_test2);

    pk2.setProcik(cpu_test2);

    pk2.proverkaSocketov();

    pk2.infoPK();




    computer pk3;

    pk3.setMaterPlata(pl_test3);

    pk3.setVideocarta(v_test3);

    pk3.setProcik(cpu_test3);

    pk3.proverkaSocketov();

    pk3.infoPK();




    return 0;
}
