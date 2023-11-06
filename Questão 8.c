#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL,"portuguese");

    int i;
    int n;
    
    printf ("Informe um número para contagem regressiva:");
    scanf ("%d", &n);

    for (i = n; i >= 0; i--)
    printf ("%d\n", i);

    return 0;
    }