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
	int n;
	cin>>n;
	ll num[3][2];
	rep(i,3){
		num[i][0]=-1;
		num[i][1]=0;
	}
	rep(i,n){
		bool flag=false;
		ll tmp;
		cin>>tmp;
		rep(j,3){
			if(num[j][0]==-1){
				num[j][0]=tmp;
				num[j][1]++;
				flag=true;
				break;
			}
			else if(num[j][0]==tmp){
				num[j][1]++;
				flag=true;
				break;
			}
		}
		if(flag)continue;
		cout<<"No"<<endl;
		return 0;
	}

	//rep(i,3)cout<<num[i][0]<<","<<num[i][1]<<endl;


	/////全て0//////
	if(num[1][0]==-1 && num[2][0]==-1 && num[0][0]==0)cout<<"Yes"<<endl;
	else if(n%3 != 0)cout<<"No"<<endl;
	/////0,x,x,0,x,x //////
	else if(num[2][0]==-1 && num[1][0]!=-1 && num[0][0]!=-1){
		if(num[0][0]==0 && num[0][1]==n/3 && num[1][1]==2*n/3)cout<<"Yes"<<endl;
		else if(num[1][0]==0 && num[1][1]==n/3 && num[0][1]==2*n/3)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	/////x^y^z=0
	else if((num[0][0]^num[1][0]^num[2][0])==0 && num[0][1]==n/3 && num[1][1]==n/3 && num[2][1]==n/3)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
