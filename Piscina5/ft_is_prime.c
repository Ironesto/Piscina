#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
    int c = 2;
    int a = 1;
    while(c < nb && c * a <= nb / 2)
    {
        while(a < nb && c * a <= nb)
        {
            a++;
            //printf("%d x %d\n",c,a);
            if( a * c == nb)
                return(0);
        }
        a = 1;
        //printf("En c : %d x %d\n",c,a);
        c++;
    }
    return(1);
}

int main(void)
{
    printf("Resultado : %d\n",ft_is_prime(77));
    return(0);
}

/*  MIRAR PRUEBA.C .if(m % N != 0) Aumentando N llega un momento en que si es 0 no es primo. Mejor que todo lo escrito arriba.
    Hacer lo mismo para next_prime*/
