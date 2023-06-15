#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
    char let;
    while(nb > 10)
    {
    ft_putnbr(nb / 10);
    let = nb + 48;
    write(1,&nb,1);
    }
    
}

int main(void)
{
    ft_putnbr(34960);
}