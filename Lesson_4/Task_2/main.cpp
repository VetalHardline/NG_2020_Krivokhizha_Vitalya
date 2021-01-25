#include <iostream>

using namespace std;

void cubeDraw(int razmer, int nomerZvezdochki)
{
    if(razmer > nomerZvezdochki)
    {
        cout << "*";
        nomerZvezdochki++;
        cubeDraw(razmer, nomerZvezdochki);
    }
    else
    {
        cout << endl;
    }
}

void cube(int razmer, int stroka, int nomerZvezdochki)
{
    if(razmer > stroka)
    {
        cubeDraw(razmer, nomerZvezdochki);
        stroka++;
        cube(razmer, stroka, nomerZvezdochki);
    }

}

void treugolnik1Draw(int stroka, int nomerZvezdochki)
{
    if(stroka >= nomerZvezdochki)
    {
        cout << "*";
        nomerZvezdochki++;
        treugolnik1Draw(stroka, nomerZvezdochki);
    }
    else
    {
        cout << endl;
    }
}

void treugolnik1(int razmer, int stroka, int nomerZvezdochki)
{
    if(razmer > stroka)
    {
        treugolnik1Draw(stroka, nomerZvezdochki);
        stroka++;
        treugolnik1(razmer, stroka, nomerZvezdochki);
    }

}

void treugolnik2Draw(int razmer, int stroka)
{
    if(razmer > stroka)
    {
        cout << "*";
        stroka++;
        treugolnik2Draw(razmer, stroka);
    }
    else
    {
        cout << endl;
    }
}

void treugolnik2(int razmer, int stroka, int nomerZvezdochki)
{
    if(razmer > stroka)
    {
        treugolnik2Draw(razmer, stroka);
        stroka++;
        treugolnik2(razmer, stroka, nomerZvezdochki);
    }

}

void stars(int stroka, int nomerZvezdochki)
{
    if(stroka <= nomerZvezdochki)
    {
        cout << '*';
        stroka++;
        stars(stroka, nomerZvezdochki);
    }
}

void treugolnik3Probeli(int stroka, int razmer)
{
    if(stroka < razmer)
    {
        cout << " ";
        stroka++;
        treugolnik3Probeli(stroka, razmer);
    }
}

void treugolnik3(int razmer, int stroka, int nomerZvezdochki)
{
    if(nomerZvezdochki <= razmer)
    {
        treugolnik3Probeli(0,razmer - nomerZvezdochki);
        stars(1, nomerZvezdochki);
        cout << endl;
        nomerZvezdochki++;
        treugolnik3(razmer, stroka , nomerZvezdochki);
    }

}

void treugolnik4Probeli(int razmer, int stroka)
{
    if(razmer < stroka)
    {
        cout << " ";
        razmer++;
        treugolnik4Probeli(razmer, stroka);
    }
}

void treugolnik4(int razmer,int nomerZvezdochki, int stroka)
{
    if(nomerZvezdochki <= razmer)
    {
        treugolnik4Probeli(1, nomerZvezdochki);
        stars(0,razmer - nomerZvezdochki);
        nomerZvezdochki++;
        cout << endl;
        treugolnik4(razmer, nomerZvezdochki, stroka);
    }

}

int main()
{
    int razmer;
    cout << "Enter size: ";
    cin >> razmer;

    cube(razmer, 0, 0);
    cout << endl;

    treugolnik1(razmer, 0, 0);
    cout << endl;

    treugolnik2(razmer, 0, 0);
    cout << endl;

    treugolnik3(razmer, 1, 1);
    cout << endl;

    treugolnik4(razmer, 1, 1);
    cout << endl;

}
