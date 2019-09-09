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
	string s,t;
	cin>>s>>t;
	vector<vector<int> > map(26);
	int idx[26];
	rep(i,26)idx[i]=0;

	rep(i,s.length()){
		map[s[i]-'0'-49].push_back(i);
		idx[s[i]-'0'-49]++;
	}
	/*rep(i,26){
		if(idx[i] != 0){
			cout<<"num:"<<i<<endl;
			rep(j,idx[i])cout<<map[i][j]<<" ";
			cout<<endl;
		}

	}*/
	ll ans=0;
	int cur=0;
	rep(i,t.length()){
		int char_num = t[i]-'0'-49;
		//cout<<t[i]<<endl;
		//cout<<cur<<","<<ans<<endl;
		if(idx[char_num] == 0){
			ans = -1;
			break;
		}
		//rep(j,idx[char_num])cout<<map[char_num][j]<<" ";
		//cout<<endl;
		if(map[char_num][idx[char_num]-1] < cur){
			cur = 0;
			ans+=s.length();
		}

		int iter=lower_bound(map[char_num].begin(),map[char_num].end(),cur)-map[char_num].begin();
		//cout<<"iter:"<<iter<<","<<map[char_num][iter]<<endl;
		cur = map[char_num][iter]+1;

		if(i == t.length()-1)ans+=cur;
	}

	cout<<ans<<endl;
	return 0;
}
