// 3.Implemente uma função que receba um número inteiro e verifique se ele é par ou ímpar.
#include <stdio.h>

int verificaParImpar(int num){
    if(num % 2 == 0){
        printf("O seu número é par!!");
    } else {
        printf("O seu número é ímpar!!");
    }
    printf("\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    return num;
}

int main(){
    int num, result;
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    printf("Digite o número desejado: ");
    scanf("%d", &num);

    result = verificaParImpar(num);

    return 0;
}