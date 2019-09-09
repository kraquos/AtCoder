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
	int k,x;
	cin>>k>>x;
	for(int i=x-k+1; i<x+k; i++)cout<<i<<endl;
	return 0;
}
