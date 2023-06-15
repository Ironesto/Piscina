#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int c = 0;
    int d = 0;
    while(dest[c])
        c++;
    while(d < nb)
    {
        dest[c] = src[d];
        d++;
        c++;
    }
    dest[c] = '\0';
    return(dest);
}


int main (void)
{
    char dest[] = "hola";
    char src[] = " mundo";
    printf("%s",ft_strncat(dest, src, 4));
}