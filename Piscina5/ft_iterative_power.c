#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int c = nb;
    while(power > 1)
    {
        nb *= c;
        power--;
    }
    return(nb);
}

int main(void)
{
    printf("%d\n",ft_iterative_power(6,3));
}