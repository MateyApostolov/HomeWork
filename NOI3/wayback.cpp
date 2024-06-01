#include <bits/stdc++.h>
using namespace std;

int main () {
    string ws, wgrad;
    cin >> ws >> wgrad;
    int t1, t2, n, wmns, mns;
    cin >> t1 >> t2 >> n;
    string s, wid, grad;
    wmns = ((ws[0] - '0') * 10 + (ws[1] - '0')) * 60 + (ws[3] - '0') * 10 + (ws[4] - '0');
    vector <pair<int,pair<string, string>>> iz;
    for(int i = 0; i < n; i++) {
        cin >> s >> wid;
        mns = ((s[0] - '0') * 10 + (s[1] - '0')) * 60 + (s[3] - '0') * 10 + (s[4] - '0');
        bool bgr  = false;
        do {
            cin >> grad;
            if(grad == wgrad) bgr = true;
        } while(grad != "EOR");
        if(wid == "t" && wmns + t1 <= mns - 5 && bgr) iz.push_back(make_pair(mns, make_pair("train", s)));
        if(wid == "b" && wmns + t2 <= mns - 5 && bgr) iz.push_back(make_pair(mns, make_pair("bus", s)));
    }
    if(iz.size() == 0) {
        cout << "No direct connection!";
        return 0;
    }
    int h = iz.size();
    sort(iz.begin(), iz.end());
    for(int i = 0; i < min(3, h); i++) cout << iz[i].second.first << " " << iz[i].second.second << "\n";
    return 0;
}

