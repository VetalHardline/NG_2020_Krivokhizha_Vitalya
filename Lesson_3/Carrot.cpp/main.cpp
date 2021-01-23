#include <iostream>

using namespace std;

int main()
{
    int sdvig;
    char stroka[255];

    cout << "vvedite svoi text : ";
    cin.getline(stroka, 255);
    cout << "vvedite sdvig: ";
    cin >> sdvig;


    for (int elem = 0; stroka[elem] != '\0'; elem++)
    {
        if (stroka[elem] >= 97 && stroka[elem] <= 122)
            for (int j = 0; j < sdvig; j++)
            {
                if (stroka[elem] == 'a')
                {
                    stroka[elem] = 'z';
                    stroka[elem] = stroka[elem] + 1;
                }
                stroka[elem] = stroka[elem] - 1;
            }
    }
    cout << stroka << endl;

    return 0;
}
