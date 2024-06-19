#include <bits/stdc++.h>
using namespace std;

int d[10][15] = {{1,1,1,1,0,1,1,0,1,1,0,1,1,1,1},
                 {0,0,1,0,0,1,0,0,1,0,0,1,0,0,1},
                 {1,1,1,0,0,1,1,1,1,1,0,0,1,1,1},
                 {1,1,1,0,0,1,1,1,1,0,0,1,1,1,1},
                 {1,0,1,1,0,1,1,1,1,0,0,1,0,0,1},
                 {1,1,1,1,0,0,1,1,1,0,0,1,1,1,1},
                 {1,1,1,1,0,0,1,1,1,1,0,1,1,1,1},
                 {1,1,1,0,0,1,0,0,1,0,0,1,0,0,1},
                 {1,1,1,1,0,1,1,1,1,1,0,1,1,1,1},
                 {1,1,1,1,0,1,1,1,1,0,0,1,1,1,1}};

int calc(int n1, int n2){
    int b = 0;
    for(int i = 0; i < 15; i++)
        if(d[n1][i] != d[n2][i]) b++;
    return b;
}

int main () {
    int num1, num2, br = 0;
    cin >> num1 >> num2;
    br += calc(num1/10, num2/10);
    br += calc(num1%10, num2%10);
    cout << br;
    return 0;
}
