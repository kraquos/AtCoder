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
	int n;
	cin>>n;
	bool flag=false;
	for(int i=0;i<=n/7;i++){
		if((n-i*7)%4==0){
			flag=true;
			break;
		}
	}
	if(flag)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
