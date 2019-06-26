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
	int n,m;
	cin>>n>>m;
	ll num[9]={2,5,5,4,5,6,3,7,6}, dp[n+1],a[m];
	rep(i,m)cin>>a[i];
	sort(a,a+m);

	rep(i,n+1)dp[i]=-1000000;
	dp[0]=0;
	rep(i,n){
		rep(j,m){
			if(dp[i]>=0 && i+num[a[j]-1]<=n && dp[i+num[a[j]-1]]<dp[i]+1)dp[i+num[a[j]-1]]=dp[i]+1;
		}
	}


	rep(i,m){
		while(n>=num[a[m-1-i]-1] && dp[n-num[a[m-1-i]-1]]+1 == dp[n]){
			cout<<a[m-1-i];
			n-=num[a[m-1-i]-1];
		}
	}
	
	cout<<endl;
	return 0;
}
