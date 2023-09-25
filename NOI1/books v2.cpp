#include <bits/stdc++.h>
using namespace std;

int main () {

    int N;
    cin >> N;

    pair<int,int> mm[N];

    for (int i = 0; i < N; i++)
        cin >> mm[i].first >> mm[i].second;

    sort(mm, mm+N);

    for (int i = N-1; i >= 0; i--)
        cout << mm[i].first << " " << mm[i].second << endl;

    return 0;
}
