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
	int n;
	cin>>n;

	int ans=0;
	for(int i=1;i<=n;i++){
		int tmp=i;
		int cnt=0;
		while(tmp!=0){
			tmp/=10;
			cnt++;
		}
		if(cnt%2==1)ans++;
	}
	cout<<ans<<endl;
	return 0;
}
