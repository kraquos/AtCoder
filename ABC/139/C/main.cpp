#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;


int main(void){
	int n;
	cin >> n;
	int h;
	cin >> h;
	int ans=0,cnt=0;
	rep(i,n-1){
		int here;
		cin >> here;
		if(h >= here)cnt++;
		else{
			if(ans < cnt)ans = cnt;
			cnt = 0;
		}
	  	h = here;
	}
	if(ans < cnt)ans = cnt;

	cout << ans << endl;
	return 0;

}
