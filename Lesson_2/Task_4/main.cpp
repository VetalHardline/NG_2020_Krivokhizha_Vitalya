#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const int Size=5;
    int arr[Size];
    int maxSize = 0;
    int k = 0;

    for(int i = 0; i < Size; i++)
    {
        k++;
        cout << "звездочек в " << k << " столбике:" << endl;
        cin >> arr[i];

        if(maxSize < arr[i])
        {
            maxSize = arr[i];
        }
    }

    for (int i = 0; i <= maxSize; i++)
    {
        for(int j = 0; j < Size; j++)
        {
            if(arr[j] - i > 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

}
