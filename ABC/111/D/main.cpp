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
	pair<int,int> pos[n];
	int flag;
	cin>>pos[0].first>>pos[0].second;
	if((pos[0].first+pos[0].second+20)%2)flag=1;
	else flag=0;
	rep(i,n-1){
		cin>>pos[i+1].first>>pos[i+1].second;
		if((pos[i+1].first+pos[i+1].second+20)%2 != flag){
			cout<<-1<<endl;
			return 0;
		}
	}

	int m;
	if(flag)m=39;
	else m=40;
	cout<<m<<endl;
	rep(i,m)cout<<1<<" ";
	cout<<endl;
	rep(i,n){
		for(int j=0;j<abs(pos[i].first);j++){
			if(pos[i].first < 0)cout<<"L";
			else cout<<"R";
		}
		for(int j=0;j<abs(pos[i].second);j++){
			if(pos[i].second < 0)cout<<"D";
			else cout<<"U";
		}
		for(int j=0;j<(m-abs(pos[i].first)-abs(pos[i].second))/2;j++){
			cout<<"LR";
		}
		cout<<endl;
	}

	return 0;
}
