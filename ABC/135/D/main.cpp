#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;


int main(void){
	string s;
	cin>>s;
	ll work[s.length()+1][13],ans=0;
	rep(i,s.length()+1){
		rep(j,13){
			work[i][j]=0;
		}
	}
	work[0][0]=1;
	/*
	rep(j,13)cout<<work[0][j]<<" ";
	cout<<endl;*/

	ll dcur=1;
	for(int i=0;i<s.length();i++){
		int tmp;
		if(s[i]=='?')tmp=-1;
		else tmp = s[i]-'0';
		//cout<<"check:"<<tmp<<endl;
		rep(j,10){
			if(tmp !=  -1 && tmp != j)continue;
			rep(k,13){
				work[i+1][(k*10+j)%13]+=work[i][k];
				work[i+1][(k*10+j)%13]%=MAX;
			}
		}
		/*rep(j,13)cout<<work[i+1][j]<<" ";
		cout<<endl;*/
	}

	cout<<work[s.length()][5]<<endl;
	return 0;
}
