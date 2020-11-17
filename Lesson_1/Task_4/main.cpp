#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << "Privet drug! Skolko poluchaesh deneg?" << endl;
    cin >> a;

    if ( a < 1000) {
        cout << "Rabotai bolshe";
    }

    if( a > 999) {
        if( a < 1000000)
        cout << "Tak derzhat!";
        if( a > 999999)
        cout << "Ti millioner!";
    }

    cout << ", no ti molodec!";
    return 0;
}

