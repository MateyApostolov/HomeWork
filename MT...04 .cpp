#include <iostream>
using namespace std;

int main () {
     int a;
     cout << "The number is ";
     cin >> a;
     cout << "This number is ";
     if (a % 2 != 0) {
        cout << "odd";
     } else {
         cout << "even";
     }
     if ( a >= 10 ) cout << endl << "The number is more that 1 digit";
     else  cout << endl << "The number is with only 1 digit";

     return 0;
 }
