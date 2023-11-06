/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int temp;
    
   printf ("Informe qual a temperatura que está: \n");
   scanf ("%d", &temp);
   
   if (temp > 25) {
       printf ("O clima está ensolarado! %d ° \n", temp);
      } else if (temp < 15) {
          printf ("O clima está chuvoso! %d ° \n", temp);
      } else if (temp >= 15 || temp <= 25) {
          printf ("O clima está nublado! %d ° \n", temp);
      }
   

    return 0;
}
