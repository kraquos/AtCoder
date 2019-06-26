#include <iostream>
using namespace std;

int main(void){
	int N,K;
	cin>>N>>K;
	int **map = new int*[2*K+1];
	for(int i=0;i<2*K+1;i++){
		map[i] = new int[2*K+1];
		for(int j=0;j<2*K+1;j++)
			map[i][j]=0;
	}

	for(int i=0;i<N;i++){
		int x,y;
		char col[2];
		cin>>x>>y>>col;
		if(col[0] == 'B')
			map[(x%(2*K)+2*K)%(2*K)+1][(y%(2*K)+2*K)%(2*K)+1]++;
		else
			map[(x%(2*K)+3*K)%(2*K)+1][(y%(2*K)+2*K)%(2*K)+1]++;
	}

	for(int i=1;i<2*K;i++)
		for(int j=1;j<2*K+1;j++)
			map[i+1][j] += map[i][j];
	for(int i=1;i<2*K;i++)
		for(int j=1;j<2*K+1;j++)
			map[j][i+1] += map[j][i];
	
	int ans = 0;
	for(int i=0;i<K;i++){
		for(int j=0;j<K;j++){
			int work = 2*map[i][j]-2*map[i+K][j]+map[2*K][j]-2*map[i][j+K]+2*map[i+K][j+K]-map[2*K][j+K]+map[i][2*K]-map[i+K][2*K]+N;
			if(work < N-work)
				work = N-work;
			if(ans<work)
				ans = work;
		}
	}

	cout<<ans<<endl;

return 0;
}
