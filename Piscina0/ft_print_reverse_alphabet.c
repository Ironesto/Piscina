#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    for(char let ='z';let >= 'a'; let--)
        write(1,&let,1);
}

int main(void)
{
    ft_print_reverse_alphabet();
    return(0);
}