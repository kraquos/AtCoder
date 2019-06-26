#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

struct UnionFind{
	int *par;

	UnionFind(int N){
		par = (int *)malloc(N*sizeof(int));
		rep(i,N)par[i]=i;
	}

	int root(int x){
		if(par[x] == x)return x;
		return par[x] =  root(par[x]);
	}

	void unite(int x, int y){
		int rx = root(x);
		int ry = root(y);
		if(rx == ry)return;
		if(rx < ry)par[ry]=rx;
		else par[rx] = ry;
	}

	bool same(int x, int y){
		return root(x) == root(y);
	}
};

int main(void){
	int N;
	cin>>N;

	bool flag=true,flag2=true;

	ll ans=0;
	ll min;
	cin>>min;
	if(min == 0){
		flag=true;
		flag2=false;
	}
	if(min<-1 && flag2)flag=!flag;
	min = abs(min);
	rep(i,N-1){
		ll tmp;
		cin>>tmp;
		if(tmp == 0){
			flag=true;
			flag2=false;
		}
		if(tmp<-1 && flag2)flag=!flag;
		if(abs(tmp) < min){
			ans+=min;
			min = abs(tmp);
		}
		else ans+=abs(tmp);
	}
	if(flag)ans+=min;
	else ans-=min;

	cout<<ans<<endl;
	return 0;
}
