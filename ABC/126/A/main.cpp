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
	int N,K;
	string S;

	cin>>N>>K>>S;
	if(S[K-1]=='A')S[K-1]='a';
	if(S[K-1]=='B')S[K-1]='b';
	if(S[K-1]=='C')S[K-1]='c';
	cout<<S<<endl;
	return 0;
}
