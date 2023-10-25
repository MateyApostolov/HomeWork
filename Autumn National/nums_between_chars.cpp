#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    char a[4];
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    if(isdigit(a[0])) {
        if(isdigit(a[1])) {
            if(isdigit(a[2])) {
                if(isdigit(a[3])) {
                    cout << n * ((a[0] - '0') * 1000 + (a[1] - '0') * 100 + (a[2] - '0') * 10 + (a[3] - '0'));
                } else {
                    cout << n * ((a[0] - '0') * 100 + (a[1] - '0') * 10 + (a[2] - '0') * 1);
                }
            } else {
                if(isdigit(a[3])) {
                    cout << n * ((a[0] - '0') * 10 + (a[1] - '0') * 1) << endl;
                    cout << n * (a[3] - '0');
                } else {
                    cout << n * ((a[0] - '0') * 10 + (a[1] - '0'));
                }
            }
        } else {
           if(isdigit(a[2])) {
                if(isdigit(a[3])) {
                    cout << n * (a[0] - '0') << endl;
                    cout << n * ((a[2] - '0') * 10 + (a[3] - '0'));
                } else {
                    cout << n * (a[0] - '0') << endl;
                    cout << n * (a[2] - '0');
                }
            } else {
                if(isdigit(a[3])) {
                    cout << n * (a[0] - '0')<< endl;
                    cout << n * (a[3] - '0');
                } else {
                    cout << n * (a[0] - '0');
                }
            }
        }
    } else {
        if(isdigit(a[1])) {
            if(isdigit(a[2])) {
                if(isdigit(a[3])) {
                    cout << n * ( (a[1] - '0') * 100 + (a[2] - '0') * 10 + (a[3] - '0'));
                } else {
                    cout << n * ((a[1] - '0') * 10 + (a[2] - '0') * 1);
                }
            } else {
                if(isdigit(a[3])) {
                    cout << n * ((a[1] - '0') * 1) << endl;
                    cout << n * (a[3] - '0');
                } else {
                    cout << n * (a[1] - '0');
                }
            }
        } else {
           if(isdigit(a[2])) {
                if(isdigit(a[3])) {
                    cout << n * ((a[2] - '0') * 10 + (a[3] - '0'));
                } else {
                    cout << n * (a[2] - '0');
                }
            } else {
                if(isdigit(a[3])) {
                    cout << n * (a[3] - '0');
                } else {
                    cout <<"N/A";
                }
            }
        }
    }

    return 0;
}
