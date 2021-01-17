#include <iostream>

using namespace std;

int main()
{
    char stroka[255];
    int kolichestvoslov=0;
    cout << "Enter string: ";
    cin.getline(stroka, 255);

    for(int i=0; stroka[i+1] != '\0';i++)
    {
        if((stroka[i]>='a' && stroka[i] <= 'z') && !(stroka[i+1]>='a' && stroka[i+1] <= 'z'))
        {
            kolichestvoslov++;
        }
    }

    cout << "Result: " << kolichestvoslov;
}
