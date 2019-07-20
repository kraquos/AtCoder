#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;


int main(void){
	int n;
	cin>>n;
	int a[n];
	int max1=0,max2=0;
	rep(i,n){
		cin>>a[i];
		if(max1<a[i]){
			max2=max1;
			max1=a[i];
		}
		else if(max2<a[i])max2=a[i];
	}

	rep(i,n){
		if(a[i]!= max1)cout<<max1<<endl;
		else cout<<max2<<endl;
	}

	return 0;

}
