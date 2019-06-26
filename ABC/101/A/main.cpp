#include <iostream>
#define rep(i,N) for(int i=0;i<N;i++)
using namespace std;

int main(void){
	char S[5];
	cin>>S;
	int ans=0;
	rep(i,4){
		if(S[i] == '+')ans++;
		else ans--;
	}
	cout<<ans<<endl;
}
