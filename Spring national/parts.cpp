#include <iostream>
using namespace std;

int main () {
    int n, sum = 0, psum = 0;
    cin >> n;
    int nc[n];
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        sum += nc[i];
    }
    for(int i = 2; i <= sum / 2; i++) {
        if(sum % i == 0) {
            for(int x = 0; x < n; x++) {
                psum += nc[x];
                if(psum > sum / i) break;
                if(psum == sum / i) psum = 0;
            }
            if(psum == 0) {
                cout << i;
                return 0;
            }
            psum = 0;
        }
    }
    cout << 0;

    return 0;
}
