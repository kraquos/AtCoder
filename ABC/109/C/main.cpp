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
	ll n,x;
	cin>>n>>x;
	ll pos[n];

	rep(i,n){
		ll tmp;
		cin>>tmp;
		pos[i]=abs(tmp-x);
	}
	sort(pos,pos+n);

	int res=n;
	int cid=0,cmin=pos[0],nid=-1,nmin=MAX;
	while(res>1){
		rep(i,n){
			if(i!=cid){
				pos[i]=pos[i]%pos[cid];
				if(pos[i]==0)res--;
				else if(nmin > pos[i]){
					nid=i;
					nmin=pos[i];
				}
			}
		}
		cid=nid;
		cmin=nmin;
		nid=-1;
		nmin=MAX;
	}
	rep(i,n){
		if(pos[i]!=0)cout<<pos[i]<<endl;
	}

	return 0;

}
