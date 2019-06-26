#include<iostream>
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX 1000000007
using namespace std;

int main(void){
	int N,M;
	cin>>N>>M;
	int a[M];
	rep(i,M)cin>>a[i];
	long long int x=1,y=0;
	int cnt=0;
	rep(i,N){
		long long int tmp=x;
		if(i+1 == a[cnt] && cnt<M){
			y = x%MAX;
			x = 0;
			cnt++;
		}
		else{
			x = (x+y)%MAX;
			y = tmp;
		}
		//cout<<i+1<<":"<<"x="<<x<<","<<"y="<<y<<endl;	
	}
	cout<<x%MAX<<endl;
	return 0;

}
