#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, x = 1;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = x;
            x++;
        }
    }
    int b[n][m];
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                b[i][j] = a[i][j];
            }
        } else if (i % 2 != 0) {
            for (int j = m; j >= 0; j--) {
                b[i][j] = a[i][m - 1 - j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << b[i][j];
        } cout << endl;
    }
    return 0;
}