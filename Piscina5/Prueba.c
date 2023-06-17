#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
    int c;
    int a = 1;
    while(nb > 0)
        c = ft_is_prime(nb - 1);
    while(c < nb && c * a <= nb / 2)
        {
        a++;
        printf("En c : %d x %d\n",c,a);
        }
    return(1);
}

int main(void)
{
    printf("Resultado : %d\n",ft_is_prime(77));
    return(0);
}