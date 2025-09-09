// 8.Implemente uma função que receba dois números e retorne o MMC (mínimo múltiplo comum).
#include <stdio.h>

int calculoMmc(int num1, int num2){
    int resto, a, b;

    a = num1;
    b = num2;
    
    do {
        resto = a % b;

        a = b;
        b = resto;

    } while (resto != 0);

    return (num1 * num2) / a;
}

int main(){
    int num1, num2, mmc;
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o segundo número: ");
    scanf("%d", &num2);

    mmc = calculoMmc(num1, num2);

    printf("\nO MMC é igual a: %d", mmc);

    return 0;
}