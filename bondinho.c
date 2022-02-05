#include <stdio.h>

int main(){

    int A, M;

    scanf("%d", &A);
    scanf("%d", &M);

    if((A+M) > 50)
       printf("N\n");
    else
       printf("S\n");

    return 0;
}