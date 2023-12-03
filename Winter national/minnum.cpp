#include <iostream>
using namespace std;

int Mati (int a, int b, int c){
    for(int i = 1; i <= 7; i++)
        if(i == a || i == b || i == c || i == a + b || i == b + c || i == a + c || i == a + b + c)
            continue;
        else return i;
}

int main () {
    int A, B, C, S;
    for (int i = 0; i < 3; i++) {
        cin >> A >> B >> C;
        S = Mati (A, B, C);
        cout << S << endl;
    }

    return 0;
}
