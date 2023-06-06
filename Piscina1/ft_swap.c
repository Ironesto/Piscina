#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
    //printf("%d%d\n",*a,*b);
}

int main(void)
{
    int nb = 2;
    int nb2 = 4;
    //printf("%d%d\n",nb,nb2);
    ft_swap(&nb,&nb2);
    //printf("%d%d\n",nb,nb2);
}