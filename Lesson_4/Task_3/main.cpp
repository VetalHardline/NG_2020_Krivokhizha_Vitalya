#include <iostream>

using namespace std;

 int kolichestvoslov = 1;

void vveditestroku(char *stroka)
{
    cout << "Enter string: ";
    cin.getline(stroka, 255);
}

void iff(char *stroka, int elem)
{
    if((stroka[elem] >= 'a' && stroka[elem] <= 'z') && !(stroka[elem + 1] >= 'a' && stroka[elem + 1] <= 'z'))
        {
            kolichestvoslov++;
        }
}

void ciklfor(char *stroka, int elem)
{
    for(int elem = 0; stroka[elem + 1] != '\0'; elem++)
    {
        iff(stroka, elem);
    }
}

void Result()
{
    cout << "Result: " << kolichestvoslov;
}

int main()
{
    char stroka[255];
    int elem = 0;
    vveditestroku(stroka);
    ciklfor(stroka, elem);
    Result();
}
