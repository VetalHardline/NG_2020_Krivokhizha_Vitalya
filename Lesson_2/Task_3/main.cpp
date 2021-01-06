#include <iostream>

using namespace std;

int main()
{
     const int Size = 20;
    int arr[Size];
    int maxSize = 0;
    int shos;
    int i=0;

    do
    {
        cout << "Enter number: ";
        cin >> arr[i];
        if(arr[i] > maxSize)
        maxSize = arr[i];
        i++;
    } while(i < Size && arr[i-1]!=0);

    for(i = 0; i < 20; i++){
        for(shos = 0; shos < (maxSize - arr[i])/2; shos++){
            cout << " ";
        }
        for(int q=0; q<arr[i]; q++){
            cout << "*";
        }
        cout << endl;
        if(arr[i] == 0) break;
    }
    cout << endl;

}

