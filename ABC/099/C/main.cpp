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
	int  n;
	cin >> n;
	int dp[n+1];
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1]+1;
		int work=6;
		while(work <= i){
			if(dp[i] > dp[i-work]+1)dp[i] = dp[i-work]+1;
			work*=6;
		}
		work=9;
		while(work <= i){
			if(dp[i] > dp[i-work]+1)dp[i] = dp[i-work]+1;
			work*=9;
		}
	}

	cout << dp[n] << endl;
	
	return 0;

}
