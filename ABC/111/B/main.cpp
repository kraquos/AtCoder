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
	int n;
	cin>>n;
	rep(i,9){
		if(n<=(i+1)*111){
			cout<<(i+1)*111<<endl;
			break;
		}
	}
	return 0;
}
