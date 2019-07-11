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
	int n;
	cin>>n;
	ll a[n],ans[n];
	rep(i,n)cin>>a[i];
	rep(i,n-1){
		if(i%2==0)a[n-1]-=a[i];
		else a[n-1]+=a[i];
	}
	ans[n-1]=a[n-1];
	for(int i=n-2;i>-1;i--){
		ans[i] = 2*a[i]-ans[i+1];
	}
	rep(i,n)cout<<ans[i]<<endl;
	return 0;
}
