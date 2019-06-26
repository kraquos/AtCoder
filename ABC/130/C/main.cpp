#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;

int min(int a, int b){
	if(a<b)return a;
	else return b;
}

ll gcd(ll a, ll b){
	if(b == 0)return a;
	return gcd(b,a%b);
}


int main(void){
	ll w,h,x,y;
	cin>>w>>h>>x>>y;
	ll a[2];
	if(h-y>y)a[0]=w*y;
	else a[0]=w*(h-y);
	if(w-x>x)a[1]=h*x;
	else a[1]=h*(w-x);


	/*if(x==0 || y==0 || x==w || y==h )printf("%lf 0\n",(double)(w*h)/2);
	else if(x==w/2 && y==h/2)printf("%lf 1\n",(double)(w*h)/2);
	else if(w==h)printf("%lf 0\n",(double)(w*h)/2);
	else if(x*h==y*w || x*h==w*(1-y))printf("%lf 0\n",(double)(w*h)/2);
	else if(a[0]>a[1])printf("%lf 0\n",(double)a[0]);
	else if(a[0]<a[1])printf("%lf 0\n",(double)a[1]);
	else printf("%lf 1\n",(double)a[0]);*/
	if(2*x==w && 2*y==h)printf("%lf 1\n",(double)(w*h)/2);
	else printf("%lf 0\n",(double)(w*h)/2);
	return 0;

}
