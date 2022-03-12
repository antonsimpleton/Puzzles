#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    int n = 16;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int counter = 0;
    for (int i = 0; i < n; i = i + 2) {
        for (int k = i + 2; k < n; k = k + 2) {
            if (a[k] == a[i] || a[k + 1] == a[i + 1] || abs(a[k] - a[i]) == abs(a[k + 1] - a[i + 1])) {
                counter++;
            }
        }
        if (counter != 0) {
            cout << "YES";
            return 0;
        }
    } cout << "NO";
    return 0;
}

