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
	int n;
	cin>>n;
	double v[n];
	rep(i,n)cin>>v[i];
	sort(v,v+n);
	rep(i,n-1){
		v[i+1] = (v[i]+v[i+1])/2;
	}

	cout<<v[n-1]<<endl;
	return 0;

}
