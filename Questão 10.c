#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

int numero1;
int numero2;
char op ;
float soma, div, multi, sub;

setlocale(LC_ALL, "portuguese");

printf ("Digite o primeiro número:\n");
scanf ("%d", &numero1);
printf ("Digite o segundo número:\n");
scanf ("%d", &numero2);

system("cls || clear");

printf ("Agora informe qual operação deseja fazer:\n\n");
printf ("Soma | + |, Subtração | - |, Divisão | / |, Multiplicação | * |\n");
scanf ("%s", &op);

switch (op) {
    case '+':
    soma = numero1 + numero2;
    printf ("O resultado de sua operação é de %.f", soma);
    break;

    case '-':
    sub = numero1 - numero2;
    printf ("O resultado de sua operação é de %.f", sub);
    break;

    case '*':
    multi = numero1 * numero2;
    printf ("O resultado de sua operação é de %.f", multi);
    break;

    case '/':
    div = numero1 / numero2;
    printf ("O resultado de sua operação é de %.f", div);
    break;
 
}

return 0; 
}
