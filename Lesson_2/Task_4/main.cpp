#include <iostream>

using namespace std;

int main()
{
    const int Size=5;
    int arr[Size];
    int maxSize = 0;
    int zvezdochki = 0;

    for(int elem = 0; elem < Size; elem++)
    {
        zvezdochki++;
        cout << "zvezdochek v " << zvezdochki << " stolbike:" << endl;
        cin >> arr[elem];

        if(maxSize < arr[elem])
        {
            maxSize = arr[elem];
        }
    }

    for (int elem = 0; elem <= maxSize; elem++)
    {
        for(int elemvnutrenigocikla = 0; elemvnutrenigocikla < Size; elemvnutrenigocikla++)
        {
            if(arr[elemvnutrenigocikla] - elem > 0)
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
