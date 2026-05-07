#include <stdio.h>
#include <stdlib.h>

int n;

int zero(int a){
  if(a == 0)
    return 1;
  else
    return 0;
}

int main(){
  scanf("%d",&n);
  if(zero(n))
    printf("zero");
  else
    printf("non zero");
  return 0;
}

