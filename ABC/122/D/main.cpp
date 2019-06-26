#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

bool check(int x, int y, int z, int w){
	if((y==0 && z==2 && w==1) || (y==0 && z==1 && w==2) || (y==2 && z==0 && w==1) || (x==0 && z==2 && w==1) || (x==0 && y==2 && w==1))
		return false;
	return true;
}

int main(void){
	int n;
	cin>>n;
	ll dp[105][4][4][4];
	rep(i,105)rep(j,4)rep(k,4)rep(l,4)dp[i][j][k][l]=0;
	rep(i,4){
		rep(j,4){
			rep(k,4){
				if(check(3,i,j,k))dp[3][i][j][k]=1;
				else dp[3][i][j][k]=0;
			}
		}
	}

	for(int i=3;i<n;i++){
		rep(w,4){
			rep(x,4){
				rep(y,4){
					rep(z,4){
						if(check(x,y,z,w)){
							dp[i+1][y][z][w]+=dp[i][x][y][z];
							dp[i+1][y][z][w] = dp[i+1][y][z][w]%MAX;
						}
					}
				}
			}
		}
	}
	ll ans=0;
	rep(i,4)rep(j,4)rep(k,4)ans=(ans+dp[n][i][j][k])%MAX;
	cout<<ans<<endl;

	return 0;
}
