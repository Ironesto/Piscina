void ft_print_comb()
{
    char i, j, k;
    i = '0';
    while(i <= 7){
        i++;
        j = i+1;
        while(j <= 8){
            j++;
        
            k = j+1;
            while(k <= 9){
                k++;
                    ft_putchar(i);
                    ft_putchar(j);
                    ft_putchar(k);
                    ft_putchar(',');
                    ft_putchar(' ');
            }
            }
        }