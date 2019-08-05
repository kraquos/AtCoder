#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;

int main(void){
	int n;
	cin>>n;
	int ans=0;

	for(int i=1;i<=n;i+=2){
		int cnt=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)cnt++;
		}
		if(cnt==8)ans++;
	}

	cout<<ans<<endl;
	return 0;
}
