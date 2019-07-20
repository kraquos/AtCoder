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
	int a[n+1],b[n+1];
	rep(i,n){
		cin>>a[i+1];
	}

	int num=0;
	rep(i,n){
		int id=n-i;
		int cur=id*2;
		int cnt=0;
		while(cur <= n){
			if(b[cur] == 1)cnt++;
			cur+=id;
		}

		if(cnt%2==0){
			if(a[id]==1){
				b[id]=1;
				num++;
				/*cout<<"a[id]=1&cnt=0"<<endl;
				cout<<b[id]<<endl;
				cout<<"----------"<<endl;*/
			}
			else b[id]=0;
			
		}
		else{
			if(a[id]==1)b[id]=0;
			else{
				b[id]=1;
				num++;
			}	
			//cout<<"else"<<endl;	
		}
		/*cout<<id<<endl;
		cout<<"cnt="<<cnt<<endl;
		cout<<"b="<<b[id]<<endl;*/
	}
	cout<<num<<endl;
	rep(i,n){
		if(b[i+1]==1)cout<<i+1<<endl;
		//cout<<b[i+1]<<endl;
	}
	return 0;
}
