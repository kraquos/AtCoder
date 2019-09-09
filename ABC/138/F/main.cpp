#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

struct group{
	vector<int> x_val, y_val;
	bool xflag[100005],yflag[100005];
	int xid, yid;

	group(){
		xid=0;
		yid=0;
	}

	void add(int x, int y){
		if(xflag[x]==false){
			x_val.push_back(x);
			xflag[x]=true;
			xid++;
		}
		if(yflag[y]==false){
			y_val.push_back(y);
			yflag[y]=true;
			yid++;
		}
	}

	bool match(int x, int y){
		if(xflag[x]==true || yflag[y]==true)return true;
		return false;
	}

	void merge(struct group* g){
		
	}
}

int main(void){
	int n;
	cin>>n;
	ll ans=0;
	int xaxis[200000], yaxis[200000];
	pair<int,int> a[n];
	rep(i,n){
		cin>>a[i].first>>a[i].second;
		xaxis[a[i].first+1]++;
		yaxis[a[i].second+1]++;
	}
	return 0;
}
