#include <stdio.h>
#include <unistd.h>

//¿Sería más fácil usando un puntero en vez de guardar el número original en una variable aparte como es "control"?

char ft_conver(int num)
{
    char let = num + 48;
    write(1,&let,1);
}

void ft_putnbr(int nb)
{
    int nb2 = nb;
    int control = nb;
    while( nb > 10)
        nb = nb / 10;
    ft_conver(nb);
    while(nb < control)
    {
        nb = nb * 10;
        while (nb2 > nb * 10)
            nb2 = nb2 / 10;
        nb2 = nb2 - nb;
        nb = nb + nb2;
        ft_conver(nb2);
        nb2 = control;
    }
}

int main(void)
{
    int num = 54782;
    ft_putnbr(num);
}