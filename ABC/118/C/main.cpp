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
	int n;
	cin>>n;
	ll a[n];
	rep(i,n)cin>>a[i];
	ll cnt=n, ans;
	while(cnt!=1){
		ll min=MAX, id;
		rep(i,n){
			if(a[i]>0 && min>a[i]){
				min=a[i];
				id=i;
			}
		}
		rep(i,n){
			if(i!=id && a[i]!=0){
				a[i]=a[i]%min;
				if(a[i]==0)cnt--;
			}
		}
		ans=min;
	}

	cout<<ans<<endl;

	return 0;

}
