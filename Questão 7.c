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

    printf ("----------------------\n");
    printf ("|   Modos de Jogo    |\n");
    printf ("| 1  | Novo Jogo     |\n");
    printf ("| 2  | Carregar Jogo |\n");
    printf ("| 3  | Configurações |\n");
    printf ("----------------------\n");
    printf ("Informe qual opção você deseja: \n");
    scanf ("%d", &idioma);
    
     switch (idioma) {
        case 1:
        printf ("Você inciou um novo jogo!");
        break;
        
        case 2:
        printf ("Carregamos um save do dia 01/11/2023!");
        break;
        
        case 3:
        printf ("Opções de configurações iniciada!");
        break;
     }
    
return 0;
}
