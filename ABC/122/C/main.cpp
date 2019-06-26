#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;


int main(void){
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	int a[n];
	rep(i,n)a[i]=0;
	rep(i,n-1){
		if(s[i+1]=='C' && s[i]=='A')a[i+1]=a[i]+1;
		else a[i+1]=a[i];
	}
	
	int l,r;
	rep(i,q){
		cin>>l>>r;
		cout<<a[r-1]-a[l-1]<<endl;
	}

	return 0;

}
