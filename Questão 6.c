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
    printf ("| Peças de Roupa |\n");
    printf ("| 1  | Calça     |\n");
    printf ("| 2  | Sapato    |\n");
    printf ("| 3  | Camiseta  |\n");
    printf ("------------------\n");
    printf ("Informe qual peça você deseja: \n");
    scanf ("%d", &idioma);
    
     switch (idioma) {
        case 1:
        printf ("A peça de calça está no valor de R$ 260,00");
        break;
        
        case 2:
        printf ("Um par de sapatos está no valor de R$ 349,90");
        break;
        
        case 3:
        printf ("Uma camiseta está no valor de R$ 69,90");
        break;
     }
    
return 0;
}
