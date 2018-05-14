/*
Escrever um programa que leia três números imprima se eles podem ou não ser
lados de um triângulo.


para que se possa formar um triangulo 1 lado nao pode ser maior do que a soma dois outros dois ou seja
se lado1<lado2+lado3 e lado2<lado1+lado3 e lado3<lado1+lado

*/


#include <stdio.h>

int main(){
    int num_a, num_b, num_c;
    printf("\nNUM 1: ");
    scanf("%d", &num_a);

    printf("\nNUM 2: ");
    scanf("%d", &num_b);

    printf("\nNUM 3: ");
    scanf("%d", &num_c);

    if((num_a < num_b + num_c) && (num_b < num_a + num_c) && (num_c < num_a+num_b)){
        printf("E triangulo");
    }else{
        printf("Nao e triangulo");
    }

    return 0;
}
