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
	int n;
	cin >> n;
	int a[n+1],b[n+1],c[n];
	rep(i,n)cin >> a[i+1];
	rep(i,n)cin >> b[i+1];
	rep(i,n-1)cin >> c[i+1];

	ll ans = b[a[1]];

	rep(i,n-1){
		int cur = i+2;
		if(a[cur] == a[cur-1]+1)ans += c[a[cur]-1];
		ans += b[a[cur]];
	}

	cout << ans << endl;
	return 0;
}
