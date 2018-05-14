/*
2. Faça um algoritmo que receba em um vetor o nome de dez produtos e em outro vetor, seus respectivos preços, calcule e mostre:
a. A quantidade de produtos com preço inferior a R$ 50,00;
b. A média dos preços dos produtos com preço superior a R$ 80,00.
*/


#include <stdio.h>

int main(){
    char nome_produto[3];
    float preco_produto[3], media=0, soma=0;
    int i, qtd_a=0, qtd_b=0;


    for(i=1; i<=3; i++){
        printf("\nNome do Produto %d: ", i);
        scanf("%s", &nome_produto[i]);

        printf("Preco do Produto %d em R$: ", i);
        scanf("%f", &preco_produto[i]);
    }

    for(i=1; i<=3; i++){
        if(preco_produto[i] > 0 && preco_produto[i] <= 50.0)
            qtd_a += 1; // qtd_a = qtd_a + 1


        if(preco_produto[i] >= 80.0){
            qtd_b += 1; //qtd_b = qtd_b + 1;
            soma = soma + preco_produto[i];
            media = soma / qtd_b;
        }

    }

    printf("\nQuantidade de produtos inferior a R$ 50.00: %d", qtd_a);
    printf("\nMedia dos precos superior a R$ 80.00: %2.2f", media);

    return 0;
}
