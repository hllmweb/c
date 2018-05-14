/*
Faça um algoritmo que exiba a sequência fibonacci.
1,1,2,3,5,8,13...
*/


#include <stdio.h>

int main(){
    int num, i=1, ant2=0, ant1=1, x;

    printf("\nN: ");
    scanf("%d", &num);

    while(i<=num){
        x = ant1+ant2;
        /*if(x>1){
            printf(" %d",x);
        }else{
            printf(" %d",x);
        }*/
        ant1 = ant2;
        ant2 = x;

        printf(" %d", x);

        i++;
    }

    return 0;
}
