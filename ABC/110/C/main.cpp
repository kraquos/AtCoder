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
	int trans[26];
	int nums[26],numt[26];
	rep(i,26){
		trans[i]=-1;
		nums[i]=0;
		numt[i]=0;
	}
	
	bool ans=true;
	rep(i,s.length()){
		int ids=s[i]-'0'-49,idt=t[i]-'0'-49;
		if(trans[ids] == -1)trans[ids]=idt;
		else if(trans[ids] != idt){
			ans=false;
			break;
		}
		nums[ids]++;
		numt[idt]++;
	}

	sort(nums,nums+26);
	sort(numt,numt+26);
	rep(i,26){
		if(nums[i] != numt[i])ans=false;
	}
	if(ans)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;

}
