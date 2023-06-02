#include <unistd.h>
#include <stdio.h>

// Forma alternativa al final. La primera tiene 25 lineas y la segunda tiene 24 líneas contando el nombre y el último "}" en ambas.

void ft_print_comb(void)
{
    char pri = '0';
    char seg = '1';
    char ter = '2';
    while(pri <= '7')
    {
        write(1,&pri,1);
        write(1,&seg,1);
        write(1,&ter,1);
        write(1," ",1);
        if(ter < ':')
            ter++;
        if(seg <= '8' && ter >= ':')
        {
            seg++;
            ter = seg + 1;
        }            
        if (pri <= '7' && seg >= '9')
        {
            pri++;
            seg = pri + 1;
            ter = seg + 1;
        }
    }
}

int main (void)
{
    ft_print_comb();
}

/*
void ft_print_comb()
{
    char pri = '0';
    char seg = '1';
    char ter = '1';
    while(pri < '9')
    {
        while(seg < '9')
        {
            while(ter < '9')
            {
                ter++;
                write(1,&pri,1);
                write(1,&seg,1);
                write(1,&ter,1);
                write(1," ",1);
            }
            ter = seg + 1;
            seg++;
        }
        seg = pri + 1;
        pri++;
    }
}
*/