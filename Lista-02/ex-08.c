/*

Escrever um programa para ler um peso na Terra, e o número de um planeta, e
imprimir o valor do seu peso neste planeta segundo a tabela abaixo.


Para calcular o peso no planeta use a fórmula
Pi = P Terra /10 * gi

*/

#include <stdio.h>
#include <string.h>
int main(void){
    float peso_terra, peso_planeta;
    char planeta[6][10] = {"Mercurio", "Venus", "Marte", "Jupter", "Saturno", "Urano"}, nome_planeta[10];
    int n_planeta;

    printf("\n1 - Mercurio");
    printf("\n2 - Venus");
    printf("\n3 - Marte");
    printf("\n4 - Jupter");
    printf("\n5 - Saturno");
    printf("\n6 - Urano");

    printf("\n");

    printf("\nPeso na Terra: ");
    scanf("%f", &peso_terra);

    printf("\nNumero do Planeta: ");
    scanf("%d", &n_planeta);

    switch(n_planeta){
        case 1:
            peso_planeta = peso_terra / 10 * 0.37;
            strcpy(nome_planeta,planeta[0]);
        break;
        case 2:
            peso_planeta = peso_terra / 10 * 0.88;
            strcpy(nome_planeta,planeta[1]);
        break;
        case 3:
            peso_planeta = peso_terra / 10 * 0.38;
            strcpy(nome_planeta,planeta[2]);
        break;
        case 4:
            peso_planeta = peso_terra / 10 * 2.64;
            strcpy(nome_planeta,planeta[3]);
        break;
        case 5:
            peso_planeta = peso_terra / 10 * 1.15;
            strcpy(nome_planeta,planeta[4]);
        break;
        case 6:
            peso_planeta = peso_terra / 10 * 1.17;
            strcpy(nome_planeta,planeta[5]);
        break;
    }

    printf("O Peso no planeta %s e de %f",nome_planeta, peso_planeta);

    return 0;
}
