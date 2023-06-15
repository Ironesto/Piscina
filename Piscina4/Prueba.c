#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
    char let;
    int *nb2 = nb;
    while(nb > 10)
        nb = nb / 10;
    let = nb + 48;
    write(1,&let,1);
    while (nb < nb2)
        *nb2 = *nb2 / 10;
    
    
}

int main(void)
{
    ft_putnbr(34960);
}