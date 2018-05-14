/*
Segundo uma tabela médica, o peso ideal está relacionado com a altura e o sexo.
Fazer um algoritmo que receba a altura e o sexo de uma pessoa, calcule e
imprima o seu peso ideal, utilizando as seguintes fórmulas:

* para homens: 72,7 x h - 58
* para mulheres: 62,1 x h - 44,7

*/

#include <stdio.h>
#include <stdlib.h>

main(){
    float altura, peso_ideal;
    char sexo;

    printf("\nH - Homem");
    printf("\nM - Mulher");

    printf("\n");

    printf("\nSexo: ");
    scanf("%c", &sexo);


    //Quando coloca o número primeiro que o caracter a leitura sai errada
    printf("\nAltura: ");
    scanf("%f", &altura);



    if(sexo == 'H')
        peso_ideal = 72.7 * altura - 58;
    else if(sexo == 'M')
        peso_ideal = 62.7 * altura - 44.7;

    printf("\nPeso Ideal: %2.2f", peso_ideal);

    return 0;
}
