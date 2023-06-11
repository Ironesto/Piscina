#include <stdio.h>
#include <stdlib.h>

char *ft_str_is_strcapitalize(char *str)
{
    int c = 0;
    while(str[c])
    {
        if(str[c] >= 'a' && str[c] <= 'z')
        {
            if ((str[c - 1]  < 'a' || str[c - 1] > 'z') && (str[c - 1]  < 'A' || str[c - 1] > 'Z'))
                str[c] = str[c] - 32;
        }
        c++;
    }
    return(str);
}

int main (void)
{
    char str[] = "hola mundo";
    printf("%s\n",ft_str_is_strcapitalize(str));
}