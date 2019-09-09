#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;

int main(void){
	ll n,k;
	cin >> n >> k;
	int a[n],b[2010];
	rep(i,2010) b[i] = 0;
	rep(i,n){
		cin >> a[i];
		b[a[i]]++;
	}
	rep(i,2005) b[i+1] += b[i];

	ll ans = 0;

	rep(i,n){
		int tmp=0;
		for(int j=i+1;j<n;j++){
			if(a[i] > a[j])tmp++;
		}
		ans += (((k*(k-1)/2)%MAX)*b[a[i]-1])%MAX+(tmp*k)%MAX;
		ans %= MAX;
		//cout << i << ":";
		//cout << ans << endl;
	}

	//rep(i,5) cout << b[i] << " ";
	//cout << endl;
	cout << ans << endl;
	return 0;
}
