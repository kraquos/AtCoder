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

	bool flag[N], flag2[N];
	rep(i,N)flag[N]=false;
	rep(i,N)flag2[N]=false;
	pair<int,pair<int,int> > in[N-1];

	rep(i,N-1)cin>>in[i].first>>in[i].second.first>>in[i].second.second;
	sort(in,in+N-1);
	int idx[N];
	idx[0]=0; idx[N-1]=N-1;
	int tmp=1;
	rep(i,N-2){
		if(in[i].first != in[i+1].first)idx[in[i+1].first-1]=i+1;
	}
	
	queue<int> que;


	int current=0;
	flag[current]=true;
	rep(i,N-1){
		for(int j=idx[current];j<idx[current+1];j++){
			int next=in[j].second.first-1;
			if(flag[next] == false){
				flag[next] = true;
				que.push(next);
				//cout<<"push:"<<next<<endl;
				if(in[j].second.second%2 == 0)flag2[next]=flag2[current];
				else flag2[next]=!flag2[current];
			}
		}
		current=que.front();
		que.pop();
		if(current == N-1){
			current=que.front();
			que.pop();
		}
		//cout<<"pop:"<<current<<endl;
		/*cout<<"iter:"<<i<<endl;
		rep(i,N){
			if(flag2[i])cout<<0<<endl;
			else cout<<1<<endl;
		}*/
	}
	rep(i,N){
		if(flag2[i])cout<<1<<endl;
		else cout<<0<<endl;
	}


	return 0;
}
