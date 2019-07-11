#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;

int main(void){
	int n,k;
	cin>>n>>k;
	int h[n];
	rep(i,n)cin>>h[i];
	sort(h,h+n);


	ll ans=MAX;
	rep(i,n-k+1){
		if(ans>h[i+k-1]-h[i])ans=h[i+k-1]-h[i];
	}

	cout<<ans<<endl;
	return 0;

}
