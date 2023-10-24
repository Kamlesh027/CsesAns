#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, int src, int help, int dest)
{
    if (n > 0)
    {
        towerOfHanoi(n - 1, src, dest, help);
        cout << src << " " << dest << " \n";
        towerOfHanoi(n - 1, help, src, dest);
    }
}
int main()
{
   
    int n = 0;
    cin >> n; // number of disk

    cout << pow(2, n) - 1 << "\n";
    towerOfHanoi(n, 1, 2, 3);
}