#include <iostream>
using namespace std;

long long maxc (int n) {
    long long brn = n / 2 - 1 + n % 2, maxch = 0;
    for(int i = 0; i < n / 2; i++) maxch = maxch * 10 + 9;
    maxch = maxch * 10 + 1;
    for(int i = 0; i < brn; i++) maxch *= 10;
    return maxch;
}

long long minc (int n) {
    long long brn = n / 2 - 1 + n % 2, minch = 1;
    for(int i = 0; i < brn; i++) minch *= 10;
    for(int i = 0; i < n / 2; i++) minch = minch * 10 + 9;
    return minch;
}

int main () {
    int n;
    cin >> n;
    cout << maxc(n) - minc(n);
    return 0;
}
