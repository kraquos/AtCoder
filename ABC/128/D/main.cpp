#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
using namespace std;

int main(void){
	int N,K;
	cin>>N>>K;
	ll V[N];
	rep(i,N)cin>>V[i];
	//rep(i,N)cout<<"V["<<i<<"]="<<V[i]<<endl;

	ll ans=0;
	rep(i,K){
		//cout<<"choice"<<i+1<<endl;
		rep(j,i+2){
			if(i+1 > N)break;
			ll work[i+1];
			rep(k,i+1){
				work[k] = V[(N-i+k+j-1)%N];
			}
			sort(work,work+i+1);
			//rep(ix,i+1)cout<<"["<<ix<<"]"<<work[ix];
			//cout<<endl;
			int cnt = K-(i+1);
			ll tmp=0;
			rep(k,i+1){
				if(cnt>0 && work[k]<0)cnt--;
				else tmp+=work[k];
			}
			//cout<<"value ="<<tmp<<endl;
			if(ans < tmp) ans = tmp;
		}
	}

	cout<<ans<<endl;
	return 0;
}
