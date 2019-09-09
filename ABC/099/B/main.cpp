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


int main(){
	int a,b;
	cin>>a>>b;
	int h=b-a;
	for(int i=(b-a)-1;i>0;i--)h+=i;
	cout<<h-b<<endl;
	return 0;
}