#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#define ll long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX 1000000007

using namespace std;

int main(void){
	int N,M;
	cin>>N>>M;
	int l,r;
	cin>>l>>r;
	rep(i,M-1){
		int tl,tr;
		cin>>tl>>tr;
		if(tl>l)l=tl;
		if(tr<r)r=tr;
		if(l>r){
			cout<<0<<endl;
			return 0;
		}
	}
	cout<<r-l+1<<endl;
	return 0;

}
