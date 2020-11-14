#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Skolko oreshkov nuzhno belochke na zimu: " << endl;
    cin >> a;
    cout << "Skolko oreshkov v ondnoi shishke: " << endl;
    cin >> b;
    cout << "Skolko shishok sobrala belochka: " << endl;
    cin >> c;
    if(b*c>=a){
       cout << "Yes";
    }
    else{
       cout << "No";
    }
    return 0;
}
