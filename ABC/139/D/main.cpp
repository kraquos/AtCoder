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
	ll n;
	cin >> n;
	ll ans=0;
	for(int i=1;i<n;i++){
		ans += i;
	}

	cout << ans << endl;
	return 0;
}
