#include <iostream>

using namespace std;

int main()
{
    int array[10], mySchool, proverka;
    proverka = 0;

    for(int num = 0; num < 10; num++)
    {
        cout << "Vvedite nomer shkolu: ";
        cin >> array[num];
    }

    cout << "teper vvedi nomer moei shkolu:" << endl;
    cin >> mySchool;

    for(int num = 0; num < 10; num++)
    {
    if(array[num] == mySchool)
        {
        cout << "ya znayu ety shkolu";
        proverka = 1;
        break;
        }
    }

    if (proverka == 0){
        cout << "k sozheleniyu ya ne znau ety shkolu!";
    }
}

