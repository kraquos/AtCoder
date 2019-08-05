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
	bool flag=true;
	if(s[0]!='A')flag=false;

	int num=0;
	for(int i=1;i<s.length();i++){
		if((i==1 || i==s.length()-1) && s[i]=='C')flag=false;
		if(s[i]=='C')num++;
		else{
			if(!('a'<=s[i] && s[i]<='z'))flag=false;
		}
	}
	if(num != 1)flag=false;
	if(flag)cout<<"AC"<<endl;
	else cout<<"WA"<<endl;
	return 0;
}
