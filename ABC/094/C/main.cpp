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
	int n;
	cin >> n;
	ll x[n],work[n];
	rep(i,n){
		cin >> x[i];
		work[i] = x[i];
	} 
	sort(work,work+n);
	rep(i,n){
		if(x[i] <= work[n/2-1]) cout << work[n/2] << endl;
		else cout << work[n/2-1] << endl;
	}

	return 0;

}
