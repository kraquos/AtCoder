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
	int n,m;
	cin>>n>>m;
	int x[n+1],y[m+1];
	cin>>x[0]>>y[0];
	rep(i,n)cin>>x[i+1];
	rep(i,m)cin>>y[i+1];
	sort(x,x+n+1);
	sort(y,y+m+1);

	if(x[n]<y[0])cout<<"No War"<<endl;
	else cout<<"War"<<endl;

	return 0;
}
