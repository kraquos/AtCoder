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
	ll *size;
	UnionFind(int n){
		par=(int *)malloc(sizeof(int)*n);
		size=(ll *)malloc(sizeof(ll)*n);
		rep(i,n)par[i]=i;
		rep(i,n)size[i]=1;
	}
	int root(int x){
		if(par[x]==x)return x;
		return par[x]=root(par[x]);
	}


	void unite(int x, int y){
		int rx=root(x);
		int ry=root(y);
		if(rx==ry)return;
		par[ry]=rx;
		size[rx]+=size[ry];
	}

	bool same(int x, int y){
		int rx=root(x);
		int ry=root(y);
		return rx==ry;
	}

	ll get_size(int x){
		return size[root(x)];
	}
};

int main(void){
	ll n,m;
	cin>>n>>m;
	pair<int,int> a[m];
	rep(i,m)cin>>a[i].first>>a[i].second;

	UnionFind tree(n);
	ll ans[m];
	ans[m-1]=0;
	rep(i,m-1){
		int x=a[m-1-i].first-1, y=a[m-1-i].second-1;
		if(!tree.same(x,y)){
			ans[m-2-i]=ans[m-1-i]+tree.get_size(x)*tree.get_size(y);
			tree.unite(x,y);
		}
		else ans[m-2-i]=ans[m-i-1];
	}
	rep(i,m)cout<<n*(n-1)/2-ans[i]<<endl;
	return 0;
}
