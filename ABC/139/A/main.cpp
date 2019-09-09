#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

int main(void){
	string s,t;
	cin >> s >> t;
	int cnt=0;
	rep(i,3){
		if(s[i] == t[i])cnt++;
	}

	cout << cnt << endl;
	return 0;
}
