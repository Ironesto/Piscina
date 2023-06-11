#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
    int c = 0;
    while(src[c])
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return (dest);
}

int main(void)
{
    char src[] = "hola mundo";
    char dest[] = "fsjsgjg";
    ft_strcpy(dest, src);
    printf("%s",dest);
    return (0);
}