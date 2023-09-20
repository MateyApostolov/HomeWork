#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "First number = ";
    cin >> a;
    cout << "Second number = ";
    cin >> b;
    cout << "The sum is " << a + b << endl;
    cout << "The difference is " << a - b << endl;
    if(a == b){
        cout << "Both numbers are equal!!!";
    } else {
        cout << "The greater number is ";
        if (a > b){
            cout << a;
        } else {
            cout << b;
        }
    }
    return 0;
}
