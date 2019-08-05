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
	int a,b,c;
	cin>>a>>b>>c;

	cout<<c<<endl;
	cout<<a-b<<endl;
	if(a-b>=c)cout<<0<<endl;
	else cout<<c-(a-b)<<endl;
	return 0;

}
