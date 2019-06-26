#include <iostream>
#include <cmath>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
	long long int K;
	cin>>K;
 long long int cnt = 1,val = 1;
	while(K != 0){
		int digit = log10(cnt)+1;
		long long int s = 0,work = cnt;
		rep(i,digit){
			s += work/digit;
			work -= (work/digit)*digit;
			digit /= 10;
		}
		s += work;
		if(val <= cnt/s){
			cout<<cnt<<endl;
			K--;
			val = cnt/s;
		}
		cnt++;
	}
	return 0;
}
