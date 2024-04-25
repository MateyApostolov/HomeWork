 #include <iostream>
 using namespace std;

const int maxa = 30001;
int brr[maxa], pr[maxa], posr[maxa];

int main () {
     int n, p, brdr, elr;
     cin >> n;
     int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
     cin >> p;
     for(int i = 0; i < p; i++) {
        cin >> brdr;
        bool t[maxa] = {0};
        for(int x = 0; x < brdr; x++) {
            cin >> elr;
            if(!t[elr]) {
                t[elr] = true;
                brr[elr]++;
            }
            if(pr[elr] == 0) pr[elr] = i + 1;
            posr[elr] = i + 1;
        }
     }
     int q, qc;
     cin >> q;
     for(int i = 0; i < q; i++) {
        cin >> qc;
        cout << brr[a[qc - 1]] << " " << pr[a[qc - 1]] << " " << posr[a[qc - 1]] << "\n";
     }

    return 0;
 }
