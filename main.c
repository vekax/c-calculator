#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //lib de acentos
    setlocale(LC_ALL, "");

    //def variáveis
    float n1, n2;
    int opcao;

    printf("Insira o primeiro número\n");
    scanf("%f", &n1);
    printf("Insira o segundo número\n");
    scanf("%f", &n2);

    printf("\n\nAgora, escolha uma operação");
    printf("\n 1. Adição");
    printf("\n 2. Subtração");
    printf("\n 3. Multiplicação");
    printf("\n 4. Divisão\n");

    scanf("%d", &opcao);

    switch(opcao){
    case 1:
        printf("O resultado da soma é: %.2f ", n1 + n2);
        break;
    case 2:
        printf("O resultado da subtração é: %.2f ", n1 - n2);
        break;
    case 3:
        printf("O resultado da multiplicação é: %.2f ", n1 * n2);
        break;
    case 4:
        printf("O resultado da divisão é: %.2f ", n1 / n2);
        break;
    default:
        printf("Opção inválida");
        break;

    }
system("pause");
}
