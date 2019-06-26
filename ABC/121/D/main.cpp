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
	ll a,b;
	cin>>a>>b;
	ll ans;
	if(a%2==0){
		if(b%2==0)ans=b+((b-a)/2%2);
		else ans=(b+1-a)/2%2;
	}
	else{
		if(b%2==0){
			ans=b^a^((b-a-1)/2%2);
		}
		else ans=a^((b+1-a-1)/2%2);

	}
	cout<<ans<<endl;
	return 0;
}
