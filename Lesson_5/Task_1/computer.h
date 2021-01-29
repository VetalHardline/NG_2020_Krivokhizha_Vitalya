#include <iostream>
#include <string>
#include "matplata.h"
#include "procesori.h"
#include "videocard.h"

using namespace std;

class computer
{
public:
    computer();

    void setMaterPlata(matPlata newMaterPlata) { materPlata = newMaterPlata; }
    matPlata getMaterPlata() { return materPlata; }


    void setVideocarta(videocard newVideocarta) { videocarta = newVideocarta; }
    videocard getVideocarta() { return videocarta;}

    void setProcik(procesori newProcik) { procik = newProcik; }
    procesori getProcik() { return procik; }

    double priceKomponents();


    void infoPK();

    void proverkaSocketov();

private:

    matPlata materPlata;
    videocard videocarta;
    procesori procik;
};


