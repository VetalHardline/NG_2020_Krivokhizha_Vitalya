#include <iostream>

using namespace std;

int main()
{
    int num[20];
    int maxSize = 0;
    int shos;
    int i;

    for(int i=0;i<20;i++){
        cout << "Enter number: ";
        cin >> num[i];
        if(num[i] > maxSize)
            maxSize = num[i];
        if(num[i] == 0) break;
    }
    for(i = 0; i < 20; i++){
        for(shos = 0; shos < (maxSize - num[i])/2; shos++){
            cout << " ";
        }
        for(int q=0; q<num[i]; q++){
            cout << "*";
        }
        cout << endl;
        if(num[i] == 0) break;
    }
    cout << endl;
}
