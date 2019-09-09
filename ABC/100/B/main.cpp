#include <iostream>
#include <algorithm>
#include <string>
#include <typeinfo>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007
using namespace std;


int main(){
	int d,n;
	cin>>d>>n;
	int num=1,ans;
	while(n > 0){
		if(num%100==0 && (num/100)%100==0 && (num/10000)%100 != 0 && d==2){
			ans=num;
			n--;
		}
		else if(num%100==0 && (num/100)%100 != 0 && d==1){
			ans=num;
			n--;
		}
		else if(num%100!=0 && d==0){
			ans=num;
			n--;
		}
		num++;
	}
	cout<<ans<<endl;
	return 0;
}