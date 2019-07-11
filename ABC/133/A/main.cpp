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
	int n,a,b;
	cin>>n>>a>>b;
	int ans;
	if(a*n < b)cout<<a*n<<endl;
	else cout<<b<<endl;
	return 0;
}
