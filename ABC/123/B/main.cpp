#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;

int main(void){
	int tmp, max=0, ans=0;
	
	rep(i,5){
		cin>>tmp;
		if(tmp%10 == 0)ans+=tmp;
		else{
			ans+=(tmp/10+1)*10;
			if(max < 10-tmp%10)max=10-tmp%10;
		}
	}
	cout<<ans-max<<endl;
	return 0;
}
