#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

int main(void){
	int a,b,k;
	cin>>a>>b>>k;
	int cnt=0,ans;
	rep(i,105){
		int j=105-i;
		if(a%j==0 && b%j==0){
			cnt++;
			//cout<<cnt<<":"<<j<<endl;
		}
		if(cnt==k){
			ans=j;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;
}
