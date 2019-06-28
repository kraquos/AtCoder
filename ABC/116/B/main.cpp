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
	bool flag[1000005];
	rep(i,1000005)flag[i]=false;
	int s;
	cin>>s;
	flag[s]=true;
	int cnt=2;
	while(true){
		if(s%2==0)s/=2;
		else s=3*s+1;
		if(flag[s])break;
		flag[s]=true;
		cnt++;
	}

	cout<<cnt<<endl;
	return 0;
}
