/*
Faça um programa para calcular a média final de um aluno, supondo-se que há quatro
notas bimestrais durante o ano e que esta é calculada através de uma média aritmética
simples (todos os bimestres têm o mesmo peso).
*/

#include <stdio.h>
void main(){
    float nota_1, nota_2, nota_3, nota_4, media;

    printf("\nNOTA 1: ");
    scanf("%f", &nota_1);

    printf("\nNOTA 2: ");
    scanf("%f",&nota_2);


    printf("\nNOTA 3: ");
    scanf("%f", &nota_3);


    printf("\nNOTA 4: ");
    scanf("%f", &nota_4);


    media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;
    printf("\nMedia %2.2f ", media);


    return 0;
}
