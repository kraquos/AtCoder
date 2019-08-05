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
	int odd[n/2],even[n/2];
	rep(i,n/2)cin>>odd[i]>>even[i];
	sort(odd,odd+n/2);
	sort(even,even+n/2);
	int cnt1=1,cnt2=1;
	int work[4][2]={{1,odd[0]},{0,0},{1,even[0]},{0,0}};

	rep(i,n/2-1){
		if(odd[i]!=odd[i+1])cnt1=1;
		else cnt1++;
		if(even[i]!=even[i+1])cnt2=1;
		else cnt2++;
		if(work[0][0] < cnt1){
			if(work[0][1]==odd[i+1])work[0][0]++;
			else{
				work[1][0]=work[0][0];
				work[1][1]=work[0][1];
				work[0][0]=cnt1;
				work[0][1]=odd[i+1];
			} 
		}
		else if(work[1][0] < cnt1){
			work[1][0]=cnt1;
			work[1][1]=odd[i+1];
		}
		if(work[2][0] < cnt2){
			if(work[2][1]==even[i+1])work[2][0]++;
			else{
				work[3][0]=work[2][0];
				work[3][1]=work[2][1];
				work[2][0]=cnt2;
				work[2][1]=even[i+1];
			}
		}
		else if(work[3][0] < cnt2){
			work[3][0]=cnt2;
			work[3][1]=even[i+1];
		}
	}

	//rep(i,4)cout<<work[i][0]<<","<<work[i][1]<<endl;

	if(work[0][1] != work[2][1])cout<<n-work[0][0]-work[2][0]<<endl;
	else if(work[1][1]==0 && work[3][1]==0)cout<<n/2<<endl;
	else if(work[0][0]+work[3][0] > work[1][0]+work[2][0])cout<<n-work[0][0]-work[3][0]<<endl;
	else cout<<n-work[1][0]-work[2][0]<<endl;
	return 0;

}
