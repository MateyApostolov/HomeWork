#include <iostream>
using namespace std;

int main () {
    string st;
    cin >> st;
    bool ch = false;
    for(int i = 0; i < st.length(); i++){
        if (isalpha(st[i])){
            if (st[i] < 91 && ch == true) st[i] = tolower(st[i]);
            if (st[i] > 91 && ch == false) st[i] = toupper(st[i]);
        }
//        if(st[i] >= 65 && st[i] <= 90 && ch == true) st[i] += 32;
//        if(st[i] >= 97 && st[i] <= 122 && ch == false) st[i] -= 32;
        ch = !ch;
    }
    cout << st;
    return 0;
}
