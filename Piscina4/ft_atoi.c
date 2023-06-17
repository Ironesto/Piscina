#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int c = 0;
    int m = 0;
    while(str[c] < '0' || str[c] > '9')
    {
        if( str[c] == '-')
            m++;
        c++;
    }
    if(m % 2 != 0)
        write(1,"-",1);
    while(str[c] >= '0' && str[c] <= '9')
    {
        write(1,&str[c],1);
        if(str[c] < '0' && str[c] > '9')
            str[c] = '\0';
        c++;
    }
}

int main(void)
{
    ft_atoi("-+----adf901234-90fj-g45g");
    return(0);
}

/*int main(void)
{
    int n = 7;
    int m = 77;
    printf("%d",m % n);
    if(m % n > 0)
        printf("   Primo");
}*/