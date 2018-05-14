/*

Crie um programa que permita fazer a conversão cambial entre Dólares e Reais.
Considere como taxa de câmbio US$1,0 = R$2,40. Leia um valor em Dólares pelo
teclado e mostre o correspondente em Reais.

*/

#include <stdio.h>

int main(){
    float real, dolar;

    printf("\nDigite o valor em dolar U$: ");
    scanf("%f", &dolar);

    real = dolar * 2.4;
    printf("%2.2f", real);

    return 0;
}
