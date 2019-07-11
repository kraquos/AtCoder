#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;


int main(void){
	int n;
	cin>>n;
	int d[n];
	rep(i,n)cin>>d[i];
	sort(d,d+n);
	cout<<d[n/2]-d[n/2-1]<<endl;
	return 0;

}
