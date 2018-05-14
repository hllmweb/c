/*

4. Faça um algoritmo que receba em um vetor 6 números inteiros, calcule e mostre:
a. A soma dos números pares; mod 2 pra saber se e par o resto da divisao tem que ser igual a zero
b. O menor elemento do vetor e a posição que se encontra.

*/


#include <stdio.h>
#define TAMANHO 6

void main(){
    long int num[TAMANHO], i, soma=0, menor=99999;

    for(i=1; i<=TAMANHO; i++){
        printf("\nNUM %d: ", i);
        scanf("%d", &num[i]);
    }


    for(i=1; i<=TAMANHO; i++){
        if(num[i] % 2 == 0)
            soma += num[i];

        if(menor > num[i])
            menor = num[i];

    }


    printf("\nA Soma dos numeros pares: %d", soma);
    printf("\nMenor Valor: %d", menor);

    return 0;
}
