#include <iostream>
using namespace std;

int main () {
    int n, nch, brr = 0, brp = 1, pr, ngbrp = 0;
    cin >> n;
    cin >> nch;
    pr = nch;
    for(int i = 1; i < n; i++) {
        cin >> nch;
        if(nch == pr + 1) brp++;
        else {
            if(ngbrp < brp) ngbrp = brp;
            brp = 1;
            brr++;
        }
        pr = nch;
    }
    if(ngbrp < brp) ngbrp = brp;
    cout << brr << " " << ngbrp;


    return 0;
}
