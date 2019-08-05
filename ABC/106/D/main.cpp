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
	int n,m,q;
	cin>>n>>m>>q;
	int work[n+1][n+1];

	rep(i,n+1)rep(j,n+1)work[i][j]=0;

	rep(i,m){
		int l,r;
		cin>>l>>r;
		work[l][r]++;
	}

	rep(i,n){
		rep(j,n){
			work[i+1][j+1]+=work[i][j+1]+work[i+1][j]-work[i][j];
		}
	}

	/*rep(i,n){
		rep(j,n){
			cout<<work[i+1][j+1]<<" ";
		}
		cout<<endl;
	}*/
	
	rep(i,q){
		int l,r;
		cin>>l>>r;
		cout<<work[r][r]-work[r][l-1]-work[l-1][r]+work[l-1][l-1]<<endl;
	}



	return 0;
}
