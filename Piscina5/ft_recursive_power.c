#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    if(nb == 0 && power == 0)
        return(1);
    if(power > 1)
        return(nb * ft_recursive_power(nb, power - 1));
}

int main(void)
{
    printf("%d\n",ft_recursive_power(7,8));
}