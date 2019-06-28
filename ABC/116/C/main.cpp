#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;

int main(void){
	int n;
	cin>>n;
	int h[n];
	rep(i,n)cin>>h[i];
	ll ans=0;
	rep(i,n){
		while(h[i]!=0){
			for(int j=i+1;j<n;j++){
				if(h[j]==0)break;
				h[j]--;
			}
			h[i]--;
			//cout<<i<<":"<<h[i]<<endl;
			ans++;
		}
	}

	cout<<ans<<endl;

	return 0;

}
