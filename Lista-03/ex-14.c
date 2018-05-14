/*
    Faça um algoritmo que leia uma matriz 3x3 de real e conte quantos números são positivos.
*/

#include <stdio.h>
#define MAX 3
int main(){
    float num[MAX][MAX];
    int contador = 0;

    for(int i=0; i<=MAX-1; i++){
        for(int j=0; j<=MAX-1; j++){
            printf("\nNUM[%d][%d]: ", i, j);
            scanf("%d", &num[i][j]);
        }
    }

    for(int i=0; i<=MAX-1; i++){
        for(int j=0; j<=MAX-1; j++){
            if(num[i][j] > 0)
                contador++;
        }
    }

    printf("Qunatidade de Numeros Positivos %d:", contador);
    return 0;
}
