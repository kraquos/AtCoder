#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;
ll comb[2010][2010];

int main(void){
	int n,k;
	cin>>n>>k;

	rep(i,2005)rep(j,2005)comb[i][j]=0;
	comb[1][0]=1;
	comb[1][1]=1;
	for(int i=2;i<2002;i++){
		comb[i][0]=1;
		comb[i][i]=1;	
		for(int j=1;j<i;j++){
			comb[i][j] = (comb[i-1][j]+comb[i-1][j-1])%MAX;
		}
	}

	if(n==k){
		cout<<1<<endl;
		rep(i,k-1)cout<<0<<endl;
		return 0;
	}
	rep(i,k){
		if(n-k<i)cout<<0<<endl;
		/*cout<<k-1<<"C"<<i+1<<"="<<comb[n-1][i+1]<<endl;
		cout<<n-k-1<<"C"<<i<<"="<<comb[n-k-1][i]<<endl;
		cout<<n-k-1<<"C"<<i+1<<"="<<comb[n-k-1][i+1]<<endl;
		cout<<n-k-1<<"C"<<i+2<<"="<<comb[n-k-1][i+2]<<endl;*/
		else cout<<(comb[k-1][i]*comb[n-k+1][i+1])%MAX<<endl;
	}
	return 0;
}
