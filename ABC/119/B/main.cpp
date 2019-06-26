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
	int n;
	cin>>n;
	double ans=0;
	rep(i,n){
		double x;
		string u;
		cin>>x>>u;
		if(u=="JPY")ans+=x;
		else ans+=x*380000;
	}
	cout<<ans<<endl;
	return 0;
}
