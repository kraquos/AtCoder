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
	string s;
	cin>>s;
	int cnt1=0,cnt2=0;
	int n=s.length();
	rep(i,n){
		if(i%2==0 && s[i]=='0')cnt1++;
		else if(i%2==1 && s[i]=='0')cnt2++;
	}

	int ans=n/2+n%2-cnt1+cnt2;
	if(ans > cnt1+n/2-cnt2)ans=cnt1+n/2-cnt2;
	cout<<ans<<endl;
	return 0;

}
