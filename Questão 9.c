#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL,"portuguese");

int numero;
int i;
int contador = 0;

printf ("Informe um n�mero inteiro:");
scanf ("%d", &numero);

switch (numero)
{
    case 0:
    case 1:
    printf ("N�mero n�o primo.");
    break;

    default:
    for (i = 1; i <= numero; i++) {
        if (numero %i == 0) {
            contador++;
        }
    }

if (contador == 2) {
    printf ("N�mero primo");
} else {
    printf ("N�mero n�o primo");
}
break;
}

return 0;
}