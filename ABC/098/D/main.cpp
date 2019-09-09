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
	int n;
	cin >> n;
	ll a[n];
	rep(i,n)cin >> a[i];

	int left = 0,right = 1;
	ll sum = a[0];
	ll ans = 0;
	while(left != n){
		if(right == n){
			ans += right-left;
			left++;
		}
		else if((sum+a[right]) == (sum^a[right])){
			sum += a[right];
			right++;
		}
		else{	

			ans += right-left;
			sum -= a[left];
			left++;
		}
	}

	cout << ans << endl;
	return 0;
}
