/*
1. Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO,
deve ser lido um novo valor, ou seja, para o segundo valor não pode ser aceito o
valor zero e

imprimir o resultado da divisão do primeiro valor lido pelo segundo valor lido.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float calc, num_1, num_2;
    int i=0;

    printf("\nNUM 1: ");
    scanf("%f", &num_1);

    printf("\nNUM 2: ");
    scanf("%f", &num_2);

    while(num_2 == 0){
       printf("\nPorfavor digite o valor de NUM 2 maior que zero 0: ");
       printf("\nNUM 2: ");
       scanf("%f", &num_2);

       i++;
    }

    calc = num_1 / num_2;
    printf("%2.2f", calc);

    return 0;
}
