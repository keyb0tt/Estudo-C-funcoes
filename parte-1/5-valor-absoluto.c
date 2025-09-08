// 5.Faça uma função que receba um número e retorne o seu valor absoluto.
#include <stdio.h>

int calculoAbsoluto(int num){
    int valorAbsoluto, distancia = 0, i;
    if(num < 0){
        for(i = num; i <= 0; i++){
            distancia++;
        }
        valorAbsoluto = distancia - 1;
    } else {
        for(i = num; i >= 0; i--){
            distancia++;
        }
        valorAbsoluto = distancia - 1;
    }

    return valorAbsoluto;
}

int main(){
    int num, result;

    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    printf("Digite o número para obter seu valor absoluto: ");
    scanf("%d", &num);

    result = calculoAbsoluto(num);

    printf("O Valor absoluto de %d é igual a: %d", num, result);
    printf("\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");

    return 0;
}