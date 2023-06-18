#include <stdio.h>
#include <unistd.h>

int	ft_find_next_prime(int nb)
{
    int n = 2;
    while(n < nb -1 && nb % n != 0)
        n++;
    if(nb % n > 0 || nb == 2 || nb == 0)
        return(nb);
    return(ft_find_next_prime(nb + 1));
}

int main(void)
{
    printf("Resultado : %d\n",ft_find_next_prime(4));
    return(0);
}