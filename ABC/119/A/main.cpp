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
	if(atoi(&s[0])<2019 || (atoi(&s[0])==2019 && atoi(&s[5])<4) || (atoi(&s[0])==2019 && atoi(&s[5])==4 && atoi(&s[8])<31)){
		cout<<"Heisei"<<endl;
	}
	else cout<<"TBD"<<endl;
	
	return 0;
}
