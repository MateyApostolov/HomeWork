#include <iostream>
using namespace std;

int main () {
    int hn1, mn1, hk1, mk1;
    cin >> hn1 >> mn1 >> hk1 >> mk1;
    int hn2, mn2, hk2, mk2;
    cin >> hn2 >> mn2 >> hk2 >> mk2;
    int hn3, mn3, hk3, mk3;
    cin >> hn3 >> mn3 >> hk3 >> mk3;
    int wn1 = hn1 * 60 + mn1;
    int wk1 = hk1 * 60 + mk1;
    int w1 = wk1 - wn1;
    if (w1 < 0) {
        w1 = w1 + 24 * 60;
    }
    int wn2 = hn2 * 60 + mn2;
    int wk2 = hk2 * 60 + mk2;
    int w2 = wk2 - wn2;
    if (w2 < 0) {
        w2 = w2 + 24 * 60;
    }
    int wn3 = hn3 * 60 + mn3;
    int wk3 = hk3 * 60 + mk3;
    int w3 = wk3 - wn3;
    if (w3 < 0) {
        w3 = w3 + 24 * 60;
    }
    int nmw = min(w1, min(w2, w3));
    int ngw = max(w1, max(w2, w3));
    cout << nmw / 60 << ":";
    if(nmw % 60 < 10) {
        cout << 0;
    }
    cout << nmw % 60 << endl;
    cout << ngw / 60 << ":";
    if(ngw % 60 < 10) {
        cout << 0;
    }
    cout << ngw % 60;


    return 0;
}
