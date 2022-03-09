#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, x = 1, d;
    cin >> n >> m;
    d = n + m - 1;
    int a[n][m];
    for (int k = 0; k < d; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i + j == k) {
                    a[i][j] = x;
                    x++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        } cout << endl;
    }
    return 0;
}