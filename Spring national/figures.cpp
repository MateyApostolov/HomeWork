#include <iostream>
using namespace std;

int brc (long long n) {
    int br = 0;
    while(n > 0) {
        br++;
        n /= 10;
    }
    return br;
}

int main () {
    long long n, k;
    cin >> n >> k;
    ///cout << n << " " << k;
    bool f1 = false, f2 = false, f3 = false;
    if(n % 2 == 0 && n % 3 == 0) f1 = true;
    if(n % 2 != 0) f2 = true;
    if(brc(n) % 2 != 0) f3 = true;
    if(f1) {
        int h = 1, sum;
        for(int r = 0; r < k; r++) {
            for(int ko = 0; ko < k; ko++) {
                sum = h + ko;
                if(sum >= 10) sum %= 10;
                cout << sum << " ";
            }
            cout << "\n";
            h++;
        }
    }
    if(f2) {
        int sum;
        for(int r = 0; r < k; r++) {
            for(int ko = 0; ko < k; ko++) {
                if(ko < r) cout << "  ";
                else {
                    sum = ko + 1 - r;
                    if(sum >= 10) sum %= 10;
                    cout << sum << " ";
                }
            }
            cout << "\n";
        }
    }
    if(f3) {
        int sum, h;
        for(int r = 0; r < k; r++) {
            for(int ko = 0; ko < k * 2; ko++) {
                if(ko < k) {
                    if(ko < r) cout << "  ";
                    else {
                        sum = ko + 1 - r;
                        if(sum >= 10) sum %= 10;
                        if(ko == k - 1) h = sum;
                        cout << sum << " ";
                    }
                }else {
                    if(ko < 2 * k - r) {
                        sum = h - (ko - k);
                        if(sum < 0) sum += 10;
                        if(sum < 0) sum += 10;
                        cout << sum << " ";
                    }
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
