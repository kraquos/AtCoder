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
	int a,b,c,k;
	cin >> a >> b >> c >> k;
	if(a >= b && a >= c){
		rep(i,k)a *= 2;
		cout << a+b+c << endl;
	}
	else if(b >= a && b >= c){
		rep(i,k)b *= 2;
		cout << a+b+c << endl;
	}
	else{
		rep(i,k)c *= 2;
		cout << a+b+c << endl;
	}
	return 0;
}