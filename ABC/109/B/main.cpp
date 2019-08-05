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
	int n;
	cin>>n;
	string work[n];

	cin>>work[0];
	bool ans=true;
	rep(i,n-1){
		string tmp;
		cin>>tmp;
		rep(j,i+1){
			if(work[j] == tmp){
				ans=false;
				break;
			}
		}
		if(work[i][work[i].length()-1]!=tmp[0])ans=false;
		if(ans)work[i+1]=tmp;
		else break;
	}

	if(ans)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
