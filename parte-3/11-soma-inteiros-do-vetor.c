// 11.Faça uma função que receba um vetor de inteiros e retorne a soma de todos os elementos.
#include <stdio.h>

int calculoVetor(int vetor[3]){
    int soma;

    for(int i = 0; i <= 2; i++){
        soma += vetor[i];
        printf("%d ", vetor[i]);
    }

    return soma;
}

int main(){
    int vetor[3], result;

    for(int i = 0; i <= 2; i++){
        printf("Digite o %dº elemento do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    result = calculoVetor(vetor);

    printf("\nA soma dos elementos do vetor é igual a: %d", result);

    return 0;
}