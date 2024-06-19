#include <bits/stdc++.h>
using namespace std;

int brd (int num1) {
    int bn1 = 0, wn1 = 0;
    if(num1 / 10 == 1) {
        bn1 += 5;
        wn1 += 10;
    }
    if(num1 / 10 == 2) {
        bn1 += 11;
        wn1 += 4;
    }
    if(num1 / 10 == 3) {
        bn1 += 11;
        wn1 += 4;
    }
    if(num1 / 10 == 4) {
        bn1 += 9;
        wn1 += 6;
    }
    if(num1 / 10 == 5) {
        bn1 += 11;
        wn1 += 4;
    }
    if(num1 / 10 == 6) {
        bn1 += 12;
        wn1 += 3;
    }
    if(num1 / 10 == 7) {
        bn1 += 7;
        wn1 += 8;
    }
    if(num1 / 10 == 8) {
        bn1 += 13;
        wn1 += 2;
    }
    if(num1 / 10 == 9) {
        bn1 += 12;
        wn1 += 3;
    }
    return bn1;
}

int bre (int num1) {
    int bn1 = 0, wn1 = 0;
    if(num1 / 10 == 1) {
        bn1 += 5;
        wn1 += 10;
    }
    if(num1 / 10 == 2) {
        bn1 += 11;
        wn1 += 4;
    }
    if(num1 / 10 == 3) {
        bn1 += 11;
        wn1 += 4;
    }
    if(num1 / 10 == 4) {
        bn1 += 9;
        wn1 += 6;
    }
    if(num1 / 10 == 5) {
        bn1 += 11;
        wn1 += 4;
    }
    if(num1 / 10 == 6) {
        bn1 += 12;
        wn1 += 3;
    }
    if(num1 / 10 == 7) {
        bn1 += 7;
        wn1 += 8;
    }
    if(num1 / 10 == 8) {
        bn1 += 13;
        wn1 += 2;
    }
    if(num1 / 10 == 9) {
        bn1 += 12;
        wn1 += 3;
    }
    return bn1;

}

int main () {
    int num1, num2;
    cin >> num1 >> num2;
    cout << abs(brd(num1) - brd(num2)) + abs((30 - brd(num1)) - (30 - brd(num2))) + abs(bre(num1) - bre(num2)) + abs((30 - bre(num1)) - (30 - bre(num2)));

    return 0;
}
