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
	ll n,k;

	cin>>n>>k;
	if(k%2==1){
		ll num=n/k;
		cout<<num*num*num<<endl;
	}
	else{
		ll num=n/k;
		ll num2=(n-k/2)/k+1;
		if(n<k/2)num2=0;
		cout<<num*num*num+num2*num2*num2<<endl;
	}

	return 0;

}
