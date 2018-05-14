/*
Construir um algoritmo que indique se o número digitado está compreendido
entre 20 e 90 ou não

*/

#include <stdio.h>

int main(){
    int num;

    printf("\nNUMERO: ");
    scanf("%d", &num);

    if(num>= 20 & num<= 90){
        printf("Numero %d, ta entre 20 e 90", num);
    }else{
        printf("Nao ta entre 20 e 90");
    }

    return 0;
}
