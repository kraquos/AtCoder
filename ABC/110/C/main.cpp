#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;

int main(void){
	string s,t;
	cin>>s>>t;

	vector<pair<char,int> > work1,work2;

	rep(i,s.length()){
		bool flag=true;
		int k=0;
		while(k<work1.size() && flag){
			if(work1[k].first == s[i]){
				work1[k].second++;
				flag=false;
			}
		}

		if(flag){
			pair<char,int> tmp;
			tmp.first=s[i];
			tmp.second=1;
			work1.push_back(tmp);
		}
	}
	rep(i,t.length()){
		bool flag=true;
		int k=0;
		while(k<work2.size() && flag){
			if(work2[k].first == t[i]){
				work2[k].second++;
				flag=false;
			}
		}

		if(flag){
			pair<char,int> tmp;
			tmp.first=t[i];
			tmp.second=1;
		}
		work2.push_back(tmp);
	}

	rep(i,)
	return 0;

}
