#include <iostream>
using namespace std;

int main () {
    int N;
    cin >> N;
    char A, h;
    int sum = 0;
    while(true) {
        cin >> A;
        if(A == '.') break;
        if(A == 'H') sum += 1;
        if(A == 'C') sum += 12;
        if(A == 'N') sum += 14;
        if(A == 'O') sum += 16;
        if(isdigit(A)) {
            if(h == 'H') sum += (A - '0' - 1) * 1;
            if(h == 'C') sum += (A - '0' - 1) * 12;
            if(h == 'N') sum += (A - '0' - 1) * 14;
            if(h == 'O') sum += (A - '0' - 1) * 16;

        }
        h = A;
    }
    cout << sum;

    return 0;
}
