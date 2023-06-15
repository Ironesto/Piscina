#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    int c = 0;
    int d = 0;
    while(dest[c])
        c++;
    while(src[d] && d < size)
        {
            dest[c] = src[d];
            d++;
            c++;
        }
        c -= d;
    while(src[d])
            d++;
        d += c;
        //printf("%s",dest);
    return(d);
}

int main(void)
{
    char dest[] = "hoy se cena en casa";
    char src[] = "y hay pollo para todos";
    printf("%d",ft_strlcat(dest, src , 8));
}