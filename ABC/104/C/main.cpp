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

int d,g;
int p[11],c[11],all[11];
bool flag[11];
int ans=MAX;

void check(){
	//cout<<"check start"<<endl;
	ll tmp=0,num=0;
	for(int i=1;i<=d;i++){
		if(flag[i]){
			tmp+=all[i];
			num+=p[i];
			//cout<<"complete:"<<i<<endl;
		}
	}
	//cout<<"score:"<<tmp<<endl;
	//cout<<"num:"<<num<<endl;
	for(int i=d;i>0;i--){
		if(tmp >= g)break;
		if(!flag[i]){
			//cout<<p[i]*i*100<<endl;
			if(g-tmp <= p[i]*i*100){
				num+=(g-tmp+i*100-1)/(i*100);
				tmp=g;
				break;
			}
		}
	}
	//cout<<"result num:"<<num<<endl<<endl;
	if(tmp >= g && ans > num)ans=num;
}
void func(int id){
	if(id == (d+1)){
		check();
		return;
	}
	flag[id]=false;
	func(id+1);
	flag[id]=true;
	func(id+1);

}

int main(void){
	cin>>d>>g;
	rep(i,d){
		int c;
		cin>>p[i+1]>>c;
		flag[i+1]=false;
		all[i+1]=p[i+1]*100*(i+1)+c;
	}
	func(1);
	cout<<ans<<endl;
	return 0;

}
