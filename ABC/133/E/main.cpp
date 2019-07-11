#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b))

int main(void){
	int n,k;
	cin>>n>>k;
	vector<vector<int> > tree(n);
	rep(i,n-1){
		int a,b;
		cin>>a>>b;
		tree[a-1].push_back(b-1);
		tree[b-1].push_back(a-1);
	}


	vector<int> mask(n,0);
	queue<int> que;

	mask[0]=1;
	ll ans=k;

	rep(i,tree[0].size()){
		que.push(tree[0][i]);
		mask[tree[0][i]]=1;
		ans*=(k-1-i);
		ans=ans%MAX;
	}
	//cout<<ans<<endl;;
	while(!que.empty()){
		int id=que.front();
		//cout<<"node:"<<id<<endl;
		que.pop();
		//queueに子供をいれる
		//cout<<"child is "<<endl;
		rep(i,tree[id].size()){
			if(mask[tree[id][i]] == 0){
				que.push(tree[id][i]);
				mask[tree[id][i]]=1;
				//cout<<tree[id][i]<<endl;
			}
		}
		ll tmp=1;

		//cout<<"color:"<<k-tree[id].size()<<endl;

		//配色の組み合わせを計算
		rep(i,tree[id].size()-1){
			tmp*=(k-2-i);
			tmp=tmp%MAX;
		}
		
		ans*=tmp;
		ans=ans%MAX;
	}
	cout<<ans<<endl;
	return 0;
}
