#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
    int c = 0;
    while(*src != '\0')
    {
        dest[c] = src[c];
        c++;
    }
}

int main(void)
{
    char *src = "hola mundo";
    char *dest;
    ft_strcpy(dest, src);
    printf("%s",dest);
}