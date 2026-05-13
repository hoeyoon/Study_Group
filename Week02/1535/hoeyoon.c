#include <stdio.h>

int n, d[110];

int f(){
    int max = -2147483647;
    int idx = -1;
    for(int i = 0; i < n; i++){
        if(max == d[i]){
            continue;;
        }
        if(max < d[i]){
            max = d[i];
            idx = i;
        }
    }
    return idx + 1;
}

int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}