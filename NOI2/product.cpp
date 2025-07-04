#include <bits/stdc++.h>
using namespace std;

vector <int> divide;

void del (int num) {
    divide.clear();
    int i;
    for(i = 2; i < sqrt(num); i++) {
        if(num % i == 0) {
            divide.push_back(i);
            divide.push_back(num / i);
        }
    }
    if(i * i == num) divide.push_back(i);
    return;
}

bool ispr (int num) {
    int i;
    for(i = 2; i < sqrt(num); i++) {
        if(num % i == 0) return false;
    }
    if(i * i == num) return false;
    return true;
}

bool dif2 (int num) {
    int brpr = 0, br = 0;
    vector <int> pr;
    for(int i = 0; i < divide.size(); i++) {
        if(ispr(divide[i])) {
            brpr++;
            pr.push_back(divide[i]);
        }
    }
    for(int i = 0; i < pr.size(); i++) {
        while(num % pr[i] == 0) {
            num /= pr[i];
            br++;
        }
    }
    if(pr.size() != 2 || br != 2) return false;
    if(pr[0] == pr[1]) return false;
    return true;
}

bool dif34 (int num) {
    int brpr = 0, br = 0;
    vector <int> pr;
    for(int i = 0; i < divide.size(); i++) {
        if(ispr(divide[i])) {
            brpr++;
            pr.push_back(divide[i]);
        }
    }
    if(pr.size() > 4) return false;
    for(int i = 0; i < pr.size(); i++) {
        while(num % pr[i] == 0) {
            num /= pr[i];
            br++;
        }
    }
    if(br == 3 || br == 4) return true;
    return false;
}


int main () {
    int a, b, br1 = 0, br2 = 0, br3 = 0, br4 = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        if(i % 2 == 0 || i % 3 == 0) br1++;
        del(i);
        if(ispr(i)) br2++;
        if(dif2(i)) br3++;
        if(dif34(i)) br4++;
    }
    cout << br1 << '\n' << br2 << '\n' << br3 << '\n' << br4;
    return 0;
}
