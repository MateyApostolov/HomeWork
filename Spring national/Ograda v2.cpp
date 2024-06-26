#include <bits/stdc++.h>
using namespace std;

int main () {
    int t, k, l, r, mb = 0; cin >> t >> k;
    vector<pair<int,int>> in;
    for(int i = 0; i < t; i++){
        cin >> l >> r;
        bool p = true;
        for(int j = 0; j < in.size(); j++){
            if(l >= in[j].first && r <= in[j].second){
                p = false;
                break;
            }
            if(r >= in[j].first && r <= in[j].second && l < in[j].first){
                in[j].first = l;
                p = false;
                break;
            }
            if(l <= in[j].first && r >= in[j].second){
                in[j].first = l;
                in[j].second = r;
                p = false;
                break;
            }
            if(l >= in[j].first && l <= in[j].second && r >= in[j].second){
                in[j].second = r;
                p = false;
                break;
            }
        }
        if(p)in.push_back({l, r});
    }
    for(int i = 0; i < in.size(); i++) mb += (in[i].second / k - (in[i].first - 1) / k);
    cout << in.size() << " " << mb;
    return 0;
}
