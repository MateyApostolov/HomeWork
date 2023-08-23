#include <iostream>
using namespace std;

int main () {
   int a, b, c, d;
   cout << "Number ? ";
   cin >> a;
   cout << "Second number ? ";
   cin >> b;
   cout << "Third number ? ";
   cin >> c;
   cout << "Forth number ? ";
   cin >> d;
   cout << max(a,max(b,max(c,d)));
   int result;
   result = max(a,b);
   cout << result;


    return 0;

}
