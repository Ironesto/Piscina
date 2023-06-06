#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
    
}

int main(void)
{
    int num1 = 10;
    int num2 = 5;
    int div;
    int mod;
    ft_div_mod(num1 , num2 , &div , &mod);
    printf("%d\n%d", div , mod);
}