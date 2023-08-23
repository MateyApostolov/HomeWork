#include <iostream>
using namespace std;

int main () {
    int a;
    cout << "Number ? ";
    cin >> a;
    for (int i = 1; i <= a; i = i + 1){
        cout << i << " ";
    }
    cout << endl;
    for (int y = a; y > 0; y--){
        cout << y << " ";
    }

     return 0;
 }
