#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b, tmp=0;
  scanf("%d %d",&a,&b);
  int st[a];
  for(int i=0; i<a; i++){
    scanf("%d",&st[i]);
  }
  for(int i=0; i<a; i++){
    for(int j=0; j<a; j++){
      if(st[i] <= st[j]){
        tmp = st[i];
        st[i] = st[j];
        st[j] = tmp;
      }
    }
  }
  int t = a/b;
  for(int i=0; i<=t; i++){
    if(i==t){
      for(int j=0; j<a-t*b; j++)
        printf("%d ",st[j+i*b]);
    }
    else{
      for(int j=0; j<b; j++){
        printf("%d ",st[j+i*b]);
      }
    }
    printf("\n");
  }
}