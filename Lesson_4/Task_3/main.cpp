#include <iostream>

using namespace std;

int kolichestvoslov = 1;

void vveditestroku(char *stroka)
{
    cout << "Enter string: ";
    cin.getline(stroka, 255);
}

void uslovie(char *stroka, int elem)
{
    if((stroka[elem] >= 'a' && stroka[elem] <= 'z') || (stroka[elem] >= 'A' && stroka[elem] <= 'Z')){
        if(!(stroka[elem + 1] >= 'a' && stroka[elem + 1] <= 'z') && !(stroka[elem + 1] >= 'A' && stroka[elem + 1] <= 'Z')){
            kolichestvoslov++;
        }
    }
}

void WordsCounter(char *stroka, int elem)
{
    for(int elem = 0; stroka[elem + 1] != '\0'; elem++)
    {
        uslovie(stroka, elem);
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
    WordsCounter(stroka, elem);
    Result();
}
