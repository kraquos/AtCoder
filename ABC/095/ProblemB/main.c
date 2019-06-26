#include <stdio.h>

int main(void){
  int N,X,m,ans=0,min=100000;
  scanf("%d%d",&N,&X);
  for(int i=0;i<N;i++){
    scanf("%d",&m);
    if(min > m) min = m;
    X -= m;
  }
  ans += N+X/min;
  printf("%d\n",ans);

  return 0;
}
