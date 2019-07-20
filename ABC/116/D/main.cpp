#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

bool comp(pair<ll,ll> a, pair<ll,ll> b){
	return a.second > b.second;
}
int main(void){
	ll n,k;
	cin>>n>>k;
	vector<pair<ll,ll> > sushi(n);
	rep(i,n)cin>>sushi[i].first>>sushi[i].second;
	sort(sushi.begin(), sushi.end(),comp);
	
	//rep(i,n)cout<<sushi[i].first<<","<<sushi[i].second<<endl;

	//最初のポイントの計算
	ll ans=0,base=0;
	ll num[n+1];
	rep(i,n)num[i+1]=0;
	rep(i,k){
		base+=sushi[i].second;
		num[sushi[i].first]++;
	}
	ll kind=0;
	rep(i,n)
		if(num[i+1]!=0)kind++;
	ans=base+kind*kind;
	//kind種類の寿司が入ってる時の最大値
	
	ll pivot=k;
	//i個目を抜いて新しい種類を入れて高いスコアが出せるか
	for(int i=k-1;i>-1;i--){
		//2個以上でなければ取る意味ない
		if(num[sushi[i].first]>=2){
			for(;pivot<n;pivot++){
				//新しい種類しか取る必要なし
				if(num[sushi[pivot].first]==0){
					base = base-sushi[i].second+sushi[pivot].second;
					kind++;
					//cout<<"base: "<<base<<",kind: "<<kind<<endl;
					if(ans < base+kind*kind)ans = base+kind*kind;
					num[sushi[i].first]--;
					num[sushi[pivot].first]++;
					pivot++;
					break;
				}
			}
		}
	}

	cout<<ans<<endl;
	return 0;
}
