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
	int n,q;
	cin>>n>>q;
	vector<vector<int> > tree(n+1);
	rep(i,n-1){
		int a,b;
		cin>>a>>b;
		//cout<<a<<" "<<b<<endl;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	ll score[n+1];
	rep(i,n)score[i+1]=0;
	rep(i,q){
		int p,x;
		cin>>p>>x;
		//cout<<p<<" "<<x<<endl;
		score[p]+=x;
	}

	vector<int> mask(n+1);
	queue<int> que;
	
	ll ans[n+1];
	rep(i,n){
		mask[i+1] = 0;
		ans[i+1] = 0;
	}
	que.push(1);
	mask[1] = 1;
	ans[1] = score[1]; 

	while(!que.empty()){
		int id=que.front();
		//cout<<"node:"<<id<<endl<<"child is ";
		que.pop();
		rep(i,tree[id].size()){
			if(mask[tree[id][i]] == 0){
				//cout<<tree[id][i]<<" ";
				que.push(tree[id][i]);
				mask[tree[id][i]] = 1;
				score[tree[id][i]]+=score[id];
			}
		}
		//cout<<endl;
	}
	rep(i,n)cout<<score[i+1]<<endl;
	return 0;
}
