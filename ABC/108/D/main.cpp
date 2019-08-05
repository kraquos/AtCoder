#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

bool flag[25];

void func(int n){
	int k=2;
	while(n>0){
		if(n%2==0)flag[k]=false;
		else flag[k]=true;
		k++;
		n=n/2;
	}
}

int main(void){
	int l;
	cin>>l;

	int num=3;
	int tmp=2;
	int edge=3;
	l--;
	while(tmp <= l){
		tmp*=2;
		edge+=num;
		num++;
	}


	func(l);
	/*rep(i,num-2){
		if(flag[i+2])cout<<1<<endl;
		else cout<<0<<endl;
	}*/
	rep(i,num-2)if(!flag[i+2])edge--;
	cout<<num<<" "<<edge<<endl;

	rep(i,num-1)cout<<1<<" "<<i+2<<" "<<0<<endl;

	int cur=1;
	tmp=1;

	for(int i=2;i<num;i++){
		for(int j=i+1;j<num;j++){
			cout<<i<<" "<<j<<" "<<tmp<<endl;
		}
		if(flag[i]){
			cout<<i<<" "<<num<<" "<<cur<<endl;
			cur+=tmp;
		}
		if(tmp==0)tmp=1;
		else tmp*=2;
	}



	return 0;
}
