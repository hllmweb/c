/*
Escrever um programa que leia três números e exiba o maior deles.

*/
#include <stdio.h>

int main (void){
    int num_a, num_b, num_c;

    printf("\nNUM 1: ");
    scanf("%d", &num_a);

    printf("\nNUM 2: ");
    scanf("%d", &num_b);

    printf("\nNUM 3: ");
    scanf("%d", &num_c);

    if(num_a > num_b && num_a > num_c){
        printf("NUM 1 e o maior: %d", num_a);
    }else if(num_b > num_a && num_b > num_c){
        printf("NUM 2 e o maior: %d", num_b);
    }else if(num_c > num_a && num_c > num_b){
        printf("NUM 3 e o maior: %d", num_c);
    }

    return 0;
}
