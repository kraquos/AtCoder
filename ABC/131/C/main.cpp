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
	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll len=b+1-a;
	ll lcm=c*d/gcd(c,d);
	ll w1=len/c, w2=len/d, w3=len/lcm;

	if((a-1)%c+len%c>c-1 )w1++;
	if((a-1)%d+len%d>d-1 )w2++;
	if((a-1)%lcm+len%lcm>lcm-1)w3++;
	cout<<len-(w1+w2-w3)<<endl;
	return 0;

}
