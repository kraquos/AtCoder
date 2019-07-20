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
	int n,m;
	cin>>n>>m;
	vector<pair<pair<int,int>,int> > py(m);
	int ans[m][2];
	rep(i,m){
		cin>>py[i].first.first>>py[i].first.second;
		py[i].second=i;
	}
	sort(py.begin(),py.end());
	//rep(i,m)cout<<py[i].first.first<<","<<py[i].first.second<<","<<py[i].second<<endl;
	int pre=-1,cnt;
	rep(i,m){
		if(pre != py[i].first.first){
			pre=py[i].first.first;
			cnt=1;
		}
		ans[py[i].second][0]=pre;
		ans[py[i].second][1]=cnt;
		cnt++;
	}
	rep(i,m)printf("%06d%06d\n",ans[i][0],ans[i][1]);
	return 0;

}
