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
	string s;
	cin>>s;
	int num=0;
	ll ans=0;
	rep(i,s.length()){
		if(s[i]=='A')num++;
		if(s[i]=='B' && s[i+1]=='C'){
			ans+=num;
			i++;
		}
		else if(s[i]=='B' || s[i]=='C')num=0;
	}
	cout<<ans<<endl;
	return 0;
}
