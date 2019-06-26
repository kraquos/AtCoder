#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <algorithm>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;


int N,M;
bool match(int a, int b, int p){
	int flag=0;
	for(int i=pow(2,N);i>0;i/=2){
		if(a>=i && b>=i)flag++;
		a = a%i;
		b = b%i;
	}
	return p == flag%2;
}

int main(void){
	int s[10],p[10];
	cin>>N>>M;
	rep(i,M){
		int tmp;
		cin>>tmp;
		s[i] = 0;
		rep(j,tmp){
			int tmp2;
			cin>>tmp2;
			s[i]+=pow(2,tmp2-1);
		}
	}

	rep(i,M)cin>>p[i];
	int ans=0;
	rep(i,pow(2,N)){
		rep(j,M){
			if(!match(s[j],i,p[j]))break;
			if(j==M-1)ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
