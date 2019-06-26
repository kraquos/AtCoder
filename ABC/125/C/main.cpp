#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;

int min(int a, int b){
	if(a<b)return a;
	else return b;
}

ll gcd(ll a, ll b){
	if(b == 0)return a;
	return gcd(b,a%b);
}


int main(void){
	int n;
	cin>>n;
	ll a[n], l[n-1], r[n-1];
	rep(i,n)cin>>a[i];
	l[0]=a[0];
	r[n-2]=a[n-1];
	rep(i,n-2){
		l[i+1]= gcd(l[i],a[i+1]);
		//cout<<"l["<<i+1<<"]="<<l[i+1]<<endl;
		r[n-3-i]= gcd(r[n-2-i],a[n-2-i]);
		//cout<<"r["<<n-3-i<<"]="<<r[n-3-i]<<endl;
	}
	ll ans=0;
	if(r[0] > ans)ans=r[0];
	if(l[n-2] > ans)ans=l[n-2];
	rep(i,n-2){
		ll tmp=gcd(l[i],r[i+1]);
		//printf("gcd(%lld,%lld)=%lld\n", l[i],r[n-2-i],tmp);
		if(ans<tmp)ans=tmp;
	}

	cout<<ans<<endl;
	return 0;

}
