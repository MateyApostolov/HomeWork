#include <iostream>
using namespace std;

int main () {
    char a;
    cin >> a;
    char b;
    cin >> b;
    char c;
    cin >> c;
    if (a == 'b' && b == 'b' && c == 'g') {
        cout << "black" << endl;
        cout << "black" << endl;
        cout << "GREEN";
        return 0;
    }
    if (a == 'b' && b == 'b' && c == 'G') {
        cout << "black" << endl;
        cout << "yellow" << endl;
        cout << "black";
        return 0;
    }
    if (a == 'b' && b == 'y' && c == 'b') {
        cout << "red" << endl;
        cout << "black" << endl;
        cout << "black";
        return 0;
    }
    if (a == 'r' && b == 'b' && c == 'b') {
        cout << "red" << endl;
        cout << "yellow" << endl;
        cout << "black";
        return 0;
    }
    if (a == 'r' && b == 'y' && c == 'b') {
        cout << "black" << endl;
        cout << "black" << endl;
        cout << "green";
        return 0;
    }
    if (a == 'b' && b == 'Y' && c == 'b') {
        cout << "black" << endl;
        cout << "YELLOW" << endl;
        cout << "black";
        return 0;
    }
    cout << "error";

    return 0;
}
