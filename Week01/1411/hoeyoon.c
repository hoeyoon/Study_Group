#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[51] = {0, };
    for(int i = 0; i < n - 1; i++){
        int x;
        scanf("%d", &x);
        arr[x]++;
    }
    for(int i = 1; i <= n; i++){
        if(arr[i] == 0){
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}