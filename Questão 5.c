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
    
int idioma;

    printf ("------------------\n");
    printf ("|    Idiomas     |\n");
    printf ("| 1  | Inglês    |\n");
    printf ("| 2  | Português |\n");
    printf ("| 3  | Francês   |\n");
    printf ("------------------\n");
    printf ("Informe qual idoma você deseja: \n");
    scanf ("%d", &idioma);
    
     switch (idioma) {
        case 1:
        printf ("Welcome!");
        break;
        
        case 2:
        printf ("Bem-Vindo!");
        break;
        
        case 3:
        printf ("Accueillir!");
        break;
     }
    
return 0;
}
