/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    float valor;
    float desconto10;
    float desconto15;
    float total;
    float total2;
    
    printf ("---------------------");
    printf ("|   Dias da Semana  |");
    printf ("| 1  | Domingo      |");
    printf ("| 2  | Segunda      |");
    printf ("| 3  | Terça        |");
    printf ("| 4  | Quarta       |");
    printf ("| 5  | Quinta       |");
    printf ("| 6  | Sexta        |");
    printf ("| 7  | Sábado       |");
    printf ("---------------------");
    printf ("Informe qual o dia da compra: \n");
     scanf ("%d", &dias);
    printf ("Informe qual o valor da compra: \n");
    scanf ("%f", &valor);
    
    switch (dias) {
        case 1:
        if (valor > 100){ 
        desconto15 = valor * 0.15;
        total = valor - desconto15;
        printf ("Sua compra feita no Domingo no valor de R$ %.2f ganhou desconto de 15% \n",valor);
        printf ("Ficou o valor total de R$ %.2f com desconto \n", total);
    } else {
        printf ("Sua compra feita no Domingo no valor de R$ %.2f \n",valor);
    }
    break;

    case 2:
        if (valor > 100){ 
        desconto10 = valor * 0.1;
        total2 = valor - desconto10;
        printf ("Sua compra feita na Segunda no valor de R$ %.2f ganhou desconto de 10% \n",valor);
        printf ("Ficou o valor total de R$ %.2f com desconto \n", total2);
    } else {
        printf ("Sua compra feita na Segunda no valor de R$ %.2f \n",valor);
    }
    break;
    
    case 3:
        if (valor > 100){ 
        desconto10 = valor * 0.1;
        total2 = valor - desconto10;
        printf ("Sua compra feita na Terça no valor de R$ %.2f ganhou desconto de 10% \n",valor);
        printf ("Ficou o valor total de R$ %.2f com desconto \n", total2);
    } else {
        printf ("Sua compra feita na Terça no valor de R$ %.2f \n",valor);
    }
    break;
    
    case 4:
        if (valor > 100){ 
        desconto10 = valor * 0.1;
        total2 = valor - desconto10;
        printf ("Sua compra feita na Quarta no valor de R$ %.2f ganhou desconto de 10% \n",valor);
        printf ("Ficou o valor total de R$ %.2f com desconto \n", total2);
    } else {
        printf ("Sua compra feita na Quarta no valor de R$ %.2f \n",valor);
    }
    break;
    
    case 5:
        if (valor > 100){ 
        desconto10 = valor * 0.1;
        total2 = valor - desconto10;
        printf ("Sua compra feita na Quinta no valor de R$ %.2f ganhou desconto de 10% \n",valor);
        printf ("Ficou o valor total de R$ %.2f com desconto \n", total2);
    } else {
        printf ("Sua compra feita na Quinta no valor de R$ %.2f \n",valor);
    }
    break;
    
    case 6:
        if (valor > 100){ 
        desconto10 = valor * 0.1;
        total2 = valor - desconto10;
        printf ("Sua compra feita na Sexta no valor de R$ %.2f ganhou desconto de 10% \n",valor);
        printf ("Ficou o valor total de R$ %.2f com desconto \n", total2);
    } else {
        printf ("Sua compra feita na Sexta no valor de R$ %.2f \n",valor);
    }
    break;
    
      case 7:
        if (valor > 100){ 
        desconto15 = valor * 0.15;
        total = valor - desconto15;
        printf ("Sua compra feita no Sábado no valor de R$ %.2f ganhou desconto de 15% \n",valor);
        printf ("Ficou o valor total de R$ %.2f com desconto \n", total);
    } else {
        printf ("Sua compra feita no Sábado no valor de R$ %.2f \n",valor);
    }
    break;
    }
    
    return 0;
}