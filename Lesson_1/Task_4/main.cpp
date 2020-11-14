#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Privet drug! Skolko poluchaesh deneg?" << endl;
    cin >> a;

    if (a < 1000 && a >= 0) {
        cout << "Rabotai bolshe";
    }

    if(a >= 1000 && a < 1000000) {
        cout << "Tak derzhat!";
    }

    if(a >= 1000000) {
        cout << "Ti millioner!";
    }

    if(a < 0) {
        cout << "Ti menya obmanivaesh :)";
    }
    cout << ", no ti molodec!";
    return 0;
}
