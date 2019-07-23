#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define ii pair<int,int>
#define MAX 1000000007

using namespace std;

int main(void){
	int n;
	cin>>n;
	int x[n],y[n],h[n];

	rep(i,n)cin>>x[i]>>y[i]>>h[i];
	int wx,wy,wh;
	rep(i,n){
		if(h[i]!=0){
			wx=x[i];
			wy=y[i];
			wh=h[i];
		}
	}


	int ansx,ansy,ansh;
	rep(i,101){
		rep(j,101){
			int curh=wh+abs(i-wx)+abs(j-wy);
			bool flag=true;
			rep(k,n){
				int tmph=curh-abs(i-x[k])-abs(j-y[k]);
				if(tmph < 0)tmph=0;
				if(tmph != h[k]){
					flag=false;
					break;
				}
			}
			if(flag){
				ansx=i;
				ansy=j;
				ansh=curh;
			}
		}
	}

	cout<<ansx<<" "<<ansy<<" "<<ansh<<endl;
	return 0;

}
