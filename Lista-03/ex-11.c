/*
Faça um algoritmo que leia uma matriz 3x3 e traga a soma dos números que são divisíveis por 7.
49/7 = 7
343/7 = 7

49mod7 = 0
343mod7

14
4+4 = 8 - 1 = 7

7203

203 + 203


verificar se é divisivel por 7 e depois somar apenas os que são divisiveis por 7
*/

#include <stdio.h>
int main(){
    int num[3][3], soma=0;

    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            printf("\nNUM [%d][%d]:", i,j);
            scanf("%d", &num[i][j]);
        }
    }

    printf("\n\nMATRIZ[3][3]\n\n");

    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){

            //if(num[i][j]%7 >= 1){
            //    printf("Nao");
            //}else{
            if(num[i][j]%7 == 0){
                printf("Sim"); // fazer um acomulador de todos os divisiveis
                soma += num[i][j];
            }
            printf(" %d", num[i][j]);
        }
        printf("\n");
    }

    printf("\nA Soma dos numeros divisiveis por 7 e: %d", soma);
/*    int num[] = {1,4}, k;
    for(int i=6-1; i>=0; i--){
        if(num[i]%7 >= 1){
            k = 1;
        }
        else{
            k = 2;
        }

    }

    if(k == 1){
        printf("Nao e divisivel");
    }
    if(k == 2){
        printf("E divisivel");
    }*/

    return 0;
}
