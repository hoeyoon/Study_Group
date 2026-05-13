#include <stdio.h>

int main(){
  int b;
  scanf("%d",&b);
  int a[b];
  for(int i=0; i<b; i++){
    scanf("%d",&a[i]);
  }
  for(int i=0; i<b; i++){
    printf("%d: ",i+1);
    for(int j=0; j<b; j++){
      if(a[i] > a[j])
        printf("> ");
      else if(a[i] < a[j])
        printf("< ");
      else if(i != j && a[i] == a[j])
        printf("= ");
    }
    printf("\n");
  }
}