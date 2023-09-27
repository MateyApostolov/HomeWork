#include <iostream>
using namespace std;

int main () {
    char a, b, c, d;
    cin >> a >> b >> c >> d;
    char e, f, g, h;
    cin >> e >> f >> g >> h;
    int sum1 = 0, sum2 = 0;
    if (a >= 48 && a <= 57) {
        sum1 = sum1 + (a - 48);
    }
    if (a >= 65 && a <= 90) {
        sum1 = sum1 + 2 * (a - 64);
    }
    if (a >= 97 && a <= 122) {
        sum1 = sum1 + (a - 96);
    }

    if (b >= 48 && b <= 57) {
        sum1 = sum1 + (b - 48);
    }
    if (b >= 65 && b <= 90) {
        sum1 = sum1 + 2 * (b - 64);
    }
    if (b >= 97 && b <= 122) {
        sum1 = sum1 + (b - 96);
    }

    if (c >= 48 && c <= 57) {
        sum1 = sum1 + (c - 48);
    }
    if (c >= 65 && c <= 90) {
        sum1 = sum1 + 2 * (c - 64);
    }
    if (c >= 97 && c <= 122) {
        sum1 = sum1 + (c - 96);
    }

    if (d >= 48 && d <= 57) {
        sum1 = sum1 + (d - 48);
    }
    if (d >= 65 && d <= 90) {
        sum1 = sum1 + 2 * (d - 64);
    }
    if (d >= 97 && d <= 122) {
        sum1 = sum1 + (d - 96);
    }


    if (e >= 48 && e <= 57) {
        sum2 = sum2 + (e - 48);
    }
    if (e >= 65 && e <= 90) {
        sum2 = sum2 + 2 * (e - 64);
    }
    if (e >= 97 && e <= 122) {
        sum2 = sum2 + (e - 96);
    }

    if (f >= 48 && f <= 57) {
        sum2 = sum2 + (f - 48);
    }
    if (f >= 65 && f <= 90) {
        sum2 = sum2 + 2 * (f - 64);
    }
    if (f >= 97 && f <= 122) {
        sum2 = sum2 + (f - 96);
    }

    if (g >= 48 && g <= 57) {
        sum2 = sum2 + (g - 48);
    }
    if (g >= 65 && g <= 90) {
        sum2 = sum2 + 2 * (g - 64);
    }
    if (g >= 97 && g <= 122) {
        sum2 = sum2 + (g - 96);
    }

    if (h >= 48 && h <= 57) {
        sum1 = sum1 + (h - 48);
    }
    if (h >= 65 && h <= 90) {
        sum1 = sum1 + 2 * (h - 64);
    }
    if (h >= 97 && h <= 122) {
        sum1 = sum1 + (h - 96);
    }

    if (sum1 > sum2) {
        cout << a << b << c << d << " " << sum1;
    }
    if (sum2 > sum1) {
        cout << e << f << g << h << " " << sum2;
    }
    if (sum1 == sum2) {
        cout << 0;
    }

    return 0;
}
