#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, d, x1, x2;
    cin >> a >> b >> c;
    cout << setprecision(12) << fixed;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << 3;
            } else {
                cout << 0;
            }
        } else {
            if (c == 0) {
                cout << 1 << " " << 0;
            } else {
                x1 = -c / b;
                cout << 1 << " " << x1;
            }
        }
    } else {
        d = b * b - 4 * a * c;
        if (d < 0) {;
            cout << 0;
        }
        if (d == 0) {
            x1 = x2 = -b * 0.5 / a; cout << 1 << " " << x1;
        }
        if (d > 0) {x1 = (-b + sqrt(d)) * 0.5 / a;
            x2 = (-b - sqrt(d)) * 0.5 / a;
            if (x1 != x2 && x1 > x2) {
                cout << 2 << " " << x2 << " " << x1;
            } else if (x1 != x2 && x2 > x1) {
                cout << 2 << " " << x1 << " " << x2;
            }
        }
    }
    return 0;
}
