#include <iostream>
using namespace std;

bool dobro(int n) {
    int pos = n % 10, p, sum = 0;
    if(n == 0) return true;
    while(n > 0) {
        p = n % 10;
        sum += p;
        n /= 10;
    }
    if(sum % 2 != 0) return false;
    if(sum / 2 == p + pos || sum / 2 == p) return true;
    return false;
}
bool intr(int n) {
    int nc = 0, c = 0;
    while (n > 0) {
        if((n % 10) % 2 == 1) nc++;
        else c++;
        n /= 10;
    }
    if(nc <= c) return true;
    return false;
}

int main () {
    int n;
    for(int i = 0; i < 3; i++) {
        cin >> n;
        if(dobro(n) && intr(n)) cout << "yes";
        else cout << "no";
        cout << "\n";
    }

    return 0;
}
