#include <stdio.h>
#include <stdlib.h>

int n, d[110];

int f(){
  int tmp, t[n], r=0;
  for(int i=0; i<n; i++){
    t[i] = d[i];
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(d[i] >= d[j]){
        tmp = d[i];
        d[i] = d[j];
        d[j] = tmp;
      }
    }
  }
  for(int i=0; i<n; i++){
    if(d[0] == t[i]){
      return i+1;
      break;
    }
  }
}

int main(){
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    scanf("%d",&d[i]);
  }
  printf("%d",f());
  return 0;
}

