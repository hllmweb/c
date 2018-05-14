/*
5. Faça um algoritmo que carregue um vetor com os modelos de cinco carros
(por exemplo: FIAT PALIO, GOL POWER, CITROEN C3 etc). Carregue um outro vetor
com o consumo desses carros, isto é, quantos quilômetros cada um desses carros faz com um litro de combustível. Calcule e mostre:


consumo km/l

a. O modelo do carro que consome mais;
b. Quantos litros de combustível cada um dos carros cadastrados consomem para percorrer uma distância de 1000 quilômetros.

12.2km - 1l
1000km - x

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAMANHO 5

int main(void){
    char carro[TAMANHO][15] = {"FIAT PALÍO", "GOL POWER", "CITROEN C3", "207 PEUGOUT", "AUDI TT"}, modelo[10];
    float consumo[TAMANHO] = {12.2, 8.2, 11, 14.2, 10.1}, maior=0;
    int i;
    setlocale(LC_ALL,"Portuguese");

    for(i=0; i<=TAMANHO; i++){
        if(carro[i] != '\0' && consumo[i] != '\0'){
            printf("\n%s", carro[i]);
            printf("\n%2.2f", consumo[i]);
            printf("\nConsumo numa distância de 1000km: %f litros", 1000/consumo[i]);
            printf("\n");


            if(maior < consumo[i]){
                maior = consumo[i];
                strcpy(modelo,carro[i]);
            }
        }
    }

    printf("\n%s", modelo);
    printf("\n%2.2f", maior);
    return 0;
}
