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
	int n,m;
	cin>>n>>m;
	if(n>=m){
		cout<<0<<endl;
		return 0;
	}
	int x[m];
	rep(i,m)cin>>x[i];
	sort(x,x+m);
	int sub[m-1];
	ll ans=0;;
	rep(i,m-1){
		sub[i]=x[i+1]-x[i];
		ans+=sub[i];
	}
	sort(sub,sub+m-1);
	rep(i,n-1)ans-=sub[m-2-i];

	cout<<ans<<endl;

	return 0;

}
