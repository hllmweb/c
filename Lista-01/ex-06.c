/*

Dado o valor do raio (r) de uma circunferência, elaborar um programa para calcular e
imprimir sua área (A) e o seu comprimento (C). A fórmula da área do círculo é A=pi r 2
e do comprimento é C=2pi r.

*/

#include <stdio.h>
#define PI 3.1415

int main(){
    float area, comprimento,raio;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area        = PI*pow(raio,2);
    comprimento = 2*PI*raio;

    printf("\nArea da Circunferencia: %2.2f", area);
    printf("\nArea do Comprimento: %2.2f", comprimento);

    return 0;
}
