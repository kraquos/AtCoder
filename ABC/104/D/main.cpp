#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;


int main(void){
	ll n,m;
	cin>>n>>m;
	ll a[n+1];
	rep(i,n+1)a[i]=0;
	
	rep(i,n){
		ll tmp;
		cin>>tmp;
		a[i+1]=tmp+a[i];
	}

	ll ans=0;
	for(int l=0;l<n;l++){
		for(int r=l+1;r<=n;r++){
			if((a[r]-a[l])%m==0)ans++;
		}
	}

	cout<<ans<<endl;

	return 0;
}
