#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index)
{
    int ant = 0;
    int num = 1;
    int aux = 0;
    while(index > 0)
    {
        num = num + ant;
        ant = aux;
        aux = num;    
        index--;
    }

    return(ant);
}

int main(void)
{
    printf("%d\n",ft_fibonacci(5));
    return(0);
}