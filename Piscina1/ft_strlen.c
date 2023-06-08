#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int len;
    while(*str != '\0')
    {
        *str++;
        len++;
    }
    //printf("%d",len);
    return(len);
}

int main(void)
{
    char *str = "hola mundo";
    ft_strlen(str);
}