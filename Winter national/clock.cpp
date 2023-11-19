#include <iostream>
using namespace std;

int main () {
    char a;
    int nh1, nh2, nm1, nm2, ns1, ns2;
    int kh1, kh2, km1, km2, ks1, ks2;
    cin >> a; nh1 = a - '0';
    cin >> a; nh2 = a - '0';
    cin >> a; nm1 = a - '0';
    cin >> a; nm2 = a - '0';
    cin >> a; ns1 = a - '0';
    cin >> a; ns2 = a - '0';
    cin >> a; kh1 = a - '0';
    cin >> a; kh2 = a - '0';
    cin >> a; km1 = a - '0';
    cin >> a; km2 = a - '0';
    cin >> a; ks1 = a - '0';
    cin >> a; ks2 = a - '0';
    int prh, prm , prs;
    cin >> prh >> prm >> prs;
    int prob = prh * 3600 + prm * 60 + prs;
    int H, M, S;
    bool t = true;
    for(int i = 0; i <= 1; i++) {
        int hh = i * 10 + nh2;
        if(hh > 12 || hh == 0) continue;
        for(int k = 0; k <= 9; k++) {
            for(int r = 0; r <= 5; r++) {
                int nob = (i * 10 + nh2) * 3600 + (nm1 * 10 + k) * 60 + r * 10 + ns2;
                int kob = nob + prob;
                if(kob > 13 * 60 * 60) kob -= 12 * 60 * 60;
                H = kob / 3600;
                M = (kob % 3600) / 60;
                S = (kob % 3600) % 60;
                if(H % 10 != kh2) continue;
                if(M / 10 != km1) continue;
                if(S % 10 != ks2) continue;
                cout << i << nh2 << ":" << nm1 << k << ":" << r << ns2 << " ";
                cout << H / 10 << H % 10 << ":" << M / 10 << M % 10 << ":" << S / 10 << S % 10 << endl;
                t = false;
            }
        }
    }
    if(t) cout << "Impossible";


    return 0;
}
