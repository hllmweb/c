/*

3. Faça um algoritmo que carregue um vetor com 20 números inteiros. Calcule e mostre:
a. Os números superiores a 20 e suas respectivas posições. Mostrar a mensagem se não existir nenhum número nessa condição.
b. A quantidade de números negativos.

*/

#include <stdio.h>
#define TAMANHO 4

int main(){
    int i, num[TAMANHO], qtd=0;

    for(i=1; i<=TAMANHO; i++){
        printf("\nNUM [%d]: ", i);
        scanf("%d", &num[i]);
    }
    printf("\nOS NUMEROS MAIORES QUE 20 SAO: \t");
    for(i=1; i<=TAMANHO; i++){
        if(num[i] >= TAMANHO)
            printf(" %d", num[i]);

        if(num[i] < 0)
            qtd++;
    }

     printf("\nQUANTIDADE DE NUMEROS NEGATIVOS:  %d", qtd);

    return 0;
}
