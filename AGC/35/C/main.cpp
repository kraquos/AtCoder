#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;

bool comp(pair<ll,ll> a, pair<ll,ll>  b){
	return a.first > b.first;
}

int main(void){
	ll n,x;
	cin>>n>>x;
	vector<pair<ll,pair<ll,ll> > > lu(n);
	vector<pair<ll, ll> > total(n);
	ll d=0;
	rep(i,n){
		ll b,l,u;
		cin>>b>>l>>u;
		d+=b*l;
		total[i].first=b*l+(x-b)*u;
		total[i].second=i;
		lu[i].first=b;
		lu[i].second.first=l;
		lu[i].second.second=u;
	}

	sort(total.begin(),total.end(),comp);


	/*////debug
	cout<<d<<endl;
	rep(i,n){
		int id=total[i].second;
		ll b=lu[id].first,l=lu[id].second.first,u=lu[id].second.second;
		cout<<b<<","<<l<<","<<u<<","<<total[i].first<<endl;
	}
	/////////*/
	ll ans=100000000;
	rep(i,n){
		//cout<<"iter: "<<i<<endl;
		int id=total[i].second,q=0;
		ll work=d,curans=0;
		rep(j,n){
			int id1=total[j].second;
			if(work<total[i].first || work<total[j].first)break;
			if(id1 == id)continue;
			work-=total[j].first;
			q++;
		}
		curans+=q*x;
		//cout<<"curans: "<<curans<<endl;
		//cout<<"work: "<<work<<endl;
		ll b=lu[id].first,l=lu[id].second.first,u=lu[id].second.second;

		if(work <= b*l)curans+=(work+(l-1))/l;
		else curans+=b+(work-b*l+(u-1))/u;
		//cout<<b<<","<<l<<","<<u<<","<<endl;
		//cout<<"curans: "<<curans<<endl;
		if(ans > curans)ans=curans;
	}

	cout<<ans<<endl;



	return 0;

}
