#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  int a, c;
  cin >> a >> c;
  for (int i = c; i <= n; i = i + a) {
        cout << i << " ";
  }



    return 0;
}

