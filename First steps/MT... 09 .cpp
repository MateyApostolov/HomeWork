#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cout << "Figure ? ";
    cin >> a;
    cout << "From ";
    cin >> b;
    cout << "To ";
    cin >> c;
    for (int i = a; i <= c; i = i + 10) {
        if (i % a == 0){
            cout << i << " ";
        }

    }

    return 0;
}
