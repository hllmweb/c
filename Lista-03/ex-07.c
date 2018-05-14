/*

7. Escreva um algoritmo que permita a leitura dos nomes de 10 pessoas e armazene os
nomes lidos em um vetor. Após isto, o algoritmo deve permitir a leitura de mais 1 nome
qualquer de pessoa e depois escrever a mensagem ACHEI, se o nome estiver entre os 10 nomes
lidos anteriormente (guardados no vetor), ou NÃO ACHEI caso contrário.

*/
#include <stdio.h>
#include <string.h>

#define TAMANHO 3
#define TAMANHO_PALAVRA 10
main(){
    char *nome[2][128], *pesquisa[128];
    int i, achou = 0;


    for(i=0; i<=2; i++){
        printf("NOME %d: ",i);
        scanf("%s", &nome[i]);
    }


    printf("\n\nPesquisa: ");
    scanf("%s", &pesquisa);

    //imprimindo informações
    for(i=0; i<=2; i++){
        if(nome[i] != '\0'){
            //printf("\n%s", nome[i]);
            if(strcmp(nome[i],pesquisa) == 0)
                achou = 1;
        }else{
            break;
        }
    }

    if(achou){
        printf("Achei!");
    }else{
        printf("Nao Achei");
    }



    return 0;
}
