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
	int x;
	cin >> x;
	int ans=1;
	for(int i=2;i<=sqrt(x);i++){
		int tmp=i;
		while(tmp*i <= x)tmp*=i;
		if(ans < tmp)ans=tmp;
	}
	cout << ans << endl;
	return 0;
}