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
	int ans=0,max=0;
	rep(i,n){
		int x;
		cin>>x;
		if(max<x)max=x;
		ans+=x;
	}
	cout<<ans-max/2<<endl;
	return 0;
}
