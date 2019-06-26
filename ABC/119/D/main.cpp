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

ll s[100005],t[100005];

int calc_right(int l, int r, ll val){
	while(l+1<r){
		if(s[(l+r)/2]<val)l=(l+r)/2;
		else r=(l+r)/2;
	}
	return r;
}

int calc_right1(int l, int r, ll val){
	while(l+1<r){
		if(t[(l+r)/2]<val)l=(l+r)/2;
		else r=(l+r)/2;
	}
	return r;
}
int main(void){
	int a,b,q;
	cin>>a>>b>>q;


	rep(i,a)cin>>s[i];
	rep(i,b)cin>>t[i];
	sort(s,s+a);
	sort(t,t+b);

	rep(i,q){
		ll val;
		cin>>val;
		int x,y;
		x=calc_right(0,a-1,val);
		y=calc_right1(0,b-1,val);
		ll lx=s[x-1],rx=s[x];
		ll ly=t[y-1],ry=t[y];
		//cout<<x<<","<<y<<endl;
		ll min=1000000000000;
		if(x-1==-1)lx=-min;
		if(x==a)rx=min;
		if(y-1==-1)ly=-min;
		if(y==b)ry=min;
		//cout<<"val = "<<val<<endl;
		//cout<<"s:"<<lx<<","<<rx<<endl;
		//cout<<"t:"<<ly<<","<<ry<<endl;

		
		if(min>abs(lx-val)+abs(lx-ly))min=abs(lx-val)+abs(lx-ly);
		if(min>abs(lx-val)+abs(lx-ry))min=abs(lx-val)+abs(lx-ry);
		if(min>abs(rx-val)+abs(rx-ly))min=abs(rx-val)+abs(rx-ly);
		if(min>abs(rx-val)+abs(rx-ry))min=abs(rx-val)+abs(rx-ry);
		if(min>abs(ly-val)+abs(lx-ly))min=abs(ly-val)+abs(lx-ly);
		if(min>abs(ly-val)+abs(rx-ly))min=abs(ly-val)+abs(rx-ly);
		if(min>abs(ry-val)+abs(lx-ry))min=abs(ry-val)+abs(lx-ry);
		if(min>abs(ry-val)+abs(rx-ry))min=abs(ry-val)+abs(rx-ry);
		cout<<min<<endl;
	}
	return 0;
}
