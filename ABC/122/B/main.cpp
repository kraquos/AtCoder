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
	int ans=0,cnt=0;
	rep(i,s.length()){
		if(s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i]=='T')cnt++;
		else cnt=0;
		if(ans < cnt)ans=cnt;
	}
	cout<<ans<<endl;
	return 0;
}
