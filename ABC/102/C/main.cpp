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
	int n;
	cin>>n;
	ll a[n],ans=0;
	rep(i,n){
		cin>>a[i];
		a[i]-=(i+1);
	}
	sort(a,a+n);
	//rep(i,n)cout<<a[i]<<endl;
	rep(i,n)ans+=abs(a[i]-a[(n+1)/2-1]);
	cout<<ans<<endl;
	return 0;

}
