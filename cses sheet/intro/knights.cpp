#include <iostream>
using namespace std;
int main() {
    long long t, n, total_ways, attackers;
    std::cin >> t;
    for (n = 1; n <= t; ++n) {
        total_ways = ((n * n) * ((n * n) - 1)) / 2;
        attackers = 4 * (n - 1) * (n - 2);
        std::cout << total_ways - attackers << std::endl;
    }
    return 0;
}
