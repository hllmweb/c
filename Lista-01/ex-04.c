/*

Faça um programa que, a partir das medidas dos lados de um retângulo, lidos via
teclado, calcule a área e o perímetro deste retângulo.
A = a.b
P = 2.a + 2.b

*/

#include <stdio.h>

int main(){
    float lado_a, lado_b, area, perimetro;

    printf("\nDigite o Lado A: ");
    scanf("%f", &lado_a);

    printf("\nDigite o Lado B: ");
    scanf("%f", &lado_b);

    area        = lado_a * lado_b;
    perimetro   = (2*lado_a) + 2*(lado_b);

    printf("\nArea: %2.2f", area);
    printf("\nPerimetro: %2.2f", perimetro);

    return 0;
}
