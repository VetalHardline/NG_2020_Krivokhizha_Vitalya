#include <iostream>

using namespace std;

int main()
{
    float a,b;
    int c;
    cout << "Vvedite pervoe chislo(a):";
    cin >> a;
    cout << "Vvedite vtoroe chislo(b):";
    cin >> b;
    cout << "Vvedite deistvie(1 eto dodat, 2 eto otnyat, 3 eto umnozit, a 4 eto podelit):";
    cin >> c;

    switch(c)
    {

    case 1:
    cout << "a+b=" << a+b;
        break;

    case 2:
        cout << "a-b=" << a-b;
        break;

    case 3:
        cout << "a*b=" << a*b;
        break;

    case 4:
        cout << "a/b=" << a/b;
        break;

    default:
        cout << "Nepravilno vvedeno deistvie";
        break;
    }
    return 0;
}
