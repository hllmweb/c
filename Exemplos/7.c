/*Faça um algoritmo que calcula o fatorial de N numeros. */
#include <stdio.h>

int fatorial(int num){
    int fat=1;
    for(int i=1; i<=num; i++)
        fat *= i;
        return(fat);
}


int main(){
    int num;
    printf("\nNUM: ");
    scanf("%d", &num);
    printf("\nO fatorial de %d e %d", num, fatorial(num));

    return 0;
}
