#include <iostream>

using namespace std;

int main()
{
    char stroka[255];

    cout << "Enter string: ";
    cin.getline(stroka, 255);

    char malenkayaBukva = 0;

    for(int elem = 0; stroka[elem] != '\0'; elem++)
    {
        if(stroka[elem] >= 'a' && stroka[elem] <= 'z')
        {
            malenkayaBukva = stroka[elem];
            malenkayaBukva -= 32;
            cout << malenkayaBukva;
        }else{
            cout << stroka[elem];
        }
    }


}

