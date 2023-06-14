#include <stdio.h>
#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int c = 0;
    while(s1[c] == s2[c] && c < n && s1[c] && s2[c])
        c++;
    printf("%d",c);
    return(c);
}

int main(void)
{
    ft_strncmp("holamundo", "hola mundo", 15);
    return(0);
}