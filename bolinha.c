#include <stdio.h>


int main(){
  int P, R;

  scanf("%d %d", &P, &R);
  
  if(P == 0){
      printf("C\n");
  }
  else if(P == 1){
      if(R==1){
          printf("A\n");
      }
      else if(R == 0){
          printf("B\n");
      }
  }
 
 return 0;
}

