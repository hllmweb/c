/*
Escrever um programa que leia dois números e exiba-os em ordem crescente.
crescente - menor para o maior
decrescente - maior para o menor
*/

#include <stdio.h>

int main(){
    int num_a, num_b;

    printf("NUM 1: ");
    scanf("%d", &num_a);

    printf("NUM 2: ");
    scanf("%d", &num_b);


    if(num_a > num_b){
        printf("%d %d", num_b, num_a);
    }else if(num_a < num_b){
        printf("%d %d", num_a, num_b);
    }

    return 0;
}

