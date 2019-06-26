#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;

int min(int a, int b){
	if(a<b)return a;
	else return b;
}


int main(void){
	int N,K;
	cin>>N>>K;
	double ans=0.0;
	double work=0.0;
	int cnt=2, m=min(N,K-1);
	rep(i,20){
		if(m*cnt > K)break;
		cnt*=2;
	}
	rep(i,m){
		int id = m-i;
		if(id*cnt < K)cnt*=2;
		ans+=1/(double)(cnt);
	}
	if(N>=K)ans+=(double)(N-K+1);
	ans/=(double)N;
	printf("%.16lf \n", ans);
	return 0;

}
