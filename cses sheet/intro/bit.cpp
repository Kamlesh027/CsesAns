#include<bits/stdc++.h>
using namespace std;
#define mod ((int)1e9 + 7)
int main(){
	long long n;
	cin>>n;
	long long temp=1;
	for(long long i=1;i<=n;i++){
	temp=(temp*2)%mod;

	}
	cout<<temp<<endl;

}