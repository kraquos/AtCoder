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
	int n,x;
	cin>>n>>x;;
	int l;
	int cur=0,cnt=1;
	rep(i,n){
		cin>>l;
		if(cur+l>x)break;
		cur+=l;
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
}
