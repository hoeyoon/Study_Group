#include <stdio.h>

int main(void){

    int i, j, N, C;

    scanf("%d %d", &N, &C); //N : 사람 수, C : 한 줄에 앉을 수 있는 자리 수
    
    int num[N];

    

    for(i = 0; i < N; i++){

        scanf("%d", &num[i]);
    }
  
    for(i = 0; i < N; i++ ){
        for(j = 0; j < N; j++){
            if (num[i] < num[j]){
                int temp;
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for(i = 0; i < N; i++){
        printf("%d ", num[i]);
    }
        

    
   
  

    return 0;
    
    
            }