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
	cin >> n >> k;
	string s;
	cin >> s;

	int l=0,r=0;
	if(s[0] == 'L')l++;
	else r++;

	int ans = 0;
	rep(i,n-1){
		if(s[i+1] == 'L' && s[i] == 'R')l++;
		else if(s[i+1] == 'L' && s[i] == 'L')ans++;
		else if(s[i+1] == 'R' && s[i] == 'L')r++;
		else ans++;
	}

	if(l <= k || r <= k)ans = n-1;
	else ans += k*2;

	cout << ans << endl;

	return 0;
}
