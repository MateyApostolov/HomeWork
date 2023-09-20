#include <iostream>
using namespace std;

int main () {
    int uw1, uw2, uh1, uh2;
    int p1w1, p1w2, p1h1, p1h2;
    int p2w1, p2w2, p2h1, p2h2;
    cin >> uw1 >> uw2 >> uh1 >> uh2;
    cin >> p1w1 >> p1w2 >> p1h1 >> p1h2;
    cin >> p2w1 >> p2w2 >> p2h1 >> p2h2;
    int uw, uh, p1w, p1h, p2w, p2h;
    uw = uw1 * 10 + uw2;
    uh = uh1 * 10 + uh2;
    p1w = p1w1 * 10 + p1w2;
    p1h = p1h1 * 10 + p1h2;
    p2w = p2w1 * 10 + p2w2;
    p2h = p2h1 * 10 + p2h2;
    if (uw > uh) swap (uw,uh);
    if (p1w > p1h) swap (p1w,p1h);
    if (p2w > p2h) swap (p2w,p2h);
    if (p2w < p1w){
        swap(p1w, p2w);
        swap(p1h, p2h);
    }
    if (uw + 10 <= p1w && uh <= p1h) {
        cout << 1 << endl;
        cout << p1w1 << "." << p1w2 << " " << p1h1 << "." << p1h2;
        return 0;
    }
    if (uw + 10 <= p2w && uh <= p1h) {
        cout << 2 << endl;
        cout << p2w1 << "." << p2w2 << " " << p2h1 << "." << p2h2;
        return 0;
    }
    cout << 0;
    return 0;
}
