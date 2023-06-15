#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int c = 0;
    int d = 0;
    while(dest[c])
        c++;
    while(src[d] || dest[c]) // ¿Por qué si le quito el "|| dest[c]" repite la última letra?
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
    char src[] = "mundo";
    printf("%s",ft_strcat(dest, src));
}
