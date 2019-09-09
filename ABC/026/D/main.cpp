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
	int n,m;
	cin>>n>>m;
	ll work[n][3][2],score[n],ans=0;
	rep(i,n){
		cin>>work[i][0][0]>>work[i][1][0]>>work[i][2][0];
		work[i][0][1]=-work[i][0][0];
		work[i][1][1]=-work[i][1][0];
		work[i][2][1]=-work[i][2][0];
	}
	rep(i,8){
		rep(j,n){
			score[j]=0;
			if(i%2 == 0)score[j]+=work[j][0][0];
			else score[j]+=work[j][0][1];
			if((i/2)%2 == 0)score[j]+=work[j][1][0];
			else score[j]+=work[j][1][1];
			if((i/4)%2 == 0)score[j]+=work[j][2][0];
			else score[j]+=work[j][2][1];
		}
		sort(score,score+n);
		//rep(j,m)cout<<score[n-1-j]<<" ";
		//cout<<endl;
		ll tmp=0;
		rep(j,m)tmp+=score[n-1-j];
		if(ans < tmp)ans=tmp;
	}

	cout<<ans<<endl;
	return 0;
}
