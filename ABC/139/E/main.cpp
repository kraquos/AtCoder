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
	int n;
	cin >> n;
	int a[n+1][n-1];
	rep(i,n){
		rep(j,n-1){
			cin >> a[i+1][j];
		}
	}
	int idx[n+1];
	rep(i,n)idx[i+1] = 0;
	vector<int> work(n+1,0);
	bool flag = true;
	int day = -1;
	while(flag){
		day++;
		//cout << "day:" << day << endl;
		flag = false;
		for(int i=1;i<=n;i++){
			if(idx[i] == n-1) continue;
			int dist = a[i][idx[i]];
			if(a[dist][idx[dist]] == i){
				flag = true;
				work[i] = 1;
				work[dist] = 1;
				//cout << i << "vs" << dist << endl;
			}
		}
		rep(i,n){
			idx[i+1] += work[i+1];
			work[i+1] = 0;
			//cout << idx[i+1] << " ";
		}
		//cout << endl;

	}

	flag = true;
	rep(i,n){
		if(idx[i+1] != n-1)flag = false;
	}

	if(flag)cout << day << endl;
	else cout << -1 << endl;



	return 0;
}
