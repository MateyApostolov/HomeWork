#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, sum = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i1 = 1; i1 <= n; i1++) {
        ///cout << "\n";
        if(n / i1 < 2) break;
        vector <string> gr;
        string help = "";
        for(int i2 = 1; i2 <= i1 * (n / i1); i2++) {
            help += s[i2 - 1];
            if(i2 % (n / i1) == 0) {
                gr.push_back(help);
                help = "";
            }
        }
        ///for(int i2 = 0; i2 < gr.size(); i2++) cout << gr[i2] << " ";
        ///cout << "\n";
        for(int i2 = 0; i2 < gr.size(); i2++) {
            int hw = gr[i2][n / i1 / 2 - 1] - '0';
            ///cout << hw << " ";
            if(hw == 0) continue;
            for(int i3 = hw - 1; i3 < gr[i2].size(); i3 += hw) {
                gr[i2][i3] = char(((gr[i2][i3] - '0') + hw) % 10 + '0');
            }
        }
        ///cout << "\n";
        int ind = 0;
        for(int i2 = 0; i2 < gr.size(); i2++)
            for(int i3 = 0; i3 < gr[i2].size(); i3++) {
                s[ind] = gr[i2][i3];
                ind++;
            }
        ///cout << s << "\n";
    }
    for(int i = 0; i < n; i++) {
        sum += s[i] - '0';
        if(s[i] == '1') sum++;
    }
    cout << sum;
    return 0;
}
