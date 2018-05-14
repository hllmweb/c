/*
Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00; caso contrário o lucro será de 30%.
Fazer um programa para ler o valor do produto e imprimir o valor da venda.
*/
#include <stdio.h>

void main(){
    float valor_produto, lucro;

    printf("\n Valor do Produto: ");
    scanf("%f", &valor_produto);

    if(valor_produto < 20){
        lucro = valor_produto * 45 / 100;
        valor_produto += lucro;
    }else{
        lucro = valor_produto * 30 / 100;
        valor_produto += lucro;
    }

    printf("Valor da Venda: %2.2f", valor_produto);

    return 0;
}
