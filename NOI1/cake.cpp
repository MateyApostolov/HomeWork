#include <iostream>
using namespace std;

int main () {
    int g1, s1;
    cin >> g1 >> s1;
    int g2, s2;
    cin >> g2 >> s2;
    int g3, s3;
    cin >> g3 >> s3;
    int ngg = max(g1, max(g2, g3));
    int nmg = min(g1, min(g2, g3));
    if (ngg == g1 && nmg == g3) {
        cout << "1 2 3";
    }
    if (ngg == g1 && nmg == g2) {
        cout << "1 3 2";
    }
    if (ngg == g2 && nmg == g1) {
        cout << "2 3 1";
    }
    if (ngg == g2 && nmg == g3) {
        cout << "2 1 3";
    }
    if (ngg == g3 && nmg == g1) {
        cout << "3 2 1";
    }
    if (ngg == g3 && nmg == g2) {
        cout << "3 1 2";
    }


    return 0;
}
