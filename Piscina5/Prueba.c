#include <stdio.h>
#include <unistd.h>

    int	ft_fibonacci(int index)
{
    int ant = 0;
    int num = 1;
    num = num + ant;
    return(ft_fibonacci(index - 1));
}

int main(void)
{
    printf("%d\n",ft_fibonacci(5));
    return(0);
}