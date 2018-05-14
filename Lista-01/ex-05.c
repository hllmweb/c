/*
A condição física de uma pessoa pode ser medida com base no cálculo do IMC,
Índice de Massa Corporal, o qual é calculado dividindo-se a massa da pessoa (m em kg)
pela altura da mesma (h em m) elevada ao quadrado (IMC= m/h2). Escreva um
programa que leia a massa e a altura de uma pessoa, calcule e mostre o IMC

FORMULÁRIO IMC
imc = massa / altura ^ 2
*/

#include <stdio.h>
#include <math.h>
int main(){
    float imc, massa, altura;

    printf("\nDigite a massa da pessoa: ");
    scanf("%f",&massa);

    printf("\nDigite a altura da pessoa: ");
    scanf("%f", &altura);

    imc = massa / pow(altura,2);


    printf("%2.2f", imc);
    return 0;
}
