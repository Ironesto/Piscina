#include <stdio.h>
#include <unistd.h>

int	ft_find_next_prime(int nb)
{
    int c = 2;
    int a = 1;
    while(c < nb && c * a <= nb / 2)
    {
        while(a < nb && c * a <= nb)
        {
            a++;
            if( a * c == nb)
                return(ft_find_next_prime(nb + 1));
        }
        a = 1;
        c++;
        //printf("En c : %d x %d\n",c,a);
    }
    return(nb);
}

int main(void)
{
    printf("Resultado : %d\n",ft_find_next_prime(37));
    return(0);
}