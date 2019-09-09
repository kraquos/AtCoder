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

vector<vector<int> > work(25);

int func(int id){
	//cout<<id<<" have "<<work[id].size()<<endl;
	if(work[id].size() == 0)return 1;
	int max,min;
	max = func(work[id][0]);
	min = max;
	rep(i,work[id].size()-1){
		int tmp = func(work[id][i+1]);
		if(tmp < min)min=tmp;
		if(max < tmp)max=tmp;
	}
	return max+min+1;
}

int main(void){
	int n;
	cin>>n;
	rep(i,n-1){
		int tmp;
		cin>>tmp;
		work[tmp].push_back(i+2);
	}

	cout<<func(1)<<endl;
	return 0;

}
