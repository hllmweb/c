/*

Faça um algoritmo para ler um valor N qualquer (que será o tamanho dos vetores).

Após, ler dois vetores A e B (de tamanho N cada um) e depois armazenar
em um terceiro vetor Soma a soma dos elementos do vetor A c
om os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.

*/

#include <stdio.h>

int main(){
    int tamanho;

    printf("\nTAMANHO DO VETOR: ");
    scanf("%d", &tamanho);

    for(int i=0; i<=tamanho-1; i++){
        int num_a[tamanho], num_b[tamanho];

        printf("\nVetor[%d] A: ", i);
        scanf("%d", &num_a[i]);

        printf("\nVetor[%d] B: ", i);
        scanf("%d", &num_b[i]);

    }


    for(int i=0; i<=tamanho-1; i++){
        int num_a[tamanho], num_b[tamanho], soma[tamanho];

        soma[i] = num_a[i] + num_b[i];

        printf("\n\n Soma: %d", soma[i]);

    }



    return 0;
}
