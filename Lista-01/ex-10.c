/*

Elaborar um programa para receber valores, via teclado, nas variáveis "a" e "b".
Após isto, o programa, utilizando-se de uma 3a. variável "c", deverá trocar o conteúdo
das variáveis "a" e "b".

*/


#include <stdio.h>

void main(){
    int a, b, c;
    a = 10;
    b = 5;

    printf("\nValor de A: %d", a);
    printf("\nValor de B: %d", b);

    c = a;
    a = b;
    b = c;

    printf("\nValor de A: %d",a);
    printf("\nValor de B: %d",b);

    return 0;
}
