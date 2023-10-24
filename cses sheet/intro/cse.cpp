#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
   if(N==1){
   cout<<1<<endl;
      return 0;
   }
    if ( N == 2|| N==3) {
        cout << "NO SOLUTION" << endl;
    } else {
            
        for (int i = 2; i <= N; i += 2)
            cout << i << ' ';
            for (int i = 1; i <= N; i += 2)
            cout << i << ' ';
    
    }

    return 0;
}
