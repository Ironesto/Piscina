#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
    int c = 0;
    dest = malloc(100 * sizeof(char));
    while(*src != '\0')
    {
        dest[c] = src[c];
        c++;
    }
    return (dest);
    free;
}

int main(void)
{
    char *src = "hola mundo";
    char *dest;
    ft_strcpy(dest, src);
    printf("%s",dest);
}