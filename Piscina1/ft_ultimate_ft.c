#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int x;
    int *nb1 = &x;
    int **nb2 = &nb1;
    int ***nb3 = &nb2;
    int ****nb4 = &nb3;
    int *****nb5 = &nb4;
    int ******nb6 = &nb5;
    int *******nb7 = &nb6;
    int ********nb8 = &nb7;
    int *********nb9 = &nb8;
    //¿Por qué la posición de nb9 es menor que la de nb8 y así sucesivamente?
    ft_ultimate_ft(nb9);
    printf("%d\n",*********nb9);
    printf("%d\n",&x);
    printf("%d\n",&nb1);
    printf("%d\n",&nb2);
    printf("%d\n",&nb3);
    printf("%d\n",&nb4);
    printf("%d\n",&nb5);
    printf("%d\n",&nb6);
    printf("%d\n",&nb7);
    printf("%d\n",&nb8);
    printf("%d\n",&nb9);

}