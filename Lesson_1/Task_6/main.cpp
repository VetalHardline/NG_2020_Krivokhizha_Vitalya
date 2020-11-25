#include <iostream>

using namespace std;

int main()
{

    int objectSize;
    cout << "VVedite chislo: ";
    cin >> objectSize;

    for (int j = 0; j < objectSize; j++) {
        for (int i = 0; i < objectSize; i++)
            cout << "*";
        cout << endl;
    }

    cout << endl;

    for (int j = 0; j < objectSize; j++) {
        for (int i = 0; i < j+1; i++)
            cout << "*";
        cout << endl;
    }

    cout << endl;

    for (int j = 0; j < objectSize; j++) {
        for (int i = 0; i < objectSize - j; i++)
            cout << "*";
        cout << endl;
    }

    cout << endl;

    for (int j = 1; j <= objectSize; j++) {
        for (int i = 0; i < objectSize - j; i++){
            cout<<" ";
        }
        for (int i = 0; i < j; i++){
            cout << "*";
        }

        cout << endl;
    }
    cout<<endl;

    for (int i = objectSize; i > 0; i--){
        for (int j = 0; j < objectSize - i; j++){
            cout << " ";
        }
        for (int j = 0; j < i; j++){
            cout << "*";
        }

        cout << endl;
    }
}
