#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;

int main(void){
	int n,m;
	cin>>n>>m;
	int flag[m];
	rep(i,m)flag[i]=0;
	rep(i,n){
		int k;
		cin>>k;
		rep(j,k){
			int tmp;
			cin>>tmp;
			flag[tmp-1]++;
		}
	}
	int ans=0;
	rep(i,m)if(flag[i]==n)ans++;
	cout<<ans<<endl;
	return 0;
}
