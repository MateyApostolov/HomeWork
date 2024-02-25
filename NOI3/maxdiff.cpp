#include <iostream>
using namespace std;

int main () {
    int n, maxd = 0;
    cin >> n;
    char s[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int h = i; h < n; h++) {
            if(s[i] == s[h]) sum++;
            else sum--;
            maxd = max(maxd, sum);
        }
    }
    cout << maxd;
    return 0;
}
