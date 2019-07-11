#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;


int main(void){
	int n;
	cin>>n;
	int w[n-1];
	vector<vector<pair<int,int> > > tree(n);
	rep(i,n){
		int u,v,w;
		pair<int,int> p;
		cin>>u>>v>>w;
		p.first=v-1;
		p.second=w;
		tree[u-1].push_back(p);
		p.first=u-1;
		tree[v-1].push_back(p);
	}

	int val[n];
	rep(i,n)
		val[i]=-1;
	

	queue<int> que;
	val[0]=0;
	que.push(0);

	while(!que.empty()){
		int id=que.front();
		que.pop();
		rep(i,tree[id].size()){
			if(val[tree[id][i].first] == -1){
				que.push(tree[id][i].first);
				if(tree[id][i].second%2==0){
					if(val[id]==0)val[tree[id][i].first]=0;
					else val[tree[id][i].first]=1;
				}
				else{
					if(val[id]==1)val[tree[id][i].first]=0;
					else val[tree[id][i].first]=1;
				}
			}
		}
	}

	rep(i,n)cout<<val[i]<<endl;
	return 0;
}
