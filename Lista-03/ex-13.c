/*
    Faça um algoritmo que leia uma matriz 4x4 de inteiros e traga o maior valor.
*/


#include <stdio.h>
#define MAX 4

int main(){
    int num[MAX][MAX], maior=0;

    for(int i=0; i<=MAX-1; i++){
        for(int j=0; j<=MAX-1; j++){
            printf("\nNUM[%d][%d]: ", i,j);
            scanf("%d", &num[i][j]);
        }
    }

    for(int i=0; i<=MAX-1; i++){
        for(int j=0; j<=MAX-1; j++){
            if(maior < num[i][j])
                maior = num[i][j];
        }
    }

    printf("O maior numero da matriz e %d", maior);

    return 0;
}
