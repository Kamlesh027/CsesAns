#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int countZeros = 0;

    for (int i = 5; i <= n; i *= 5) {
        countZeros += n / i;
    }

    cout << countZeros << endl;
    return 0;
}
