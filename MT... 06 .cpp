#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "First number : ";
    cin >> a;
    cout << "Second number : ";
    cin >> b;
    cout << "Step : ";
    cin >> c;
    if (c <= 0){
        cout << "The step cannot be zero or negative!";
        return 1;
    }
    if (a == b) {
        cout << a;
    } else {
        for (int i = a; i <= b; i = i + c) {
            cout << i << " ";
        }
        for (int i = a; i >= b; i = i - c) {
            cout << i << " ";
        }
    }
    return 0;

}
