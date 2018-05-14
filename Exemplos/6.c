/*Faça um programa que leia um vetor e um numero inteiro retornando a posição do vetor que numero inteiro se encontra*/

#include <stdio.h>
#define MAX 5
int num[MAX], num_pesq;

inserindo_num(){
    for(int i=0; i<=MAX-1; i++){
        printf("\nNUM: ");
        scanf("%d", &num[i]);
    }
    return 0;
}

pesquisando(){
    int contador = 0, encontrou=0, pos=0;

    for(int i=0; i<=MAX-1; i++){
        if(num_pesq == num[i]){
            contador++;
            encontrou = 1;
            pos = i;

            if(encontrou == 1){
                printf("\nO NUMERO ENCONTRADO TA NA POSICAO %d", pos+1);
                encontrou = 0;
            }
        }
    }
    if(contador == 0)
        printf("\nNAO FOI ENCONTRADO NENHUM NUMERO!");

    return 0;
}

int main(){
    inserindo_num();
    printf("\nNUMERO PARA SER PESQUISADO: ");
    scanf("%d", &num_pesq);
    pesquisando();

    return 0;
}
