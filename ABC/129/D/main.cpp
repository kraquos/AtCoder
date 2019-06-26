#include <iostream>
#include <cmath>
#include <vector>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(void){
	int H,W;
	cin>>H>>W;
	int mat[H][W][3];

	rep(i,H){
		rep(j,W){
			char tmp;
			cin>>tmp;
			if(tmp == '.')mat[i][j][1]=1;
			else mat[i][j][1]=0;
		}
	}


	int ans=0;
	rep(i,H){
		rep(j,W){
			mat[i][j][2]=0;
			mat[i][j][3]=0;
			if(mat[i][j][1] == 0)mat[i][j][2] = 0;
			else if(i-1 > -1 && mat[i-1][j][1] == 1)mat[i][j][2] = mat[i-1][j][2];
			else{
				mat[i][j][2]=1;
				for(int k=i+1;k<H;k++){
					if(mat[k][j][1] == 0)break;
					mat[i][j][2]++;
				}
			}
			if(mat[i][j][1] == 0)mat[i][j][3] = 0;
			else if(j-1 > -1 && mat[i][j-1][1] == 1)mat[i][j][3] = mat[i][j-1][3];
			else{
				mat[i][j][3]=1;
				for(int k=j+1;k<W;k++){
					if(mat[i][k][1] == 0)break;
					mat[i][j][3]++;
				}	
			}
			if(ans < mat[i][j][2]+mat[i][j][3])ans = mat[i][j][2]+mat[i][j][3];
		}
	}
	////////debug////////////
	/*rep(i,H){
		rep(j,W)cout<<mat[i][j][1];
		cout<<endl;
	}
	/////////////////////////
	////////debug////////////
	rep(i,H){
		rep(j,W)cout<<mat[i][j][2]<<"|";
		cout<<endl;
	}
	/////////////////////////
		////////debug////////////
	rep(i,H){
		rep(j,W)cout<<mat[i][j][3]<<"|";
		cout<<endl;
	}
	/////////////////////////*/
	cout<<ans-1<<endl;
	return 0;
}
