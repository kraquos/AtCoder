#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
	ll r,D,x;
	cin>>r>>D>>x;
	rep(i,10){
		x = r*x-D;
		cout<<x<<endl;
	}
	return 0;
}
