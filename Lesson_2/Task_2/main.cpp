#include <iostream>

using namespace std;

int main()
{
    int card[10], money, allMoney, nolik, num;
    money = 0;
    allMoney = 0;
    nolik = 0;
    num = 0;

    for (int num = 0; num < 10; num++)
    {
        card[num] = 0;
    }

    while (nolik < 10)
    {
        cout << "Vvedite nomer kartochki: ";
        cin >> num;
        if (num > 0 && num < 11){
            cout << "skolko polozhit deneg? ";
            cin >> money;
            card[num - 1] += money;

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
}
