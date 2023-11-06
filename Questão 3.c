/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main ()
{

float nota;

printf ("Informe sua nota:");
scanf ("%f", &nota);

if (nota >= 9) {
    printf ("Você foi excelente");
} else if (nota >= 7 || nota <= 8.9) {
    printf ("Você foi bom");
} else if (nota >= 5 || nota <= 6.9) {
    printf ("Você foi razoável");
} else {
    printf ("Você foi insuficiente, ou seja, não estudou!");
}

  return 0;
}