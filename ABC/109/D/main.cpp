#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;

int ans[250000][4];

int main(void){
	int h,w;
	cin>>h>>w;
	int a[h+1][w+1];

	rep(i,h)rep(j,w)cin>>a[i+1][j+1];

	bool have=false;
	int num=0;

	int px,py;
	for(int x=1;x<h+1;x++){
		if(x%2==1){
			for(int y=1;y<w+1;y++){
				if(have){
					if(a[x][y]%2==1)have=false;
					//cout<<px<<" "<<py<<" "<<x<<" "<<y<<endl;
					ans[num][0]=px;
					ans[num][1]=py;
					ans[num][2]=x;
					ans[num][3]=y;
					num++;
				}
				else{
					if(a[x][y]%2==1)have=true;
				}
				px=x;
				py=y;
			}
		}
		else{
			for(int y=w;y>0;y--){
				if(have){
					if(a[x][y]%2==1)have=false;
					//cout<<px<<" "<<py<<" "<<x<<" "<<y<<endl;
					ans[num][0]=px;
					ans[num][1]=py;
					ans[num][2]=x;
					ans[num][3]=y;
					num++;
				}
				else{
					if(a[x][y]%2==1)have=true;
				}
				px=x;
				py=y;	
			}
		}
	}

	cout<<num<<endl;
	rep(i,num)cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<" "<<ans[i][3]<<endl;
	return 0;
}
