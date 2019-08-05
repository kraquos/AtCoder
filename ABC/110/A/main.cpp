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
	if(a>=b && a>=c)cout<<a*10+b+c<<endl;
	else if(b>=a && b>=c)cout<<b*10+a+c<<endl;
	else cout<<c*10+b+a<<endl;
	return 0;
}
