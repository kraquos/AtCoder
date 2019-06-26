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
	ll n,k;
	cin>>n>>k;
	ll a[n];
	rep(i,n)cin>>a[i];

	ll l=0,r=0,sum=a[0],ans=0;
	bool flag=false;

	for(int l=0;l<n;l++){
		while(sum<k){
			r++;
			if(r==n){
				flag=true;
				break;
			}
			sum+=a[r];
		}
		if(flag)break;
		ans+=n-r;
		sum-=a[l];
	}
	cout<<ans<<endl;
	return 0;
}
