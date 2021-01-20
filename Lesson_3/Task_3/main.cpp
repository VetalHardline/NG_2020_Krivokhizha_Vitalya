#include <iostream>

using namespace std;

int main()
{
    char stroka[255];

    cout << "Enter string: ";
    cin.getline(stroka, 255);


    for(int elem = 0; stroka[elem] != '\0'; elem++)
    {
        if(stroka[elem] >= 97 && stroka[elem] <= 122)
        {
            stroka[elem] = stroka[elem] - 32;
        }
    }

    for(int elem = 0; stroka[elem] != '\0'; elem++)
    {
        cout << stroka[elem];
    }



}
