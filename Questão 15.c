#include <stdio.h>

int main() {
    int escolha;
    double valor, resultado;

    while (1) {
        printf("Escolha a conversão desejada:\n");
        printf("1. Quilômetros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair do programa\n");
        printf("Digite o número da sua escolha: ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            break;
        }

        switch (escolha) {
            case 1:
                printf("Digite a quantidade de quilômetros: ");
                scanf("%lf", &valor);
                resultado = valor * 0.621371;
                printf("%.2lf quilômetros equivalem a %.2lf milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%lf", &valor);
                resultado = (valor * 9/5) + 32;
                printf("%.2lf graus Celsius equivalem a %.2lf graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Escolha inválida. Por favor, escolha uma opção válida.\n");
                break;
        }
    }

    return 0;
}