// 6.Escreva uma função que calcule o fatorial de um número.
#include <stdio.h>

int calculoFatorial(int num){
    int fatorial = 1;
    
    while(num > 1){
        fatorial *= num;
        num--;
    }

    return fatorial;
}

int main(){
    int num, resultado;

    printf("Insira o número para calcular seu fatorial: ");
    scanf("%d", &num);

    resultado = calculoFatorial(num);

    printf("\nO Fatorial de %d é igual a: %d", num, resultado);
    
    return 0;
}