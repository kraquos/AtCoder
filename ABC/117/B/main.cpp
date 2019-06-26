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
	int l[n];
	rep(i,n)cin>>l[i];
	sort(l,l+n);
	rep(i,n-2){
		l[i+1]+=l[i];
	}
	if(l[n-1]<l[n-2])cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
