// 4.Crie uma função que receba um caractere e retorne 1 se for vogal, 0 caso contrário.
#include <stdio.h>

int verificaVogal(char letra){
    int verificador;
    if(
    letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' ||
    letra == 'i' || letra == 'I' ||letra == 'o' || letra == 'O' ||
    letra == 'u' || letra == 'U')
    {
        verificador = 1;
    } else {
        verificador = 0;
    }
    return verificador;
}

int main(){
    char letra;
    int verificador;

    printf("->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");
    printf("Digite a letra a ser verificada: ");
    scanf("%c", &letra);

    verificador = verificaVogal(letra);

    if(verificador == 1){
        printf("\nEssa letra é uma vogal!");
    } else {
        printf("\nEssa letra não é uma vogal!");
    }
    printf("\n->->->->->->->->->->->->->->->->->->->->->->->->->->->->->->\n");

    return 0;
}