#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_len(char *str)
{
    int c = 0;
    int len = 0;
    while(str[c])
    {
        len++;
        c++;
    }
    return(len);
}

char *ft_strcat(char *dest, char *src)
{
    int c = 0;
    int d = 0;
    int len1 = ft_len(dest);
    int len2 = ft_len(src);
    while(c < len1)
        c++;
    while(d <= len2)
    {
        dest[c] = src[d];
        d++;
        c++;
    }
    return(dest);
}

int main (void)
{
    char dest[] = "hola";
    char src[] = " mundo";
    printf("%s",ft_strcat(dest, src));
}
