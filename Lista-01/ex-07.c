/*

Elaborar um programa para calcular e imprimir o volume (V) de uma esfera e a área
(A) de sua superfície, dado o valor de seu raio (R). A fórmula do volume da esfera é
V=4/3 pi R^3

*/

#include <stdio.h>
#define PI 3.1413

int main(){
    float raio, volume, area;

    printf("\nDigite o RAIO: ");
    scanf("%f",&raio);

    volume  = 4/3*PI*pow(raio,3);
    area    = PI*pow(raio,2);

    printf("\nO Volume da Circuferencia e: %2.2f", volume);
    printf("\nA area da Superficie da Circuferencia e: %2.2f", area);

    return 0;
}
