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
	int a,b,c;
	cin>>a>>b>>c;

	if(a-b>=c)cout<<0<<endl;
	else cout<<c-(a-b)<<endl;
	return 0;
}
