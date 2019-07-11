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
	ll n,k;
	cin>>n>>k;
	ll a[n], max=0;
	rep(i,n){
		cin>>a[i];
		if(a[i]>max)max=a[i];
	}
	ll bit=2,id=1;
	while(bit<=k){
		id++;
		bit*=2;
	}
	for(i=0;i<100;i++){
		rep(j,n){
			if(a[j]%2==1){
				cnt1++;
				w[i][1]-=1;
			}
			else w[i][0]++;
			a[j]/=2;
		}

	}
	cout<<endl;
	return 0;
}
