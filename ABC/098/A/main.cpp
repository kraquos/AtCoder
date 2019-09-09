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
	int a,b;
	cin >> a >> b;
	if(a+b > a*b && a+b > a-b)cout << a+b << endl;
	else if(a*b > a+b && a*b > a-b)cout << a*b << endl;
	else cout << a-b << endl;
	return 0;
}
