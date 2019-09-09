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
	int n,c;
	cin >> n >> c;

	int d[c+1][c+1], val[c+1][3];
	rep(i,c){
		rep(j,c){
			cin >> d[i+1][j+1];
		}
		rep(j,3)val[i+1][j] = 0;
	}

	rep(i,n){
		rep(j,n){
			int work,label=(i+j+2)%3;
			cin >> work;
			rep(k,c)val[k+1][label] += d[work][k+1];
		}
	}

	int color[3][3] = {{1,2,3},{1,2,3},{1,2,3}};

	for(int i=4;i<=c;i++){
		rep(j,3){
			int tmp=i;
			rep(k,3){
				if(val[color[j][k]][j] > val[tmp][j]){
					int work = color[j][k];
					color[j][k] = tmp;
					tmp = work;
				}
			}
		}
	}

	ll ans=MAX;
	rep(i,3){
		rep(j,3){
			rep(k,3){
				if(color[0][i] != color[1][j] && color[0][i] != color[2][k] && color[1][j] != color[2][k]){
					if(ans > val[color[0][i]][0]+val[color[1][j]][1]+val[color[2][k]][2])
							ans = val[color[0][i]][0]+val[color[1][j]][1]+val[color[2][k]][2];
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}
