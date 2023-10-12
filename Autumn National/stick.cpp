#include <iostream>
using namespace std;

int main () {
    int n1, k1;
    cin >> n1 >> k1;
    int n2, k2;
    cin >> n2 >> k2;
    int n3, k3;
    cin >> n3 >> k3;
    int z = 3;
    if (k1 >= n2) {
        z--;
    }
    if (k2 >= n3) {
        z--;
    }
    int pr1 = k1 - n1;
    int pr2 = k2 - n2;
    int pr3 = k3 - n3;
    if (min(pr1, min(pr2, pr3)) == 5 && max(pr1, max(pr2, pr3)) == 20) {
        cout << 1 << endl;
        cout << min(pr1, min(pr2, pr3)) << " ";
        cout << max(pr1, max(pr2, pr3));
        return 0;
    }
    cout << z << endl;
    cout << min(pr1, min(pr2, pr3)) << " ";
    cout << max(pr1, max(pr2, pr3));

    return 0;
}
