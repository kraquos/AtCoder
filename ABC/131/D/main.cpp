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
	pair<ll,ll>a[n];
	rep(i,n)cin>>a[i].second>>a[i].first;
	sort(a,a+n);
	ll time=0;
	bool flag=true;
	rep(i,n){
		time+=a[i].second;
		if(time > a[i].first){
			flag=false;
			break;
		}
	}
	if(flag)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
