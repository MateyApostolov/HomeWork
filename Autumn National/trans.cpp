#include <iostream>
using namespace std;

int dost1(int w){
    int o;
    if(w < 5000) o = 400;
    else if(w < 10000) o = 700;
    else if(w < 20000) o = 1200;
    else if(w < 30000) o = 1700;
    else o = (w / 1000) * 57;
    return o;
}

int dost2(int w){
    int o;
    if(w < 2000) o = 90 + (w / 1000) * 90;
    else if(w < 5000) o = 100 + (w / 1000) * 85;
    else if(w < 20000) o = 125 + (w / 1000) * 80;
    else if(w < 40000) o = 325 + (w / 1000) * 70;
    else o = 925 + (w / 1000) * 55;
    return o;
}

int main () {
    int a, b;
    cin >> a >> b;
    int st = min(dost1(a), dost2(a)) + min(dost1(b), dost2(b));
    cout << st / 100 << "." << st % 100;
    if(st % 100 < 10) cout << "0";

    return 0;
}
