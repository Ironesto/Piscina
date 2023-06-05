#include <stdio.h>
#include <unistd.h>

void ft_ft (int *nbr)
{
    *nbr = 42;
}

int main (void)
{
    int x;
    int *ptr = &x;
    ft_ft(ptr);
    printf("%d",*ptr);
}