#include <stdio.h>
#include <unistd.h>

void ft_print_combn(int n)
{
    n = n - 1;
    int larg[n];
    while(n >= 0)
    {
        larg[n] = 34;
        //¿Por qué si n es 4 en larg[4] es el mismo valor que el resto del array?       
        printf("n es %d : y %d\n",n , larg[n]);
        n--;
    }

    }

int main (void)
 {
    int i = 4;
    ft_print_combn(i);
 }