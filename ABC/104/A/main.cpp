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
	int r;
	cin>>r;
	if(r<1200)cout<<"ABC"<<endl;
	else if(r<2800)cout<<"ARC"<<endl;
	else cout<<"AGC"<<endl;
	return 0;
}
