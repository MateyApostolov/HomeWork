#include <iostream>
using namespace std;

int main () {
    char s[8];
    for(int i = 0; i < 8; i++) {
        cin >> s[i];
    }
    int s3 = (s[2] - '0') * (s[3] - '0') * (s[4] - '0') * (s[5] - '0');
    if ((s[0] + s[1] + s[6] + s[7]) / 10 == s3) {
        cout << "Yes " << s3;
        return 0;
    }
    cout << "No";

    return 0;
}
