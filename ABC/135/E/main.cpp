#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define MAX 1000000007
using namespace std;
#define max(a, b) ((a) > (b) ? (a) : (b))



int main(void){
	int k,n;
	cin>>k>>n;

	bool map[101][101],work[101][101];
	rep(i,101){
		rep(j,101){
			map[i][j]=false;
			work[i][j]=false;
		}
	}
	map[50][50]=true;
	work[50][50]=true;
	rep(i,n){
		rep(j,101){
			rep(k,101){
				
			}
		}
	}
	return 0;
}
