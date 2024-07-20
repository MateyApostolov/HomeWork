#include <iostream>
using namespace std;

int main () {
    int a, brc = 0, brd = 1;
    cin >> a;
    for(int i = 1; i <= a; i++) brc += i;
    while((brd + 2) * 7 <= brc) brd += 2;
    cout << brd << " " << brc - brd * 7;
    return 0;
}
