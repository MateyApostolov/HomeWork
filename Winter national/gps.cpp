#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int ch, r = 1, ngr = 1, pr;
    cin >> pr;
    for(int i = 1; i < n; i++) {
        cin >> ch;
        if(ch > pr) r++;
        else {
            ngr = max(r, ngr);
            r = 1;
        }
        pr = ch;
    }
    ngr = max(r, ngr);
    cout << ngr;

    return 0;
}
