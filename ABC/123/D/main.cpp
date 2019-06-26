#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;


int main(void){
	int x,y,z,k;
	cin>>x>>y>>z>>k;
	ll a[x],b[y],c[z],bc[y*z],e[k*k];
	rep(i,x)cin>>a[i];
	rep(i,y)cin>>b[i];
	rep(i,z)cin>>c[i];
	rep(i,y){
		rep(j,z){
			bc[i*z+j]=b[i]+c[j];
		}
	}
	
	sort(a,a+x);
	sort(bc,bc+y*z);
	//rep(i,x)cout<<i<<":"<<a[i]<<endl;
	//rep(i,y*z)cout<<i<<":"<<bc[i]<<endl;
	int tmp1=k,tmp2=k;
	if(x<tmp1)tmp1=x;
	if(y*z<tmp2)tmp2=y*z;
	//cout<<"tmp1="<<tmp1<<endl;
	//cout<<"tmp2="<<tmp2<<endl;
	rep(i,tmp1){
		rep(j,tmp2){
			e[i*tmp2+j]=a[x-1-i]+bc[y*z-1-j];
		}
	}
	sort(e,e+tmp1*tmp2);
	//rep(i,tmp1*tmp2)cout<<i<<":"<<e[i]<<endl;

	//rep(i,x)cout<<a[x-1-i];
	rep(i,k)cout<<e[tmp1*tmp2-1-i]<<endl;

	return 0;
}
