#include <stdio.h>
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int c = 1;
    int d = 1;
    while(c <= nb)
    {
        d = d * c;
        c++;
    }
    return(d);
}

int main(void)
{
    printf("%d",ft_iterative_factorial(10));
}