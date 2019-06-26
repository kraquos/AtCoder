#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

int main(void){
	int N,M;
	cin>>N>>M;
	ll A[N];
	pair<ll,ll> B[M];
	rep(i,N)cin>>A[i];
	rep(i,M)cin>>B[i].second>>B[i].first;
	sort(A,A+N);
	sort(B,B+M);

	//rep(i,N)cout<<i<<":"<<A[i]<<"|";
	//cout<<endl;
	//rep(i,M)cout<<"b:"<<B[i].first<<"c:"<<B[i].second<<endl;
	

	int id=M-1;
	ll ans=0;
	rep(i,N){
		if(A[i]<B[id].first && id>-1){
			ans+=B[id].first;
			B[id].second--;
			if(B[id].second==0)id--;
		}
		else ans+=A[i];
		//cout<<i<<":"<<ans<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
