#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a[5];
    for(int i = 0; i < 5; i++) cin >> a[i];
    sort(a, a + 5);
    int k;
    cin >> k;
    long long dif;
    long long sum = a[0] + a[1] + a[2] + a[3] + a[4];
    if(sum < k) {
        cout << 0;
        return 0;
    }
    while(k > 0) {
        dif = a[4] - a[3];
        if(dif > k) dif = k;
        if(dif == 0){
           if(k == 1) break;
           dif = a[3] - a[2];
           if(dif == 0) dif = 1;
           if(2 * dif > k) dif = k / 2;
           a[3] -= dif;
           a[4] -= dif;
           k -= 2 * dif;
//           cout << "- " << a[4] << " " << dif << endl;
        } else {
            a[4] -= dif;
            k -= dif;
 //           cout << "--- " << a[4] << endl;
        }

        sort(a, a + 5);
    }
    cout << a[4];

    return 0;
}
