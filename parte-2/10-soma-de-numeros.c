// 10.Escreva uma função que receba um número inteiro e retorne a soma de todos os números de 1 até ele.
#include <stdio.h>

int calculoSoma(int num){
    int soma;
    for(int i = 1; i <= num; i++){
        soma += i;
    }
    return soma;
}

int main(){
    int num, result;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    result = calculoSoma(num);

    printf("\nA soma de todos os números de 1 até %d é igual a: %d", num, result);
    
    return 0;
}