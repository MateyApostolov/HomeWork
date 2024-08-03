#include <iostream>
using namespace std;

int n, d;
string m;

void print() {
    int brd = 0;
    if(m == "February") brd = 31;
    if(m == "March") brd = 59;
    if(m == "April") brd = 90;
    if(m == "May") brd = 120;
    if(m == "June") brd = 151;
    if(m == "July") brd = 181;
    if(m == "August") brd = 212;
    if(m == "September") brd = 243;
    if(m == "October") brd = 273;
    if(m == "November") brd = 304;
    if(m == "December") brd = 334;
    brd += d;
    brd %= 7;
    if(brd == 1) cout << m << " " << d << " Thursday\n";
    if(brd == 2) cout << m << " " << d << " Friday\n";
    if(brd == 3) cout << m << " " << d << " Saturday\n";
    if(brd == 4) cout << m << " " << d << " Sunday\n";
    if(brd == 5) cout << m << " " << d << " Monday\n";
    if(brd == 6) cout << m << " " << d << " Tuesday\n";
    if(brd == 0) cout << m << " " << d << " Wednesday\n";
}

int main () {
    cin >> n;
    cout << 2015 << "\n";
    for(int i = 0; i < n; i++) {
        cin >> m >> d;
        print();
    }
    return 0;
}
