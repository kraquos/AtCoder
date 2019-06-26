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
	int a[5],k;
	bool flag=true;
	rep(i,5)cin>>a[i];
	cin>>k;
	rep(i,5){
		for(int j=i+1;j<5;j++){
			if(a[j]-a[i] > k)flag=false;
		}	
	}
	if(flag)cout<<"Yay!"<<endl;
	else cout<<":("<<endl;
	return 0;
}
