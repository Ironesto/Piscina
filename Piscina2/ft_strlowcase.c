#include <stdio.h>
#include <stdlib.h>

char *ft_str_is_strupcase(char *str)
{
    int c = 0;
    while(str[c])
    {
        if(str[c] >= 'A' && str[c] <= 'Z')
        {
            str[c] = str[c] + 32;
        }
        c++;
    }
    return(str);
}

int main (void)
{
    char str[] = "hola MUNDO";
    printf("%s\n",ft_str_is_strupcase(str));
}