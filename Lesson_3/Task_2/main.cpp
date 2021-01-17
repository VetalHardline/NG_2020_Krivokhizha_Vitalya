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

    for(int i=0; stroka[i+1] != '\0';i++)
    {
        if (stroka[i]>='a' && stroka[i] <= 'z')
        {
            nachaloSlova = i;
            dlinaSlova = nachaloSlova;

            while(stroka[i]>='a' && stroka[i] <= 'z')
            {
                dlinaSlova++;
                i++;
            }

            while (stroka[nachaloSlova]<stroka[dlinaSlova])
            {
                cout << stroka[nachaloSlova];
                nachaloSlova++;
            }

            if(maxDlina < dlinaSlova)
            {
                maxDlina = dlinaSlova;
                maxPos = nachaloSlova;
            }
            cout << endl;
        }

    }



}
