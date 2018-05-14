/*

Faça um algoritmo que leia um código inteiro e um vetor de cinco posições de números reais.
a. Se o código for zero, termine o programa;
b. Se o código for 1, mostre o vetor na ordem inversa.

*/


#include <stdio.h>
#define TAMANHO 5

int main(){
    int codigo, i;
    int num[TAMANHO];



    for(i=0; i<=TAMANHO-1; i++){
        printf("\nDigite o VET[%d]: ", i);
        scanf("%d", &num[i]);
    }

    printf("\n\nDIGITE O CODIGO: ");
    printf("\n0 - Termina o Programa");
    printf("\n1 - Inverte o Vetor\n\n");
    printf("\nCODIGO: ");
    scanf("%d", &codigo);

        //fflush(stdin);
         //setbuf(stdin, NULL);
        //num[i] = codigo;

    if(codigo == 0){
        printf("\nPrograma Finalizado!");
        return 0;
    }else if(codigo == 1){
        for(i=TAMANHO-1; i>=0; i--){
            printf(" %d", num[i]);
        }
    }




    return 0;
}

