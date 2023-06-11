#include <stdio.h>
#include <stdlib.h>

char *ft_str_is_strupcase(char *str)
{
    int c = 0;
    while(str[c])
    {
        if(str[c] >= 'a' && str[c] <= 'z')
        {
            str[c] = str[c] - 32;
        }
        c++;
    }
    return(str);
}

int main (void)
{
    char str[] = "Holamundo";
    printf("%s\n",ft_str_is_strupcase(str));
}