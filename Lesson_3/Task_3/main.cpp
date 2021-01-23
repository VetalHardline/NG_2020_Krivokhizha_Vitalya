#include <iostream>

using namespace std;

int main()
{
    char stroka[255];

    cout << "Enter string: ";
    cin.getline(stroka, 255);


    for(int elem = 0; stroka[elem] != '\0'; elem++)
    {
        if(stroka[elem] >= 'a' && stroka[elem] <= 'z')
        {
            stroka[elem] = stroka[elem] - 32;
        }
        cout << stroka[elem];
    }


}
