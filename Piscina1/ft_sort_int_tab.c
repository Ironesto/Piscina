#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
    /*int aux;
    size--;
    while(size > 0)
    {
        if(tab[size] < tab[size -1])
        {
            aux = tab[size];
            tab[size] = tab[size - 1];
            tab[size - 1] = aux;
            ft_sort_int_tab(tab , size -1 );
        }
        size--;
    }*/
}

int main(void)
{
    int tab[4] = {5, 8, 3, 1};
    ft_sort_int_tab(tab,4);
    int cont = 0;
    while(cont != 4)
    {
        printf("%d\n",tab[cont]);
        cont++;
    }
}