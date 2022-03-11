#include <iostream>
#include <set>
#include <map>
using namespace std;
int main() {
    int n;
    cin >> n >> ws;
    map <string, set <string>> maplat;
    set <string> all;
    for (int i = 0; i < n; i++) {
        string s;
        getline (cin, s);
        int first = s.find_first_of ('-');
        string eng = s.substr (0, first - 1);
        string lat = s.substr (first + 2, s.size()) + ',';
        char c;
        string wlat;
        for (auto c : lat) {
            if (c >= 'a' && c <= 'z') {
                wlat = wlat + c;
            } else if (c == ',') {
                all.insert(wlat);
                maplat[wlat].insert(eng);
                wlat.erase ();
            }
        }
    }
    cout << all.size() << endl;
    for (auto now : maplat) {
        cout << now.first << " - " << *now.second.begin();
        for (auto now2 : now.second) {
            if (now2 != *now.second.begin()) {
                cout << ", " << now2;
            }
        } cout << endl;
    }
    return 0;
}
