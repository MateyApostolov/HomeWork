#include <iostream>
using namespace std;

int main () {
    int n, nc, pr, sum = 0, maxsum = 0;
    cin >> n;
    cin >> nc;
    sum += nc;
    bool nm = true;
    for(int i = 1; i < n; i++) {
        pr = nc;
        cin >> nc;
        if(nc == pr) {
            maxsum = max(maxsum, sum);
            sum = nc;
        } else if( !nm && nc > pr) {
             maxsum = max(sum, maxsum);
             nm = true;
            sum = pr + nc;
        } else sum += nc;
        if(nc > pr) nm = true;
        else nm = false;
        pr = nc;
    }
    maxsum = max(sum, maxsum);
    cout << maxsum;
    return 0;
}
