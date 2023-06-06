#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int c;
    c = *a / *b;
    *b =  *a % *b;
    *a = c;
    printf("%d %d",*a,*b);
}

int main(void)
{
    int nb = 40;
    int nb2 = 18;
    ft_ultimate_div_mod(&nb , &nb2);
}