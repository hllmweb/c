/*
Faça um algoritmo para ler uma matriz 3x3 e traga o produto da diagonal principal.
*/

#include <stdio.h>
#define MAX 3
int main(){
    int num[MAX][MAX];

    for(int i=0; i<=MAX-1; i++){
        for(int j=0; j<=MAX-1; j++){
            printf("\nNUM[%d][%d]: ", i,j);
            scanf("%d", &num[i][j]);
        }
    }

    int prod = 1;
    for(int i=0; i<=MAX-1; i++){
        for(int j=0; j<=MAX-1; j++){
            if(i == j)
                prod *= num[i][j];
        }
    }

    printf("O produto da diagonal principal: %d", prod);
    return 0;
}
