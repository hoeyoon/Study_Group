#include <stdio.h>

int n;

int zero(int n){
    return n == 0 ? 1 : 0;
}

int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("non zero");
  return 0;
}