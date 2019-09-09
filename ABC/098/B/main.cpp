#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;


int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;

	int num[26],cur[26];
	rep(i,26){
		num[i] = 0;
		cur[i] = 0;
	}
	rep(i,n)num[s[i]-'0'-49]++;

	int ans = 0;
	for(int i=0;i<n-1;i++){
		int tmp = 0;
		cur[s[i]-'0'-49]++;
		/*rep(j,5)cout << cur[j] << " ";
		cout << endl;
		rep(j,5)cout << num[j]-cur[j] << " ";
		cout << endl;*/
		rep(j,26){
			if(num[j]-cur[j] > 0 && cur[j] > 0)tmp++;
		}
		//cout << tmp << endl;
		if(ans < tmp)ans = tmp;
	}

	cout << ans << endl;
	return 0;
}