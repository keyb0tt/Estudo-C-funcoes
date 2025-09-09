// 7.Crie uma função que receba dois números e retorne o MDC (máximo divisor comum).
#include <stdio.h>

int calculoMdc(int num1, int num2){
    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

        //num1 representa o MDC, já que é substituído pelo num2 na próxima conta, e caso resto == 0 antes dele ser substituído, o loop é encerrado

    } while (resto != 0);

    return num1;
}

int main(){
    int num1, num2, result;
    printf("Digite o primeiro número: ");
    scanf(" %d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    result = calculoMdc(num1, num2);

    printf("\nMDC: %d", result);

    return 0;
}