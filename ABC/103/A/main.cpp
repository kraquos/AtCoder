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
	int work[3];
	cin>>work[0]>>work[1]>>work[2];
	sort(work,work+3);
	cout<<abs(work[0]-work[1])+abs(work[1]-work[2])<<endl;
	return 0;
}
