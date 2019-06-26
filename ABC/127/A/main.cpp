#include <iostream>
#define rep(i,N) for(int i=0;i<N;i++)
using namespace std;

int main(void){
	int A,B;
	cin>>A>>B;
	if(A >= 13)cout<<B<<endl;
	else if(A <= 5)cout<<0<<endl;
	else cout<<B/2<<endl;

	return 0;
}
