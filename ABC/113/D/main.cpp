#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

int pn[30];
int res[30];
int id;

void calcPnum(void){
	int n=2;
	id=0;
	while(n<=100){
		bool flag=true;
		for(int i=2;i<n;i++)if(n%i==0)flag=false;
		if(flag){
			pn[id]=n;
			id++;
		}
		n++;
	}	
}

void pfact(int n){
	rep(i,30)res[i]=0;
	int k=0;
	while(n>0 && k<id){
		if(n%pn[k]==0){
			res[k]++;
			n=n/pn[k];
		}
		else k++;
	}
}


int main(void){
	int n;
	cin>>n;
	calcPnum();
	int num[30];
	rep(i,id)num[i]=0;
	//rep(i,id)cout<<pn[i]<<",";
	//cout<<endl;
	for(int i=2;i<=n;i++){
		pfact(i);
		//rep(i,id)cout<<res[i]<<",";
		//cout<<endl;
		rep(i,id)num[i]+=res[i];
	}
	//rep(i,id)cout<<num[i]<<",";
	//cout<<endl;
	int cnt2=0,cnt4=0,cnt14=0,cnt24=0,cnt74=0;
	rep(i,id){
		if(num[i]>=74){
			cnt2++;
			cnt4++;
			cnt14++;
			cnt24++;
			cnt74++;
		}
		else if(num[i]>=24){
			cnt2++;
			cnt4++;
			cnt14++;
			cnt24++;
		}
		else if(num[i]>=14){
			cnt2++;
			cnt4++;
			cnt14++;
		}
		else if(num[i]>=4){
			cnt2++;
			cnt4++;		}
		else if(num[i]>=2) cnt2++;
	}
	//cout<<cnt2<<","<<cnt4<<","<<cnt14<<","<<cnt24<<","<<cnt74<<endl;
	cout<<cnt74+cnt24*(cnt2-1)+cnt14*(cnt4-1)+cnt4*(cnt4-1)*(cnt2-2)/2<<endl;

	return 0;
}
