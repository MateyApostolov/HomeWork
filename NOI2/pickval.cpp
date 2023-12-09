#include <iostream>
using namespace std;

int main () {
    int n1, n2, n, wr = 0, d = 0, pr, popr;
    cin >> n1 >> n;
    pr = n;
    popr = n1;
    n2 = n;
    cin >> n;
    while (n != 0) {
        if(pr > n && pr > popr) {
            wr++;
        }
        if(pr < n && pr < popr) {
            d++;
        }
        popr = pr;
        pr = n;
        cin >> n;
    }
    if(pr < popr && pr < n1) {
        d++;
    }
    if(pr > popr && pr > n1) {
        wr++;
    }
    if(n1 < pr && n1 < n2) {
        d++;
    }
    if(n1 > pr && n1 > n2) {
        wr++;
    }
    cout << wr << " " << d;


    return 0;
}
