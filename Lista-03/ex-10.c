/*
Faça um algoritmo que carregue um vetor com 35 posições, calcule e mostre:
a. O maior elemento do vetor e a posição que se encontra;
b. A quantidade dos ímpares.
*/


#include <stdio.h>
#define MAX 3
int main(){
    int num[MAX]={4,3,2}, maior=0, posicao, qtd=0;

    for(int i=0; i<=MAX-1; i++){
            if(maior < num[i]){
                maior = num[i];
                posicao = i;
            }

            if(num[i] % 2 == 1){
                qtd+=1;
            }
    }
    printf("\nO maior e %d e ta na posicao %d",maior, posicao);
    printf("\nQtd de impares e: %d", qtd);
    return 0;
}
