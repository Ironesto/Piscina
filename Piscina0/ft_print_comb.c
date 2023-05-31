#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void)
{
    char pri = '0';
    char seg = pri + 1;
    char ter = seg + 1;
    while(ter < '9')
    {
        write(1,&pri,1);
        write(1,&seg,1);
        write(1,&ter,1);
        write(1," ",1);
        ter++;
    }
     while(seg < '8')
    {
        write(1,&pri,1);
        write(1,&seg,1);
        write(1,&ter,1);
        write(1," ",1);
        seg++;
    }
     while(pri <= '7')
    {
        write(1,&pri,1);
        write(1,&seg,1);
        write(1,&ter,1);
        write(1," ",1);
        pri++;
    }


}

int main (void)
{
    ft_print_comb();
}