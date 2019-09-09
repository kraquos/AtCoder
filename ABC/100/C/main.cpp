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
	int n;
	cin>>n;
	ll ans=0;
	rep(i,n){
		int tmp=0;
		ll work;
		cin>>work;
		while(work%2 == 0){
			tmp++;
			work/=2;
		}
		ans+=tmp;
	}
	cout<<ans<<endl;
	return 0;

}
