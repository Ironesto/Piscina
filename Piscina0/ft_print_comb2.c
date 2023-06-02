#include <unistd.h>
#include <stdio.h>

void ft_print_comb2(void)
{
    char pri = '0';
    char seg = '0';
    char ter = '0';
    char cua = '1';
    while (pri <= '9')
    {
        while(seg <= '9')
        {
            while(ter <= '9')
            {
                while(cua <= '9')
                {
                    write(1,&pri,1);
                    write(1,&seg,1);
                    write(1,"-",1);
                    write(1,&ter,1);
                    write(1,&cua,1);
                    write(1," ",1);
                    cua++;
                }
                cua = '0';
                ter++;
            }
            ter =pri;
            seg++;
            cua = seg + 1;
        }
        cua = '1';
        seg = '0';
        pri++;
        ter = pri;
    }
}

int main (void)
{
    ft_print_comb2();
}