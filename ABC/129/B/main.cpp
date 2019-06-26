#include <iostream>
#include <stdlib.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
	int N;
	cin>>N;
	int W[N], sum[N];
	cin>>W[0];
	sum[0] = W[0];
	rep(i,N-1){
	  cin>>W[i+1];
	  sum[i+1] = sum[i]+W[i+1];
	}

	int ans = abs(sum[N-1]-2*sum[0]);
	rep(i,N-1){
	  if(ans > abs(sum[N-1]-2*sum[i+1]))ans = abs(sum[N-1]-2*sum[i+1]);
	}
	cout<<ans<<endl;
	return 0;
}
