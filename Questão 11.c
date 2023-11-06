#include <stdio.h>
#include <string.h>

int main() {
    char codigocerto[] = "1234"; 
    char codigoinserido[5];

    while (1) {
        printf("Digite o código de acesso: ");
        scanf("%s", codigoinserido);

        if (strcmp(codigoinserido, codigocerto) == 0) {
            printf("Acesso permitido! Bem-vindo ao edifício.\n");
            break;
        } else {
            printf("Código de acesso incorreto. Tente novamente.\n");
        }
    }

    return 0;
}