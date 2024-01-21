#include <iostream>
using namespace std;

int main () {
    int n, c, ng = 0, wtng = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> c;
        if(c > ng) {
            wtng = ng;
            ng = c;
        }
        else if(c > wtng && c < ng) wtng = c;
    }
    cout << wtng;

    return 0;
}
