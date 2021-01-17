#include <iostream>

using namespace std;

int main()
{
    char stroka[255];
    int nachaloSlova = 0;
    int dlinaSlova = 0;
    int maxPos = 0;
    int maxDlina = 0;

    cout << "Enter string: ";
    cin.getline(stroka, 255);

    for(int element = 0; stroka[element+1] != '\0'; element++)
    {
        if ((stroka[element] >= 'a' && stroka[element] <= 'z') || (stroka[element] >= 'A' && stroka[element] <= 'Z'))
        {
            nachaloSlova = element;
            dlinaSlova = 0;

            while ((stroka[element] >= 'a' && stroka[element] <= 'z') || (stroka[element] >= 'A' && stroka[element] <= 'Z'))
            {
                dlinaSlova++;
                element++;
            }

            if(maxDlina < dlinaSlova)
            {
                maxDlina = dlinaSlova;
                maxPos = nachaloSlova;
            }

        }

    }
    cout << "Result: ";

    int elementSamogoBolshogoSlova = maxPos;

    while (elementSamogoBolshogoSlova < maxPos + maxDlina)
    {
        cout << stroka[elementSamogoBolshogoSlova];
        elementSamogoBolshogoSlova++;
    }

}
