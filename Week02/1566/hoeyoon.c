#include <stdio.h>

int a, n;

long long int pow(int a, int n){
    long long int result = 1;
    if(a == 1){
        return 1;
    }
    else{
        for(int i = 0; i < n; i++){
            result *= a;
        }
    }
    return result;
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}