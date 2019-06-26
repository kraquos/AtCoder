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
	char s[4];
	cin>>s;

	int a=(s[0]-'0')*10+(s[1]-'0'), b=(s[2]-'0')*10+(s[3]-'0');
	bool flag1, flag2;
	flag1 = a<13 && a>0;
	flag2 = b<13 && b>0;
	if(flag1 && flag2)cout<<"AMBIGUOUS"<<endl;
	else if(~flag1 && flag2)cout<<"YYMM"<<endl;
	else if(flag1 && ~flag2)cout<<"MMYY"<<endl;
	else cout<<"NA"<<endl;
	return 0;
}
