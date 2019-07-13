#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

ll cnt[45][2],kbit[45];

ll calc(int x){
	ll ans=0,pow2=1;
	rep(i,x){
		if(cnt[i][0]>cnt[i][1])ans+=pow2*cnt[i][0];
		else ans+=pow2*cnt[i][1];
		pow2*=2;
	}
	return ans;
}

int main(void){
	ll n,k;
	cin>>n>>k;
	ll a[n];
	rep(i,n)cin>>a[i];

	ll pow2=1,pow=1;
	rep(i,42){
		pow2*=2;
		pow*=2;
		cnt[i][0]=0;
		cnt[i][1]=0;
		kbit[i]=0;
	}

	int idx=42;
	while(idx > -1){
		rep(i,n){
			if(a[i] >= pow2){
				cnt[idx][1]++;
				a[i]-=pow2;
			}
			else cnt[idx][0]++;
			if(k >= pow2){
				kbit[idx]=1;
				k-=pow2;
			}
		}
		pow2/=2;
		idx--;
	}

	/*
	rep(i,5)cout<<cnt[i][0];
	cout<<endl;
	rep(i,5)cout<<cnt[i][1];
	cout<<endl;
	rep(i,5)cout<<kbit[i];
	cout<<endl;*/

	ll val=0,maxf=0;
	for(int i=42;i>-1;i--){
		//cout<<"i:"<<i<<","<<"k:"<<kbit[i]<<","<<"c[0]:"<<cnt[i][0]<<","<<"c[1]:"<<cnt[i][1]<<endl;
		if(kbit[i]){
			if(cnt[i][1] >= cnt[i][0]){
				val+=cnt[i][1]*pow+calc(i);
				break;
			}
			ll tmp=calc(i);
			if(maxf < val+cnt[i][1]*pow+tmp)maxf=val+cnt[i][1]*pow+tmp;
			val+=cnt[i][0]*pow;
		}
		else val+=cnt[i][1]*pow;
		pow/=2;
	}

	if(val > maxf)maxf=val;

	cout<<maxf<<endl;

	return 0;
}
