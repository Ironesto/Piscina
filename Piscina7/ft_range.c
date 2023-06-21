#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *ft_range(int min, int max)
{
    int *anum;
    int a;
    if( min >= max)
        return(NULL);
    else
    {
        anum = malloc((max - min + 1) * sizeof(int));
        while(a < max - min)
        {
            anum[a] = min + a;
            a++;
        }
    return(anum);
    }
}

int main(void)
{
    int *var =ft_range(7, 15);
    if(var != NULL)
        printf("%d",var[3]);
    free (var);
}