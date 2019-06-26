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
	if(s[0] == 'A')cout<<'T'<<endl;
	else if(s[0] == 'T')cout<<'A'<<endl;
	else if(s[0] == 'C')cout<<'G'<<endl;
	else if(s[0] == 'G')cout<<'C'<<endl;
	return 0;
}
