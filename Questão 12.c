#include <stdio.h>

int main() {
    int quantidadedenotas;
    double nota, soma = 0.0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadedenotas);

    if (quantidadedenotas <= 0) {
        printf("A quantidade de notas deve ser maior que zero.\n");
        return 1; 
    }

    for (int i = 1; i <= quantidadedenotas; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }

    double media = soma / quantidadedenotas;
    printf("A média das notas é: %.2lf\n", media);

    return 0;
}