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

int main(void){
	string s;
	cin>>s;
	int a[3];
	a[2]=s[0]-'0';
	a[1]=s[1]-'0';
	int min=1000;
	for(int i=2;i<s.length();i++){
		a[0]=s[i]-'0';
		int score=a[2]*100+a[1]*10+a[0];
		if(abs(score-753)<min)min=abs(score-753);
		a[2]=a[1];
		a[1]=a[0];
	}
	cout<<min<<endl;
	return 0;
}
