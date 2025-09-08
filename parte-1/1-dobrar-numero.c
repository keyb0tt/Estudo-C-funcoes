// 1.Crie uma função que receba um número inteiro e retorne o dobro dele.
#include <stdio.h>

int dobrar(int num){
  int result;

  result = num * 2;

  return result;
}

int main(){
  int num, result;

  printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
  printf("Digite o número desejado: ");
  scanf("%d", &num);

  result = dobrar(num);

  printf("\nO dobro de %d é igual a: %d\n", num, result);
  printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");

  return 0;
}