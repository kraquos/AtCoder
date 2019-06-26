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
	pair<ll,int> s[n];
	rep(i,n)cin>>s[i].first>>s[i].second;
	sort(s,s+n);
	ll ans=0,cnt=0;
	rep(i,n){
		if(cnt+s[i].second > m){
			ans+=(m-cnt)*s[i].first;
			break;
		}
		ans+=s[i].second*s[i].first;
		cnt+=s[i].second;
	}
	cout<<ans<<endl;
	return 0;

}
