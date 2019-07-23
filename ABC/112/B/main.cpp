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
	int n,t;
	cin>>n>>t;
	pair<int,int > work[n];

	rep(i,n)cin>>work[i].first>>work[i].second;
	sort(work,work+n);

	bool flag=true;
	rep(i,n){
		if(work[i].second<=t){
			cout<<work[i].first<<endl;
			flag=false;
			break;
		}
	}
	if(flag)cout<<"TLE"<<endl;
	return 0;
}
