#include <stdio.h>
#include <stdlib.h>

int n;

long long int f(int a){
  long long int r=0;
  for(int i=1; i<=a; i++){
    r += i;
  }
  return r;
}

int main(){
  scanf("%d",&n);
  printf("%lld",f(n));
  return 0;
}

