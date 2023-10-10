#include <iostream>
using namespace std;

int main () {
    long long ma, sa, ia;
    cin >> ma >> sa >> ia;
    long long mb, sb, ib;
    cin >> mb >> sb >> ib;
    long long mc, sc, ic;
    cin >> mc >> sc >> ic;
    ia = 5 - ia;
    ib = 5 - ib;
    ic = 5 - ic;
    long long wa = ma * 60 + sa + 30 * ia;
    long long wb = mb * 60 + sb + 30 * ib;
    long long wc = mc * 60 + sc + 30 * ic;
    long long nm = min(wa, min(wb, wc));
    if (nm == wa) {
        cout << nm / 60 << " " << nm % 60 << " A";
    }
    if (nm == wb) {
        cout << nm / 60 << " " << nm % 60 << " B";
    }
    if (nm == wc) {
        cout << nm / 60 << " " << nm % 60 << " C";
    }

    return 0;
}
