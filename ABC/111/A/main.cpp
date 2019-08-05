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
	int n;
	cin>>n;
	int ans=0;
	if(n/100 == 1)ans+=900;
	else ans+=100;
	
	if((n%100)/10 == 1)ans+=90;
	else ans+=10;

	if((n%10) == 1)ans+=9;
	else ans+=1;

	cout<<ans<<endl;
	return 0;
}
