#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;

int min(int a, int b){
	if(a<b)return a;
	else return b;
}

ll gcd(ll a, ll b){
	if(b == 0)return a;
	return gcd(b,a%b);
}


int main(void){
	ll n,a[5], min;
	cin>>n;
	rep(i,5)cin>>a[i];
	min=a[0];
	rep(i,4)if(min>a[i+1])min=a[i+1];
	if(n<=min)cout<<5<<endl;
	else if(n%min == 0)cout<<4+n/min<<endl;
	else cout<<5+n/min<<endl;
	return 0;

}
