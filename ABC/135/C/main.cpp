#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;


int main(void){
	int n;
	cin>>n;
	int a[n+1],b[n];
	rep(i,n+1)cin>>a[i];
	rep(i,n)cin>>b[i];

	ll cnt=0;
	rep(i,n){
		if(a[i]>=b[i]){
			cnt+=b[i];
			b[i]=0;
		}
		else{
			b[i]-=a[i];
			cnt+=a[i];
		}
		if(a[i+1]>=b[i]){
			cnt+=b[i];
			a[i+1]-=b[i];
		}
		else{
			cnt+=a[i+1];
			a[i+1]=0;
		}
	}

	cout<<cnt<<endl;

	return 0;

}
