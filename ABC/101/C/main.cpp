#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
	int N,K;
	cin>>N>>K;
	int ind;
	rep(i,N){
		int work;
		cin>>work;
		if(work == 1){
			ind = i;
			break;
		}
	}
	int ans;
	ans += ind/(K-1);
	if(ind%(K-1) != 0)ans++;
	ans += (N-1-ind)/(K-1);
	if((N-1-ind)%(K-1) != 0)ans++;
	if(ind%(K-1)+(N-1-ind)%(K-1) <  K && ind%(K-1) != 0 && (N-1-ind)%(K-1) != 0)ans--;
	cout<<ans<<endl;
	return 0;

}
