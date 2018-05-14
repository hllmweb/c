/*
Elaborar um programa que receba, via teclado, os valores do espaço percorrido e do
tempo gasto por um veículo em movimento, para calcular e apresentar em tela sua
velocidade média.

vm = s_final - s_inicial / t_final - t_inicial

*/

#include <stdio.h>

void main(){
    float vm, s_final, s_inicial, t_final, t_inicial;
    printf("\nEspaço Inicial: ");
    scanf("%f", &s_inicial);

    printf("\nEspaço Final: ");
    scanf("%f", &s_final);

    printf("\nTempo Inicial: ");
    scanf("%f", &t_inicial);

    printf("\nTempo Final: ");
    scanf("%f", &t_final);


    vm = (s_final - s_inicial ) / (t_final - t_inicial);

    printf("\nVelocidade Media: %2.2f", vm,"m/s");

    return 0;
}
