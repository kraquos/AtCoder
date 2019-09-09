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
	int n;
	cin>>n;
	ll a[n+1];
	a[0]=0;
	rep(i,n){
		cin>>a[i+1];
		a[i+1]+=a[i];
		//cout<<a[i+1]<<" ";
	}
	//cout<<endl;


	ll left=1,right=3,lmin,lmax,rmin,rmax,ans=MAX;
	for(int i=2;i<n-1;i++){
		while(a[left]*2 < a[i])left++;
		if(abs(a[i]-2*a[left]) > abs(a[i]-2*a[left-1]))left--;
		if(a[left] < a[i]-a[left]){
			lmin = a[left];
			lmax = a[i]-a[left];
		}
		else{
			lmin = a[i]-a[left];
			lmax = a[left];
		}

		while((a[right]-a[i])*2 < a[n]-a[i])right++;
		if(abs(a[n]-a[i]-(a[right]-a[i])*2) > abs(a[n]-a[i]-(a[right-1]-a[i])*2))right--;
		if(a[right]-a[i] < a[n]-a[right]){
			rmin = a[right]-a[i];
			rmax = a[n]-a[right];
		}
		else{
			rmax = a[right]-a[i];
			rmin = a[n]-a[right];
		}
		ll work0,work1;
		if(rmax < lmax)work0=lmax;
		else work0=rmax;
		if(rmin < lmin)work1=rmin;
		else work1=lmin;
		//cout<<a[left]<<","<<a[i]-a[left]<<","<<a[right]-a[i]<<","<<a[n]-a[right]<<endl;
		if(work0-work1 < ans)ans=work0-work1;
	}

	cout<<ans<<endl;
	return 0;
}
