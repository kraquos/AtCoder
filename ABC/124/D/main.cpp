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
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;

	int a[n],b[n],id=0;
	rep(i,n){
		a[i]=0;
		b[i]=0;
	}
	if(s[0]=='1')b[0]=1;
	
	a[0]=1;
	rep(i,n-1){
		if(s[i]!=s[i+1]){
			id++;
			a[id]++;
			if(s[i+1] == '1')b[id]=1;
		}
		else a[id]++;
	}

	ll ans=0, cnt=0, tmp=0;
	int r=0;
	for(int l=0;l<id+1;l++){
		while(r<id+1 && (cnt<k || b[r]==1)){
			tmp+=a[r];
			if(b[r]==0)cnt++;
			r++;
		}
		if(ans < tmp)ans=tmp;
		tmp-=a[l];
		if(b[l]==0)cnt--;
	}
	cout<<ans<<endl;
	return 0;
}
