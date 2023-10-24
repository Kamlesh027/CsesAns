#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    long long mx = arr[0];  // Initialize max with the first element
    long long sum = 0;

    for (int i = 1; i < N; i++) {
        mx = max(mx, arr[i]);
        sum += mx - arr[i];
    }

    cout << sum << endl;

    return 0;
}
