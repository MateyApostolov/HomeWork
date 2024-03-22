#include <bits/stdc++.h>
using namespace std;

int main () {
    string st = "", input;
    getline(cin, input);
    vector <string> res, ok;
    for(int i = 0; i < input.size(); i++) {
        if(input[i] == '!') {
            res.push_back(st);
            for(int x = 0; x < res.size(); x++) reverse(res[x].begin(), res[x].end());
            res[res.size() - 1] += '!';
            for(int y = 0; y < res.size(); y++) ok.push_back(res[y]);
            res.clear();
            st = "";
            continue;
        }
        if(input[i] == '?') {
            res.push_back(st);
            reverse(res.begin(), res.end());
            res[res.size() - 1] += '?';
            for(int y = 0; y < res.size(); y++) ok.push_back(res[y]);
            res.clear();
            st = "";
            continue;
        }
        if(input[i] == ' ') {
            if(st != "") res.push_back(st);
            st = "";
            continue;
        }
        st += input[i];
    }
    for(int i = 0; i < ok.size(); i++) cout << ok[i] << " ";
    return 0;
}
