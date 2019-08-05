#include <iostream>
#include <algorithm>
#include <string>
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
	int num=0;
	rep(i,n){
		int tmp;
		cin>>tmp;
		if(i+1 != tmp)num++;
	}
	if(num==0 || num==2)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
