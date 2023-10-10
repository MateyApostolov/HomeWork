#include <iostream>
using namespace std;

int main () {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    int i = 0;
    if (A + B >= C && A + B <= D) {
        cout << "+ ";
        i++;
    }
    if (A - B >= C && A - B <= D) {
        cout << "- ";
        i++;
    }
    if (A * B >= C && A * B <= D) {
        cout << "* ";
        i++;
    }
    if (A / B >= C && A / B <= D) {
        cout << "/ ";
        i++;
    }
    if (i == 0) {
        cout << "Proval";
    }

    return 0;
}
