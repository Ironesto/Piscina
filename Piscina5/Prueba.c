#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
    int n = 2;
    while(n < nb - 1 && nb % n != 0)
        {
            
        n++;
        printf("%d\n",n);
        }
    if(nb % n != 0)
        printf("Primo\n");
}
int main(void)
{
    printf("Resultado : %d\n",ft_is_prime(20));
    return(0);
}