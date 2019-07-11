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
	ll l,r;
	cin>>l>>r;
	if(r-l > 2017)cout<<0<<endl;
	else{
		int min=10000;
		for(int i=l;i<r;i++){
			int id = i%2019;
			for(int j=i+1;j<r+1;j++){
				if(((i%2019)*(j%2019))%2019 < min)min=((i%2019)*(j%2019))%2019;
			}
		}
		cout<<min<<endl;
	}
	return 0;

}
