#include <iostream>
#include <string>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
	string L;
	cin>>L;
	int len = L.length();

	int ans = 2;
	rep(i,len-1)ans*=3;
	
	return 0;
}
