#include <stdio.h>
#include <unistd.h>

void ft_print_alphabet(void)
{
    char let ='a';
    while(let <= 'z')
    {
        write(1,&let,1);
        let++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return(0);
}