#include <stdio.h>
#include <stdlib.h>

int ft_str_is_uppercase(char *str)
{
    int c = 0;
    int res = 1;
    while(str[c])
    {
        if(str[c] < 'A' || str[c] > 'Z')
            res = 0;
        c++;
    }
    return(res);
}

int main (void)
{
    printf("%d\n",ft_str_is_uppercase("HOLAMUNDO"));
}