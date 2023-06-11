#include <stdio.h>
#include <stdlib.h>

int ft_str_is_numeric(char *str)
{
    int c = 0;
    int res = 1;
    while(str[c])
    {
        if(str[c] < '0' || str[c] > '9')
            res = 0;
        c++;
    }
    return(res);
}

int main (void)
{
    printf("%d",ft_str_is_numeric("09278365"));
}