#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = n * (n + 1) / 2;
    if (sum % 2 == 0) {
        cout << "YES" << endl;  // Corrected from "Yes" to "YES"
        int mid = sum / 2;
        vector<int> v1, v2;
        for (int i = n; i >= 1; i--) {
            if (i <= mid) {
                v1.push_back(i);
                mid -= i;
            } else {
                v2.push_back(i);
            }
        }
        cout << v1.size() << endl;
        for (auto it : v1) {
            cout << it << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for (auto it : v2) {
            cout << it << " ";
        }
    } else {
        cout << "NO" << endl;  // Corrected from "No" to "NO"
    }
    return 0;
}
