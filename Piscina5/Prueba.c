#include <stdio.h>
#include <unistd.h>

int		ft_recursive_factorial(int nb)
{
    int c;
    //while(nb > 0)
    //{
        if(c == 0)
            c = 1;
        nb = nb * c;
        c = ft_recursive_factorial(nb - 1);
        printf("%d\n", nb);
    //}
    return(c);
}

int main(void)
{
    printf("%d",ft_recursive_factorial(10));
}