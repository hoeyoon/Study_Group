#include <stdio.h>
#include <stdlib.h>

int main(){
  int a;
  scanf("%d",&a);
  int b[a];
  for(int i=0; i<a; i++){
    scanf("%d",&b[i]);
  }
  for(int i=a-1; i>=0; i--){
    printf("%d ",b[i]);
  }
}