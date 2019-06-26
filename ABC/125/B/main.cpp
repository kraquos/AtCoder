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
	int N;
	cin>>N;
	int v[N],c[N],ans=0;
	rep(i,N)cin>>v[i];
	rep(i,N)cin>>c[i];
	rep(i,N){
		if(v[i]>c[i])ans+=v[i]-c[i];
	}
	cout<<ans<<endl;
	return 0;
}
