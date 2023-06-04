#include <unistd.h>
#include <stdio.h>

char ft_conver(int num)
{
    char let = num + 48;
    write(1,&let,1);
}

int main(void)
{
    ft_conver(3);
}