#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
    int nb2 = nb;
    int control = nb;
    char let;
    while( nb > 10)
        nb = nb / 10;
    let = nb + 48;
    write(1,&let,1);
    while(nb < nb2)
    {
        nb = nb * 10;
        while (nb2 > nb * 10)
            nb2 = nb2 / 10;
        nb2 = nb2 - nb;
        nb = nb + nb2;
        let = nb2 + 48;
        write(1,&let,1);
        nb2 = control;
    }
}

int main(void)
{
    ft_putnbr(34960);
}