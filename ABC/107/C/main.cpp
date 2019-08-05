#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;

int main(void){
	int n,k;
	cin>>n>>k;
	int x[n];
	rep(i,n)cin>>x[i];

	int l,r;
	ll ans=MAX;
	for(int i=0;i<n-k+1;i++){
		l=i;
		r=i+k-1;
		if(0<=x[l]){
			if(ans > x[r])ans=x[r];
		}
		else if(x[r] <= 0){
			if(ans > abs(x[l]))ans=-x[l];
		}
		else{
			if(2*x[r]-x[l] < -2*x[l]+x[r] && ans > 2*x[r]-x[l])ans=2*x[r]-x[l];
			else if(2*x[r]-x[l] >= -2*x[l]+x[r] && ans > -2*x[l]+x[r])ans=-2*x[l]+x[r];
		}
	}
	cout<<ans<<endl;
	return 0;

}
