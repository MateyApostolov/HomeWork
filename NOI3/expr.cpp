#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
    getline(cin,s);
    long long sum = 0, h, hi = 0;
    vector <char> zn;
    stringstream ss;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '+' || s[i] == '-') {
            zn.push_back(s[i]);
            s[i] = ' ';
        }
    ss << s;
    ss >> sum;
    while(ss >> h) {
        if(zn[hi] == '+') sum += h;
        else sum -= h;
        hi++;
    }
    cout << sum;
    return 0;
}
