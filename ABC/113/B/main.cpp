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
	double t,a;
	cin>>n>>t>>a;
	double min=10000000.0;
	int ans;
	rep(i,n){
		double h;
		cin>>h;
		if(min > abs(a-(t-h*0.006))){
			min = abs(a-(t-h*0.006));
			ans=i+1;
		}
	}
	cout<<ans<<endl;
	return 0;
}
