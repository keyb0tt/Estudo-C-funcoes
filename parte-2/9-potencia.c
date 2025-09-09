// 9.Crie uma função que calcule a potência de um número inteiro (base^expoente).
#include <stdio.h>

int calculoPotencia(int base, int expoente){
    int numAcumulo = 1; 

    for(int i = 1; i <= expoente; i++){
        numAcumulo *= base;
    }

    return numAcumulo;
}

int main(){
    int base, expoente, result;

    printf("Insira a base da potenciação: ");
    scanf("%d", &base);
    printf("Insira o expoente da potenciação: ");
    scanf("%d", &expoente);

    result = calculoPotencia(base, expoente);

    printf("O Resultado da potenciação é igual a: %d", result);

    return 0;
}