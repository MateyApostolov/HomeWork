#include <iostream>
using namespace std;

int main () {
    int nc, maxh = 0;
    char name, ans;
    for(int i = 0; i < 5; i++) {
        cin >> name >> nc;
        if(maxh <= nc) {
            maxh = nc;
            ans = name;
        }
    }
    cout << ans;

    return 0;
}
