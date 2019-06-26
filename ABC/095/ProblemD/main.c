#include<stdio.h>

int main(void){
  long long int N,C,ans,work;
  scanf("%lld%lld",&N,&C);
  long long int x[N],v[N],value[N],dist[N],value2[N],dist2[N];
  scanf("%lld%lld",&x[0],&v[0]);
  value[0] = 0;
  dist[0] = 0;
  if(v[0]-x[0] > 0){
    value[0] = v[0]-x[0];
    dist[0] = x[0];
  }
  value2[0] = 0;
  dist2[0] = 0;
  if(v[0]-2*x[0] > 0){
    value2[0] = v[0]-2*x[0];
    dist2[0] = 2*x[0];
  }
  work = v[0];
  for(int i=1;i<N;i++){
    scanf("%lld%lld",&x[i],&v[i]);
    work += v[i];
    if(work-x[i] > value[i-1]){
      value[i] = work-x[i];
      dist[i] = x[i];
    }
    else{
      value[i] = value[i-1];
      dist[i] = dist[i-1];
    }
    if(work-2*x[i] > value2[i-1]){
      value2[i] = work-2*x[i];
      dist2[i] = 2*x[i];
    }
    else{
      value2[i] = value2[i-1];
      dist2[i] = dist2[i-1];
    }
  }
  ans = value[N-1];
  work = 0;
  for(int i=N-1;i>0;i--){
    work += v[i];
    long long int temp = work-(C-x[i]),temp1;
    temp1 = temp+value[i-1]-(C-x[i]);
    temp = temp+value2[i-1];
    if(temp1 > temp)
      temp = temp1;
    if(ans < temp)
      ans = temp;
  }
  work += v[0];
  if(ans < work-(C-x[0]))
    ans = work-(C-x[0]);

  printf("%lld\n",ans);
  return 0;
  
}
