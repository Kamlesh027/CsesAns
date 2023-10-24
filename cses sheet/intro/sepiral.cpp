#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int y, x;
        cin >> y >> x;
        if (y > x) {
            cout << (y % 2 ? (y - 1) * (y - 1) + x : y * y - (x - 1));
        } else {
            cout << (x % 2 ? x * x - (y - 1) : (x - 1) * (x - 1) + y);
        }
        cout << endl;
    }
    return 0;
}
