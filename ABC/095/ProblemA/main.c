#include <stdio.h>

int main(int argc, char *argv[])
{
  char S[4];
  int ans=700;
  
  scanf("%s",S);
  
  for(int i=0;i<=2;i++){
    if(S[i] == 'o'){
      ans += 100;
    }
  }
  printf("%d\n",ans);
  return 0;
}
