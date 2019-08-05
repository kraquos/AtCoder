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
	ll n;
	cin>>n;
	ll work[100][2];
	work[0][0]=0;
	work[0][1]=0;
	ll tmp=1;
	int msb=1;
	while(true){
		if(msb%2==0){
			work[msb][0]=work[msb-1][0]-tmp;
			work[msb][1]=work[msb-1][1];
		}
		else{
			work[msb][1]=work[msb-1][1]+tmp;
			work[msb][0]=work[msb-1][0];
		}
		//cout<<work[msb][0]<<" "<<work[msb][1]<<endl;
		if(work[msb][0]<=n && n<=work[msb][1])break;
		tmp*=2;
		msb++;
	}

	for(;msb>0;msb--){
		if(work[msb][0]<=n && n<=work[msb][1] && !(work[msb-1][0]<=n && n<=work[msb-1][1])){
			cout<<1;
			if(msb%2==1)n-=tmp;
			else n+=tmp;
		}
		else cout<<0;
		tmp/=2;
	}
	cout<<endl;



	return 0;

}
