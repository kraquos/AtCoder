#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;

int main(void){
	string s,t;
	cin>>s>>t;

	bool ans=false;
	rep(i,s.length()){
		bool flag=true; 
		rep(j,s.length()){
			if(s[(j+i)%s.length()] != t[j])flag=false;
		}
		if(flag)ans=true;
	}
	if(ans)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
