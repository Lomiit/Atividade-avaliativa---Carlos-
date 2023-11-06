#include <stdio.h>

int main() {
    int numero, somapares = 0, somaimpares = 0;
    int contpares = 0, contimpares = 0;

    printf("Digite números inteiros (insira um número negativo para parar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break; 
        }

        if (numero % 2 == 0) {
            somapares += numero;
            contpares++;
        } else {
            somaimpares += numero;
            contimpares++;
        }
    }

    if (contpares > 0) {
        double mediapares = (double)somapares / contpares;
        printf("Quantidade de números pares: %d\n", contpares);
        printf("Média dos números pares: %.2lf\n", mediapares);
    } else {
        printf("Nenhum número par foi inserido.\n");
    }

    if (contimpares > 0) {
        double mediaimpares = (double)somaimpares / contimpares;
        printf("Quantidade de números ímpares: %d\n", contimpares);
        printf("Média dos números ímpares: %.2lf\n", mediaimpares);
    } else {
        printf("Nenhum número ímpar foi inserido.\n");
    }

    return 0;
}