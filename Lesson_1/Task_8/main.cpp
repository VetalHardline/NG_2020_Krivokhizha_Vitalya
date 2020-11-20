#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int output = 1;
    int siize;
    int width = 1;
    cout << "Enter size of the christmas tree - ";
    cin >> siize;
    width = (siize * 2) - 1;

    while (num <= siize)
    {
        while (output <= siize - num)
        {
            cout << " ";
            output++;
        }
        while (output <= width / 2 + num)
        {
            cout << "*";
            output++;
        }
        cout << endl;
        num++;
        output = 1;
    }

    while (output <= width / 2)
    {
        cout << " ";
        output++;
    }
    cout << "*";
    output = 1;
}
