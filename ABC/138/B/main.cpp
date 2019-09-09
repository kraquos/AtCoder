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
	double ans=0.0;
	rep(i,n){
		double work;
		cin>>work;
		ans+=1/work;
	}

	cout<<1/ans<<endl;
	return 0;
}
