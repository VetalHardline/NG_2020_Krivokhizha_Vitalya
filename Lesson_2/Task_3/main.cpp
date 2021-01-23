#include <iostream>

using namespace std;

int main()
{
    const int Size = 20;
    int arr[Size];
    int maxSize = 0;
    int element = 0;

    do
    {
        cout << "Enter number: ";
        cin >> arr[element];

        if(arr[element] > maxSize)
        {
            maxSize = arr[element];
        }
        element++;

    } while(element < Size && arr[element - 1] != 0);

    for(int element = 0; element < 20; element++){
        for(int viravnivatel = 0; viravnivatel < (maxSize - arr[element])/2; viravnivatel++){
            cout << " ";
        }
        for(int risovatel = 0; risovatel < arr[element]; risovatel++){
            cout << "*";
        }
        cout << endl;
        if(arr[element] == 0) break;
    }
    cout << endl;

}
