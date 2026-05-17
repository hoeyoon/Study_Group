#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int *p = arr;
    int min = *p;
    for(int i = 0; i < n; i++){
        if(min > *p){
            min = *p;
        }
        p++;
    }
    printf("%d\n", min);
    return 0;
}