#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m, nEnd, mEnd, nStart, mStart;
    cin >> n >> m;
    nEnd = n;
    mEnd = m;
    nStart = 0;
    mStart = 0;
    int a[n][m];
    int x = 1;
    while (x <= n * m) {
        for (int i = nStart, j = mStart; j < mEnd; j++) {
            a[i][j] = x;
            x++;
        }
        for (int i = nStart + 1, j = mEnd - 1; i < nEnd; i++) {
            a[i][j] = x;
            x++;
        }
        for (int i = nEnd - 1, j = mEnd - 2; j >= mStart &&  x <= n * m; j--) {
            a[i][j] = x;
            x++;
        }
        for (int i = nEnd - 2, j = mStart; i > nStart && x <= n * m; i--) {
            a[i][j] = x;
            x++;
        }
        mStart++;
        mEnd--;
        nStart++;
        nEnd--;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setw(4) << a[i][j];
        } cout << endl;
    }
    return 0;
}

