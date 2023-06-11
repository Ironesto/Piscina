#include <stdio.h>
#include <unistd.h>


char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int c = 0;
    while (c < n)
    {
        dest[c] = src[c];
        c++;
    }
    dest[c] = '\0';
    return(dest);
}

int main (void)
{
    char src[] = "hola mundo";
    char  dest[] = "afdsmkfdij";
    ft_strncpy(dest, src, 6);
    printf("%s", dest);
}