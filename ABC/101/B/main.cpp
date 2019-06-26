#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
	int N;
	cin>>N;
	int dig = 1000000000;
	int S = 0,work=N;
	rep(i,9){
		S += work/dig;
		work -= (work/dig)*dig;
		dig /= 10;
	}
	S += work;
	if(S == 0){
		cout<<"No"<<endl;
		return 0;
	}
	if((N/S)*S == N)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;
}
