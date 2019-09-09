#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <bitset>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;


int main(void){
	int h,w,k;
	cin>>h>>w>>k;
	ll dp[h+5][w+5];

	rep(i,h+5){
		rep(j,w+5){
			dp[i][j]=0;
		}
	}
	dp[0][0]=1;
	for(int i=1;i<=h;i++){
			for(int k=0;k<(1<<(w-1));k++){
				bitset<8> line(k);
				if((line & (line<<1)).any())continue;
				rep(l,w){
					if(l-1 >= 0 && line[l-1])dp[i][l-1]+=dp[i-1][l];
					else if(l < w-1 && line[l])dp[i][l+1]+=dp[i-1][l];
					else dp[i][l]+=dp[i-1][l];
					dp[i][l-1]%=MAX;
					dp[i][l]%=MAX;
					dp[i][l+1]%=MAX;
				}
			}
	}

	/*rep(i,h+1){
		rep(j,w){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}*/
	cout<<dp[h][k-1]<<endl;

	return 0;
}
