#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;


int main(void){
	int n;
	cin >> n;

	ll ans;
	cin >> ans;
	int pre = ans,cur;

	rep(i,n-2){
		cin >> cur;
		if(cur < pre)ans += cur;
		else ans += pre;
		//cout << ans << endl;
		pre = cur;
	}
	
	cout << ans+pre << endl;
	return 0;

}
