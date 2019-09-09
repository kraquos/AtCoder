#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

int main(void){
	int m,d;
	cin>>m>>d;

	int ans=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=d;j++){
			int d1=j%10,d10=j/10;
			if(i == d1*d10 && d1 > 1 && d10 > 1){
				ans++;
				//cout << i << "=" << d10 << "*" << d1<<endl; 
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
