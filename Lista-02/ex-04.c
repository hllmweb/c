/*
Escrever um programa que leia dois números e exiba o
quadrado do menor número e a
raiz quadrada do maior número, se for possível.
*/
#include <stdio.h>
#include <math.h>
void main(){
    int num_a, num_b, maior, menor;

    printf("NUM 1: ");
    scanf("%d", &num_a);

    printf("NUM 2: ");
    scanf("%d", &num_b);



    if(num_a > num_b){
        if(num_a > 0 && num_b > 0){
            maior = sqrt(num_a);
            menor = pow(num_b,2);

            printf("\nO quadrado do menor numero: %d", menor);
            printf("\nA raiz quadrada do maior numero: %d", maior);

        }else{
            printf("Raiz quadrada inexistente");
        }
    }else if(num_a < num_b && num_a > 0 && num_b > 0){
        if(num_a > 0 && num_b > 0){
            maior = sqrt(num_b);
            menor = pow(num_a,2);

            printf("\nO quadrado do menor numero: %d", menor);
            printf("\nA raiz quadrada do maior numero: %d", maior);

        }else{
            printf("Raiz quadrada inexistente");
        }
    }



    return 0;
}
