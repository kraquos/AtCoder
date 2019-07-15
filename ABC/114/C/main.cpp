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

bool check(ll n){
	int work[3]={3,5,7};
	bool flag[3]={false,false,false};
	while(n>0){
		rep(i,3){
			if(n%10==work[i])flag[i]=true;
		}
		n/=10;
	}
	return flag[0]&&flag[1]&&flag[2];
}
int main(void){
	ll n;
	cin>>n;
	queue<ll> que;
	que.push(3);
	que.push(5);
	que.push(7);

	ll ans=0;
	while(!que.empty()){
		ll tmp=que.front();
		que.pop();
		if(tmp<=n){
			if(check(tmp))ans++;
			que.push(tmp*10+3);
			que.push(tmp*10+5);
			que.push(tmp*10+7);
		}
	}
	cout<<ans<<endl;
	return 0;

}
