/*

Crie um programa que permita fazer a conversão cambial entre Reais e Dólares.
Considere como taxa de câmbio US$1,0 = R$2,40. Leia um valor em Reais pelo teclado
e mostre o correspondente em Dólares.

*/

#include <stdio.h>

int main(){
    float real, dolar;

    printf("\nDigite o valor em reais R$: ");
    scanf("%f", &real);

    dolar = real/2.4;
    printf("%2.2f", dolar);

    return 0;
}
