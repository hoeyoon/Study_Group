#include <stdio.h>

int main(){
    int arr[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int l = 1, k = 1;
    while(1){
        if(arr[l][k] == 2){
            arr[l][k] = 9;
            break;
        }
        arr[l][k] = 9;
        if(arr[l][k + 1] != 1){
            k++;
        }
        else if(arr[l + 1][k] != 1){
            l++;
        }
        else
            break;
    }
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}