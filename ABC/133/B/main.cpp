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
	int n,d;
	cin>>n>>d;
	int x[n][d],cnt=0;
	rep(i,n)rep(j,d)cin>>x[i][j];
	rep(i,n-1){
		rep(j,n-i-1){
			double tmp=0.0;
			rep(k,d){
				tmp+=(x[i][k]-x[j+i+1][k])*(x[i][k]-x[j+i+1][k]);
			}
			tmp=sqrt(tmp);
			int tmp1 = tmp;
			if(tmp1 == tmp)cnt++;
		}
	}

	cout<<cnt<<endl;
	return 0;
}
