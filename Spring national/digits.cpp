#include <iostream>
using namespace std;

int aft[10], bef[10];

int main () {
    string s;
    cin >> s;
    long long br = 0, h;
    for(int i = 2; i < s.size(); i++) aft[s[i] - '0']++;
    for(int i = 1; i < s.size() - 1; i++) {
        h = s[i - 1] - '0';
        bef[h]++;
        h = s[i] - '0';
        long long sumaft = 0, sumbef = 0;
        for(int i1 = h + 1; i1 < 10; i1++) sumaft += aft[i1];
        for(int i1 = 1; i1 < h; i1++) sumbef += bef[i1];
        br += sumbef * sumaft;
        h = s[i + 1] - '0';
        aft[h]--;
    }
    cout << br;

    return 0;
}
