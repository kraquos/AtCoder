#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;



int main(void){
	ll k;
	cin>>k;
	ll num=0;
	int work=1;
	while(k>0){
		ll tmp=work;
		rep(i,num){
			tmp=tmp*10+9;
		}
		cout<<tmp<<endl;
		work=(work+1)%10;
		if(work==0){
			work++;
			num++;
		}
		k--;
	}
	return 0;
}

