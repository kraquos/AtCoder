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
	int p[n];
	rep(i,n)cin>>p[i];
	int cnt=0;
	rep(i,n-2)if(p[i]<p[i+1] && p[i+1]<p[i+2] || p[i+2]<p[i+1] && p[i+1]<p[i])cnt++;

	cout<<cnt<<endl;
	return 0;
}
