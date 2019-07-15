#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

string s;

bool reach(int start, int goal){
	int pos=start;
	while(pos<goal){
		if(pos+2 == goal || pos+1 == goal)return true;
		if(s[pos+2] == '.')pos+=2;
		else if(s[pos+1] == '.')pos++;
		else return false;
	}
}

int main(void){
	int n,a,b,c,d;

	cin>>n>>a>>b>>c>>d>>s;

	if(c<d){
		if(reach(a-1,c-1) && reach(b-1,d-1))cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	else{
		bool flag=false;
		for(int i=b-1;i<d;i++){
			if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.')flag=true;
		}
		if(reach(a-1,c-1) && flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
