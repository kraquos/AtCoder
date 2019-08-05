#include <iostream>
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007

using namespace std;


int main(void){
	int n;
	cin>>n;
	ll pre;
	cin>>pre;
	bool ans=true;
	rep(i,n-1){
		ll cur;
		cin>>cur;
		if(pre<cur)pre=cur-1;
		else if(pre == cur)pre=cur;
		else{
			ans=false;
			break;
		}
	}

	if(ans)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;

	return 0;

}
