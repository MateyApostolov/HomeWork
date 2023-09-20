#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "First number : ";
    cin >> a;
    cout << "Second number : ";
    cin >> b;
    cout << "Swapping ..." << endl;

//   swap(a,b);

//    c = a; a = b; b = c;
    a = a + b;
    b = a - b;
    a = a - b;



    cout << a << " " << b;
    return 0;

}
