#include <bits/stdc++.h>
using namespace std;

int main () {
    stack <int> mystack;
    stack <int> flop;
    stack <int> bar;
    int a, n, i;
    mystack.push(111);
    mystack.push(112);
    mystack.push(113);
    mystack.push(114);
    mystack.push(115);
    cin >> a >> n >> i;
    flop.push(a);
    flop.push(n);
    flop.push(i);
    flop.push(n);

    bar.push(n);
    bar.push(a);
    bar.push(i);

    cout << "Size of mystack: " << mystack.size() << "\n Size of flop: " << flop.size() << "\n Size of bar: " << bar.size();
    swap(flop, bar);
    cout << "\n Size of flop: " << flop.size() << "\n Size of bar: " << bar.size();
    return 0;
}
