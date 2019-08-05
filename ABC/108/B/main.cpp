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

int main(void){
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<x2-(y2-y1)<<" "<<y2+(x2-x1)<<" "<<x1-(y2-y1)<<" "<<y1+(x2-x1)<<endl;
	return 0;
}
