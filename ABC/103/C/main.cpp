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

int d,g;
int p[11],c[11],all[11];
bool flag[11];
int ans=MAX;


int main(void){
	int n;
	cin>>n;
	ll ans=0;
	rep(i,n){
		ll tmp;
		cin>>tmp;
		ans+=tmp-1;
	}
	cout<<ans<<endl;
	return 0;

}
