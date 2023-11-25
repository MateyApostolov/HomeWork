#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int nch, pr, r = 1, ngr = 0, sumr, ngsum = 0, ngi = 1;
    cin >> pr;
    sumr = pr;
    for(int i = 1; i < n - 1; i++) {
        cin >> nch;
        if(nch > pr) {
            r++;
            sumr += nch;
        }else {
            if(ngr < r) {
                ngr = r;
                ngsum = sumr;
            }
            r = 1;
            sumr = nch;
        }
        pr = nch;
    }
    if(ngr < r) {
        ngr = r;
        ngsum = sumr;
    }
    cout << ngr << endl;
    for(int i = 1; i <= ngsum / 2; i++)
        if(ngsum % i == 0) ngi = i;

    cout << ngi;
    return 0;
}
