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
	pair<int,int> work[m];
	rep(i,m)cin>>work[i].first>>work[i].second;
	sort(work,work+m);

	//rep(i,m)cout<<work[i].first<<" "<<work[i].second<<endl;

	int r=n;
	int ans=1;
	rep(i,m){
		if(r <= work[i].first){
			ans++;
			r=work[i].second;
		}
		if(work[i].second < r)r=work[i].second;
	}

	cout<<ans<<endl;
	return 0;
}
