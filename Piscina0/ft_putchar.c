#include <stdio.h>
#include <unistd.h>

char ft_putchar (char c)
{
    write(1,&c,1);
}

int main (void)

{
    char c = '1';
    ft_putchar(c);
    return(0);
    
}