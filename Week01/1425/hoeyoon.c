#include <stdio.h>

int main(){
    int n, c;
    scanf("%d %d", &n, &c);
    int arr[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i= 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if(i % c == 0 && i != 0){
            printf("\n");
        }
        printf("%d ", arr[i]);
    }
    return 0;
}