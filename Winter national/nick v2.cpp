#include <iostream>
using namespace std;

int main () {
    char a;
    bool ch = false;
    while (true){
        cin >> a;
        if (isalpha(a)){
            if (a < 91 && ch == true) a = tolower(a);
            if (a > 91 && ch == false) a = toupper(a);
        }
        ch = !ch;
        cout << a;
        if (a == '.') break;
    }
    return 0;
}
