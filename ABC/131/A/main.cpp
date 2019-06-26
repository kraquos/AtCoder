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
	string s;
	cin>>s;
	if(s[0]==s[1] || s[1]==s[2] || s[2]==s[3])cout<<"Bad"<<endl;
	else cout<<"Good"<<endl;

	return 0;
}
