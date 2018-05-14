/*
A confederação brasileira de natação irá promover eliminatórias para o próximo
torneio mundial. Fazer um algoritmo que obtenha a idade de um nadador e exiba
a sua categoria segundo a tabela a seguir.


Categoria           idade (anos)
infantil A          5 – 7
infantil B          8 – 10
juvenil A           11 – 13
juvenil B           14 – 17
Sênior              maiores de 18
*/

#include <stdio.h>

void main(){
    int idade;

    printf("\nIdade: ");
    scanf("%d", &idade);


    if((idade >= 5) && (idade <= 7)){
        printf("Infantil A");
    }else if(idade >= 8 && idade <= 10){
        printf("Infantil B");
    }else if(idade >= 11 && idade <= 13){
        printf("Juvenil A");
    }else if(idade >= 14 && idade <= 17){
        printf("Juvenil B");
    }else if(idade > 18){
        printf("Sênior");
    }else{
        printf("Inapropriado para o torneio mundial de natação!");
    }
    return 0;
}
