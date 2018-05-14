/*

8. Faça um algoritmo para ler 20 números e armazenar em um vetor.
Após a leitura total dos 20 números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.

*/


#include <stdio.h>
#define MAX 20

int main(){
    int num[MAX], i;

    for(i=0; i<=MAX-1; i++){
        printf("NUM %d: ", i);
        scanf("%d", &num[i]);
    }

    for(i=MAX-1; i>=0; i--){
        printf("\nNUM %d: %d", i,num[i]);
    }


    return 0;
}
