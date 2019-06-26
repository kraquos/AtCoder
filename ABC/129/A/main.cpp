#include <iostream>
#define rep(i,N) for(int i=0;i<N;i++)
using namespace std;

int main(void){
    int A[3];
	rep(i,3)cin>>A[i];
	
	int ans = A[0]+A[1];
	if(ans > A[1]+A[2])ans = A[1]+A[2];
	if(ans > A[0]+A[2])ans = A[0]+A[2];
	cout<<ans<<endl;
}
