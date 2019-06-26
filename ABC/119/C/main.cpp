#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;

int n,A,B,C;
int l[8];
int calc(int num, int a, int b, int c){
	if(num==n){
		if(a==0 || b==0 || c==0)return MAX;
		return abs(A-a)+abs(b-B)+abs(C-c)-30;
	}
	int w1=calc(num+1,a,b,c);
	int w2=calc(num+1,a+l[num],b,c)+10;
	int w3=calc(num+1,a,b+l[num],c)+10;
	int w4=calc(num+1,a,b,c+l[num])+10;
	if(w1<=w2 && w1<=w3 && w1<=w4)return w1;
	if(w2<=w1 && w2<=w3 && w2<=w4)return w2;
	if(w3<=w2 && w3<=w1 && w3<=w4)return w3;
	if(w4<=w2 && w4<=w3 && w4<=w1)return w4;
}

int main(void){
	cin>>n>>A>>B>>C;
	rep(i,n)cin>>l[i];
	cout<<calc(0,0,0,0)<<endl;

	return 0;

}
