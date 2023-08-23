#include <iostream>
using namespace std;

int main () {
  int n;
  cin >> n;
  int a, b;
  cin >> a, b;
  for (int i = 1; i <= n; i++) {
    if (i % a == 0) {
        cout << i << " ";
    }
  }
  cout << endl;
  for (int i = 1; i <= n; i++) {
    if (i % a != 0) {
        cout << i << " ";
    }
  }


    return 0;
}

