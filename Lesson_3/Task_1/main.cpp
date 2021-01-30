#include <iostream>

using namespace std;

int main()
{
    char stroka[255];
    int kolichestvoslov = 0;

    cout << "Enter string: ";
    cin.getline(stroka, 255);

    for(int elem = 0; stroka[elem] != '\0'; elem++)
    {
        if((stroka[elem] >= 'a' && stroka[elem] <= 'z') || (stroka[elem] >= 'A' && stroka[elem] <= 'Z')){
            if(!(stroka[elem + 1] >= 'a' && stroka[elem + 1] <= 'z') && !(stroka[elem + 1] >= 'A' && stroka[elem + 1] <= 'Z')){
                kolichestvoslov++;
            }
        }
    }

    cout << "Result: " << kolichestvoslov;
}
