#include <unistd.h>
#include <stdio.h>

void ft_print_numbers(void)
{
    char num = '1';
    while(num <= '9')
    {
        write (1,&num,1);
        num++;
    }
}

int main (void)
{
    ft_print_numbers();
}