#include <unistd.h>
#include <stdio.h>

void ft_putnbr (int nbr)
{
    char let;

    if (nbr > 10)
        ft_putnbr(nbr / 10);
    let = nbr % 10 + '0';
    write (1, &let, 1);
}

void ft_hexa (int nbr, char *base)
{
    if (nbr < 16)
        write (1, &base[nbr % 16], 1);
    if (nbr > 16)
    {
        ft_hexa(nbr / 16, base);
        write (1, &base[nbr % 16], 1);
    }
}

void ft_bin(int nbr, char *base)
{
    if (nbr < 2)
        write (1, &base[nbr % 2], 1);
    if (nbr > 2)
    {
        ft_bin(nbr / 2, base);
        write (1, &base[nbr % 2], 1);
    }
}

void ft_oct(int nbr, char *base)
{
    if (nbr < 8)
        write (1, &base[nbr % 8], 1);
    if (nbr > 8)
    {
        ft_oct(nbr / 8, base);
        write (1, &base[nbr % 8], 1);
    }
}

void ft_putnbr_base(int nbr, char *base)
{
    int cont;
    int aux;

    cont = 0;
    aux = 1;
    while (base[cont])
    {
        while(base[aux])
        {
            //printf("aux = %d y cont =%d",aux, cont);
            if (base[aux] == '+' || base[aux] == '-' || base[aux] == base[cont])
                cont = 20;
            aux++;
        }
        cont++;
        aux = cont + 1;
    }
    if (nbr < 0)
    {
        nbr *= -1;
        write (1, "-", 1);
    }
    if (cont == 10)
        ft_putnbr (nbr);
    if (cont == 16)
        ft_hexa (nbr, base);
    if ( cont == 2)
        ft_bin (nbr, base);
    if (cont == 8)
        ft_oct (nbr, base);
}

int main (void)
{
    char *dec = "0123456789";
    char *hexa = "0123456789ABCEDF";
    char *bin = "01";
    char *oct = "poniguay";
    ft_putnbr_base(123, oct);
    return (0);
}