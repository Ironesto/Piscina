#include <stdio.h>
#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
    int c = 0;
    int c2 = 0;
    while(s1[c])
        c++; 
    while(s2[c2])
        c2++;
    if(c == c2)
        c = 0;
    else if(c > c2)
        c = 1;
    else if(c < c2)
        c = -1;
    printf("%d",c);
}

int main(void)
{
    ft_strcmp("hola mundo", "hola mundo");
}