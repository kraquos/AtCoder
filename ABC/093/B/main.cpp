#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;


int main(){
	int n,m,x;
	cin >> n >> m >> x;
	int a[n+1];
	rep(i,n+1) a[i] = 0;
	rep(i,m){
		int tmp;
		cin >> tmp;
		a[tmp] = 1;
	}

	int cur = x, cost = 0, ans;
	while(cur != n){
		if(a[cur]) cost++;
		cur++;
	}
	ans = cost;
	cur = x;
	cost = 0;
	while(cur != 0){
		if(a[cur]) cost++;
		cur--;
	}

	if(ans < cost) cout << ans << endl;
	else cout << cost << endl;

	return 0;
}