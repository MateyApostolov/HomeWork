#include <bits/stdc++.h>
using namespace std;

const int maxn = 642;
char d2[maxn][maxn];
int shd[maxn][maxn];

vector<pair<int, int>> graph[maxn][maxn];

int main () {
    int n, m, sx, sy, ans = INT_MAX;
    cin >> n >> m;
    for(int r = 0; r <= n + 1; r++) {
        for(int c = 0; c <= m + 1; c++) {
            shd[r][c] = INT_MAX;
            if(r == 0 || r == n + 1 || c == 0 || c == m + 1) {
                d2[r][c] = '*';
                continue;
            }
            cin >> d2[r][c];
            if(d2[r][c] == '#') {
                sx = r;
                sy = c;
            }
            graph[r][c].push_back({r + 1, c});
            graph[r][c].push_back({r, c + 1});
            graph[r][c].push_back({r - 1, c});
            graph[r][c].push_back({r, c - 1});
        }
    }
    priority_queue <pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> qu;
    qu.push({0, {sx, sy}});
    shd[sx][sy] = 0;
    while(!qu.empty()) {
        int x = qu.top().second.first, y = qu.top().second.second, dist = qu.top().first;
        qu.pop();
        for(auto b : graph[x][y]){
            int bx = b.first, by = b.second;
            if(d2[bx][by] == '*' || d2[bx][by] == '#') continue;
            int nd = d2[bx][by] - 'A' + 1 + dist;
            if(nd < shd[bx][by]) {
                shd[bx][by] = nd;
                qu.push({nd, {bx, by}});
            }
        }
    }
    for(int r = 0; r <= n; r++) {
        for(int c = 0; c <= m; c++) {
            if(r == 1 || r == n || c == 1 || c == m) ans = min(ans, shd[r][c]);
        }
    }
    cout << ans;
    return 0;
}
