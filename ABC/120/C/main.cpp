#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;


int main(void){
	string s;
	cin>>s;
	int r=0,b=0;
	rep(i,s.length()){
		if(s[i]=='0')r++;
		else b++;
	}
	if(r<b)cout<<r*2<<endl;
	else cout<<b*2<<endl;

	return 0;

}
