// 2.Escreva uma função que receba dois números inteiros e retorne o maior deles.
#include <stdio.h>

int maiorNum(int n1, int n2){
    int maior;

    if(n1 == n2){
        printf("Os números são iguais!");
    }

    maior = (n1 > n2) ? n1 : n2;

    return maior;

}

int main(){
    int n1, n2, maior;
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    
    maior = maiorNum(n1, n2);
    
    printf("O maior número digitado foi: %d\n", maior);
    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");

    return 0;
}