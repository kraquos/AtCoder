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
	ll work1=MAX,work2=0;
	rep(i,n){
		ll tmp;
		cin>>tmp;
		if(tmp < work1)work1=tmp;
		if(work2 < tmp)work2=tmp;
	}

	cout<<work2-work1<<endl;
	return 0;
}
