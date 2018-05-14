#include <stdio.h>



int main(){
    int i, vet[5];


    //Entrando valores
    for(i=1; i<=5; i++){
        printf("Valor[%d]: ", i);
        scanf("%d", &vet[i]);
    }


    //Imprimindo valores
    for(i=1; i<=5; i++){
        printf("%d",vet[i]);
    }





    return 0;;
}
