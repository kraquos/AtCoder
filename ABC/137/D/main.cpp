#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;


bool cmp(const pair<int,int> &a, const pair<int,int> &b){
	return a.second > b.second;
}

int main(void){
	int n,m;
	cin>>n>>m;
	pair<int, int> work[n];
	rep(i,n)cin>>work[i].first>>work[i].second;
	sort(work,work+n,cmp);
	//rep(i,n)cout<<work[i].first<<" "<<work[i].second<<endl;

	int limit=m,cnt=0;
	bool day[m+1];
	int next[m+1];
	rep(i,m){
		day[i+1]=true;
		next[i+1]=i+1;
	}
	ll ans=0;
	rep(i,n){
		if(work[i].first <= limit && cnt != m){
			ans+=work[i].second;
			cnt++;
			if(!day[next[work[i].first]]){
				while(!day[next[work[i].first]])next[work[i].first]++;
			}
			day[next[work[i].first]]=false;
			if(next[work[i].first] == limit){
				while(!day[limit])limit--;
			}
			next[work[i].first]++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
