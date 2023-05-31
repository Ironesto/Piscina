#include <unistd.h>
#include <stdio.h>

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