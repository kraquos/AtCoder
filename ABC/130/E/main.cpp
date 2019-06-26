#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b))

int main(void){
	int n,m;
	cin>>n>>m;
	int s[n],t[m];
	rep(i,n)cin>>s[i];
	rep(i,m)cin>>t[i];

	ll dp[n+1][m+1];
	rep(i,n+1)dp[i][0]=1;
	rep(i,m+1)dp[0][i]=1;
	rep(i,n){
		int ii=i+1;
		rep(j,m){
			int jj=j+1;
			if(s[i]==t[j])dp[ii][jj]=(dp[ii][j]+dp[i][jj])%MAX;
			else dp[ii][jj]=((dp[ii][j]+dp[i][jj])%MAX+MAX-dp[i][j])%MAX;
		}
	}

	cout<<dp[n][m]<<endl;
	return 0;
}
