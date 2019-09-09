#include <iostream>
#include <unordered_map>
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
	cin>>n;
	unordered_map<string, int> map;
	ll ans=0;
	rep(i,n){
		string s;
		cin>>s;
		sort(&s[0],&s[s.length()]);
		if(map.find(s) != map.end()){
			ans+=map.at(s);
			map[s]++;
		}
		else map[s]=1;
	}

	cout<<ans<<endl;
	return 0;

}
