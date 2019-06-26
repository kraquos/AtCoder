#include <iostream>
#include <math.h>
int main(){
	int N,K;
	std::cin>>N>>K;
	int x[N],y[N];
	char c[N];
	for(int i=0;i<N;i++){
		std::cin>>x[i]>>y[i]>>c[i];
	}
	int ans = 0;
	for(int i=0;i<K;i++){
		for(int j=0;j<K;j++){
			int temp1=0;
			int temp2=0;
			for(int k=0;k<N;k++){
				int work1=(((x[k]-i+K)/K)%2+((y[k]-j+K)/K+1)%2)%2;
				if((work1 == 0 && c[k] == 'B') || (work1 == 1 && c[k] == 'W'))temp1++;
				int work2=(((x[k]-i+K)/K)%2+((y[k]-j+K)/K)%2)%2;
				if((work2 == 1 && c[k] == 'B') || (work2 == 0 && c[k] == 'W'))temp2++;
			}
			if(temp1 > ans)ans = temp1;
			if(temp2 > ans)ans = temp2;
		}
	}
	std::cout<<ans<<std::endl;
	return 0;
}