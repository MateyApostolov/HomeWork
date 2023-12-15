#include <iostream>
using namespace std;

int br[26];

int main () {
    char a;
    while (cin >> a) br[a-'a']++;
    for (int i = 0; i < 26; i++)
       // if (br[i] > 1)
        cout << char(i + 'a') << " " << br[i] << endl;
    return 0;
}
