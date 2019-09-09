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
	int h,w;
	cin >> h >> w;
	int s[h][w];
	rep(i,h){
		rep(j,w){
			char work;
			cin >> work;
			if(work == '#')s[i][j] = 1;
			else s[i][j] = 0;
		}
	}

	bool flag = true;
	rep(i,h){
		rep(j,w){
			if(s[i][j] == 0)continue;
			bool tmp = false;
			if(i+1 < h && s[i+1][j] == 1)tmp=true;
			if(i-1 > -1 && s[i-1][j] == 1)tmp=true;
			if(j+1 < w && s[i][j+1] == 1)tmp=true;
			if(j-1 > -1 && s[i][j-1] == 1)tmp=true;
			if(!tmp)flag = false;
		}
	}

	if(flag) cout << "Yes" << endl;
	else cout << "No" <<endl;

	return 0;

}
