#include <stdio.h>
#include <stdlib.h>

int main(){
  int maze[10][10];
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      scanf("%d", &maze[i][j]);
    }
  }
  int a=1, b=1, tmp;
  while(1){
    if(maze[a][b] == 2){
      maze[a][b]=9;
      break;
    }
    else if(maze[a][b+1] == 1 && maze[a+1][b] == 1){
      maze[a][b] = 9;
      break;
    }
    else if(maze[a][b+1] != 1){
      maze[a][b] = 9;
      b++;
    }
    else if(maze[a][b+1] == 1){
      maze[a][b] = 9;
      a++;
    }
  }
  for(int i=0; i<10; i++){
    for(int j=0; j<10; j++){
      printf("%d ",maze[i][j]);
    }
    printf("\n");
  }
}

