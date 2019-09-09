#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;


int main(void){
	int n;
	cin >> n;
	int num_l[n+1],num_r[n+1];
	num_l[0] = 0;
	num_r[0] = 0;
	rep(i,n){
		char c;
		cin >> c;
		if(c == 'W'){
			num_l[i+1] = num_l[i]+1;
			num_r[i+1] = num_r[i];
		}
		else{
			num_l[i+1] = num_l[i];
			num_r[i+1] = num_r[i]+1;
		}
		//cout << num_l[i+1] << " " << num_r[i+1] << endl;
	}
	

	ll ans = MAX;
	for(int i=0;i<n;i++){
		if(ans > num_l[i]+num_r[n]-num_r[i+1])ans = num_l[i]+num_r[n]-num_r[i+1];
	}

	cout << ans << endl;
	return 0;

}
