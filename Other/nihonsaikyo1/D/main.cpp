#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

string s;
bool flag[100000];
pair<int,int> dist[100000];
int ans[100000+10];

pair<int,int> goal(int cur){
	//cout<<cur<<endl;
	if(flag[cur]) return dist[cur];
	
	if(s[cur]=='R'){
		if(cur+1 == s.length()){
			flag[cur]=true;
			dist[cur].first=s.length()+2;
			dist[cur].second=s.length()+2;
		}
		else if(s[cur+1]=='L'){
			flag[cur]=true;
			dist[cur].first=cur;
			dist[cur].second=cur+1;
		}
		else{
			pair<int,int> tmp=goal(cur+1);
			flag[cur]=true;
			dist[cur].second=tmp.first;
			dist[cur].first=tmp.second;
		}
	}

	if(s[cur]=='L'){
		if(cur-1 == -1){
			flag[cur]=true;
			dist[cur].first=s.length()+2;
			dist[cur].second=s.length()+2;
		}
		else if(s[cur-1]=='R'){
			flag[cur]=true;
			dist[cur].first=cur;
			dist[cur].second=cur-1;
		}
		else{
			pair<int,int> tmp=goal(cur-1);
			flag[cur]=true;
			dist[cur].second=tmp.first;
			dist[cur].first=tmp.second;
		}
	}
	return dist[cur];
}

int main(void){
	cin>>s;

	rep(i,s.length()){
		flag[i]=false;
		dist[i].first=-1;
		dist[i].second=-1;
		ans[i]=0;
	}


	rep(i,s.length()){
		pair<int,int> tmp;
		tmp=goal(i);
		ans[tmp.first]++;
	}

	rep(i,s.length())cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
