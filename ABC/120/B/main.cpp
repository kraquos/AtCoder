#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;

int main(void){
	int n,m,c;
	cin>>n>>m>>c;
	int A[n][m],B[m];
	rep(i,m)cin>>B[i];
	rep(i,n)rep(j,m)cin>>A[i][j];

	int ans=0;
	rep(i,n){
		int tmp=0;
		rep(j,m){
			tmp+=A[i][j]*B[j];
		}
		if(tmp+c>0)ans++;
	}
	cout<<ans<<endl;
	return 0;
}
