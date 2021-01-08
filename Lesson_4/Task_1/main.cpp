#include <iostream>

using namespace std;


int allMoney = 0;

void vivesticarti(int card[])
{
    for (int j = 0; j < 10; j++)
    {
        cout << card[j] << " ";
    }
    cout << endl;
}

int getUserSize()
{
    int Size;
    cout << "Vvedite nomer kartochki: ";
    cin >> Size;
    return Size;
}

int getUserMoney()
{
    int money;
    cout << "skolko polozhit deneg? ";
    cin >> money;
    return money;
}

int suma(int money)
{

    cout << "v summe na vsex kartochkah - ";
    allMoney = allMoney + money;
    cout << allMoney;
    cout << endl;
    return allMoney;
}

void cikl()
{
    int card[10]{};
    while(true)
    {
        int Size = getUserSize();

        if (Size > 0 && Size < 11)
        {
            int money = getUserMoney();
            card[Size - 1] += money;
            vivesticarti(card);
            suma(money);
        }
        else{
            cout << "takoi kartochki ne znayu" << endl;
        }

    }
}

int main()
{
    cikl();
}
