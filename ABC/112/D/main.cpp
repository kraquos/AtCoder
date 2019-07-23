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

	ll ans;
	for(ll i=m/n;i>0;i--){
		if(m%i==0){
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
