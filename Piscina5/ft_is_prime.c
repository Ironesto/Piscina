#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
    int n = 2;
    while(n < nb -1 && nb % n != 0)
        n++;
    if(nb % n > 0 || nb == 2 || nb == 0)
        return(1);
    return(0);
}

int main(void)
{
    printf("Resultado : %d\n",ft_is_prime(-13));
    return(0);
}
