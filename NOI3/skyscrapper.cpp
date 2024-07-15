#include <iostream>
using namespace std;

const int maxn = 100000;
int n, a[maxn], b[maxn];

bool ist () {
    for(int i = 1; i < n; i++) if(a[i] > a[i - 1] || b[i] > b[i - 1]) return false;
    return true;
}

void rot1 (int i) {
    swap(a[i], b[i]);
    if(ist()) {
        cout << 1 << "\n" << i + 1;
        exit(0);
    }
    swap(a[i], b[i]);
}

void rot2 (int i1, int i2) {
    swap(a[i1], b[i1]);
    swap(a[i2], b[i2]);
    if(ist()) {
        cout << 2 << "\n" << i1 + 1 << " " << i2 + 1;
        exit(0);
    }
    swap(a[i1], b[i1]);
    swap(a[i2], b[i2]);
}

void rot3 (int i1, int i2, int i3) {
    swap(a[i1], b[i1]);
    swap(a[i2], b[i2]);
    swap(a[i3], b[i3]);
    if(ist()) {
        cout << 3 << "\n" << i1 + 1 << " " << i2 + 1 << " " << i3 + 1;
        exit(0);
    }
    swap(a[i1], b[i1]);
    swap(a[i2], b[i2]);
    swap(a[i3], b[i3]);
}

int main () {
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for(int i = 1; i < n; i++)
        if(min(a[i - 1], b[i - 1]) < min(a[i], b[i]) || max(a[i - 1], b[i - 1]) < max(a[i], b[i])) {
            cout << "Impossible!";
            return 0;
        }
    if(ist()) {
        cout << 0;
        return 0;
    }
    for(int i = 0; i < n; i++) rot1(i);
    for(int i1 = 0; i1 < n - 1; i1++)
        for(int i2 = i1 + 1; i2 < n; i2++) rot2(i1, i2);
    for(int i1 = 0; i1 < n - 2; i1++)
        for(int i2 = i1 + 1; i2 < n - 1; i2++)
            for(int i3 = i2 + 1; i3 < n; i3++) rot3(i1, i2, i3);
    return 0;
}
