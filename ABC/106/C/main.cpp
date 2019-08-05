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
	string s;
	ll k;
	cin>>s>>k;
	int ans=1;
	rep(i,k){
		int tmp=s[i]-'0';
		if(tmp!=1){
			ans=tmp;
			break;
		}
	}
	cout<<ans<<endl;
	return 0;

}
