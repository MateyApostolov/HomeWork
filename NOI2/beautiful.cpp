#include <iostream>
using namespace std;

int main () {
    int n, k;
    cin >> n >> k;
    long long nc = 1;
    for(int i = 1; i < n; i++) {
        nc *= 10;
    }
    for(long long i = nc; i < nc * 10; i++) {
        if(i % k == 0) {
            cout << i;
            return 0;
        }
    }
    cout << "NO";


    return 0;
}
