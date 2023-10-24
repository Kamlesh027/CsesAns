#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n = 0;
vector<ll> apple;

ll m(int index, ll blue, ll orange) {
    if (index == n) {
        return abs(blue - orange);
    } else {
        ll ans1 = m(index + 1, blue, apple[index] + orange);
        ll ans2 = m(index + 1, apple[index] + blue, orange);
        return min(ans1, ans2);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll w;  // Change int to ll to match the vector type
        cin >> w;
        apple.push_back(w);
    }
    ll minDifference = m(0, 0, 0);
    cout << minDifference << endl;
}
