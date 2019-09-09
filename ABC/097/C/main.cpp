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
	string s;
	int k;
	cin >> s >> k;
	string work[k];
	rep(i,k) work[i] = "";
	work[0] = s[0];
	for(int i=0;i<s.length();i++){
		for(int j=1;j<=k;j++){
			if(work[k-1] != "" && work[k-1] < s.substr(i, j))break;
			string tmp = s.substr(i, j);
			rep(l,k){
				if(tmp == work[l]) break;
				if(tmp < work[l] || work[l] == ""){
					string w = tmp;
					tmp = work[l];
					work[l] = w;
				}
			}
		}
	}

	//rep(i,k)cout << work[i] << endl;
	cout << work[k-1] << endl;
	return 0;

}
