#include <iostream>

using namespace std;

/*void vivesticarti(int card[])
{
   for (int j = 0; j < 10; j++)
    {
        cout << card[j] << " ";
    }
}*/

int main()
{
    int Size=10;
    int card[10]{}, money, allMoney;
    money = 0;
    allMoney = 0;

    while (true)
    {
        cout << "Vvedite nomer kartochki: ";
        cin >> Size;
        if (Size > 0 && Size < 11){
            cout << "skolko polozhit deneg? ";
            cin >> money;
            card[Size - 1] += money;

            for (int j = 0; j < 10; j++)
            {
                cout << card[j] << " ";
            }

            cout << endl;
            cout << "v summe na vsex kartochkah - ";
            allMoney = allMoney + money;
            cout << allMoney;
            cout << endl;
        }
        else{
            cout << "takoi kartochki ne znayu" << endl;
        }
    }
   // vivesticarti(card);
}
