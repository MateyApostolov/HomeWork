#include <iostream>
using namespace std;

int main () {
    int N, K;
    cin >> N >> K;
    int T1, T2, T3, T4, T5;
    cin >> T1 >> T2 >> T3 >> T4 >> T5;
    if (K == N) {
        cout << max (T1, max(T2,max (T3, max (T4, T5))));
        return 0;
    }
    if (K == 1) {
        cout << T1 + T2 + T3 + T4 + T5;
    }
    if (K == 2) {
        if (N == 3) {
            int w1, w2, w3;
            w1 = max(T1 + T2, T3);
            w2 = max(T1 + T3, T2);
            w3 = max(T2 + T3, T1);
            cout << min(w1, min(w2, w3));
        }
        if (N == 4) {
            int w1, w2, w3;
            w1 = max(T1 + T2, T3 + T4);
            w2 = max(T1 + T3, T2 + T4);
            w3 = max(T2 + T3, T1 + T4);
            cout << min(w1, min(w2, w3));
        }
        if (N == 5) {
            int w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;
            w1 = max(T1 + T2, T3 + T4 + T5);
            w2 = max(T1 + T3, T2 + T4 + T5);
            w3 = max(T1 + T4, T2 + T3 + T4);
            w4 = max(T1 + T5, T2 + T3 + T4);
            w5 = max(T2 + T3, T1 + T4 + T5);
            w6 = max(T2 + T4, T1 + T3 + T5);
            w7 = max(T2 + T5, T1 + T3 + T4);
            w8 = max(T3 + T4, T1 + T2 + T5);
            w9 = max(T3 + T5, T1 + T2 + T4);
            w10 = max(T4 + T5, T1 + T2 + T3);
            cout << min(w1,min(w2,min(w3,min(w4,min(w5,min(w6,min(w7,min(w8,min(w9,w10)))))))));
        }
    }
    if (K == 3) {
        if (N == 4) {
            int w1, w2, w3, w4, w5, w6;
            w1 = max(T1 + T2,max(T3, T4));
            w2 = max(T1 + T3,max(T2, T4));
            w3 = max(T1 + T4,max(T2, T3));
            w4 = max(T2 + T4,max(T1, T3));
            w5 = max(T2 + T3,max(T1, T4));
            w6 = max(T3 + T4,max(T1, T2));
            cout << min(w1, min(w2, min(w3, min(w4, min(w5, w6)))));
        }
        if (N == 5) {
            int w1, w2, w3;
            int T = max(T1, max(T2, max(T3, max(T4, T5))));
            if (T2 == T) {
                swap(T2, T1);
            }
            if (T3 == T) {
                swap(T3, T1);
            }
            if (T4 == T) {
                swap(T4, T1);
            }
            if (T5 == T) {
                swap(T5, T1);
            }
            w1 = max(T1,max(T2 + T3, T4 + T5));
            w2 = max(T1,max(T2 + T4, T3 + T5));
            w3 = max(T1,max(T3 + T4, T2 + T5));
            cout << min(w1, min(w2, w3));
        }

    }
    if (K == 4) {
        int w1, w2, w3, w4, w5, w6, w7, w8, w9, w10;
        w1 = max(T1 + T2, max(T3,max(T4, T5)));
        w2 = max(T1 + T3, max(T2,max(T4, T5)));
        w3 = max(T1 + T4, max(T2,max(T3, T5)));
        w4 = max(T1 + T5, max(T2,max(T3, T4)));
        w5 = max(T2 + T3, max(T1,max(T4, T5)));
        w6 = max(T2 + T4, max(T1,max(T3, T5)));
        w7 = max(T2 + T5, max(T1,max(T3, T4)));
        w8 = max(T3 + T4, max(T1,max(T2, T5)));
        w9 = max(T3 + T5, max(T1,max(T2, T3)));
        w10= max(T4 + T5, max(T1,max(T2, T3)));
        cout << min(w1,min(w2,min(w3,min(w4,min(w5,min(w6,min(w7,min(w8,min(w9,w10)))))))));
    }
    return 0;
}
