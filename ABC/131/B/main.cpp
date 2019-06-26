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
	int n,l;
	cin>>n>>l;
	int ans=0,min=MAX, val=MAX;
	rep(i,n){
		ans+=l+i;
		if(abs(l+i) < min){
			min=abs(l+i);
			val = l+i;
		}
	}

	cout<<ans-val<<endl;
	return 0;
}
