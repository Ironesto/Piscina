#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int aux;
    int pri = 0;
    while(size > size / 2)
    {
        aux = tab[size];
        tab[size] = tab[pri];
        tab[pri] = aux;
        size--;
        pri++;
    }
    /*int cont = 0;
    while(cont != 4)
    {
        printf("%d\n",tab[cont]);
        cont++;
    }*/
}

int main(void)
{
    int tab[4] = {1, 2, 3, 4};
    ft_rev_int_tab(tab,3);
}