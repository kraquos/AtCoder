#include <iostream>
using namespace std;
#define rep(i,N) for(int i=0;i<N;i++)

int main(void){
	int N,C;
	cin>>N>>C;
	int map[N][N][2];
	rep(i,N){
		rep(j,N){
			cin>>map[i][j][1];
		}
	}
	rep(i,N){
		rep(j,N){
			cin>>map[i][j][2];
		}
	}
	
	int work[C][3],work1[3]={0,0,0};
	rep(i,C)
		rep(j,3)
			work[i][j]=0;

	rep(i,N){
		rep(j,N){
			work[map[i][j][2]-1][(i+j)%3] += map[i][j][1];
			work1[(i+j)%3] += map[i][j][1];
		}
	}

	int num[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	int min[3][2];
	rep
	
	return 0;
}
