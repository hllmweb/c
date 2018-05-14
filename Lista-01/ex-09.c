/*
O critério de avaliação semestral de determinada escola segue a regra:
P1 – primeira avaliação do semestre.
P2 – segunda avaliação do semestre.
Ativ – nota atribuída pelas atividades realizadas no semestre.
Média = P1 x 4 + P2 x 4 + Ativ x 2
Escreva um programa que leia as notas das provas (P1 e P2) e da atividade (Ativ),
calcule e mostre a média, seguindo o cálculo acima.

*/


#include <stdio.h>

void main(){
    float p1, p2, ativ, media;

    printf("\nDigite P1: ");
    scanf("%f", &p1);

    printf("\nDigite P2: ");
    scanf("%f", &p2);

    media = p1 *4 + p2 *4 + ativ *2;

    printf("Media %2.2f: ", media);

    return 0;
}
