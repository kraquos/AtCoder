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
	ll n;
	cin>>n;
	if(n%2 == 0)cout<<n<<endl;
	else cout<<n*2<<endl;
	return 0;
}
