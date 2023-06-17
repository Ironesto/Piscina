#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
    int c;
    while(c * c < nb)
        c++;
    if(c * c == nb)
        return(c);
    if(c * c != nb)
        return(0);
}

int main(void)
{
    printf("%d\n",ft_sqrt(17));
    return(0);
}