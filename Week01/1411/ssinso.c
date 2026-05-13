#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, t=0;
  scanf("%d",&n);
  int a[n],b[n-1];
  for(int i=0; i<n; i++){
    a[i] = i+1;
  }
  for(int i=0; i<n-1; i++){
    scanf("%d",&b[i]);
  }
  for(int i=0; i<n; i++){
    t=0;
    for(int j=0; j<n-1; j++){
      if(a[i] == b[j])
        t=1;
    }
    if(t==0)
      printf("%d",a[i]);
  }
}