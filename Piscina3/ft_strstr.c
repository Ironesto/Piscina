#include <unistd.h>
#include <stdio.h>



char *ft_strstr(char *str, char *to_find)
{
    int c = 0;
    int d = 0;
    while(str[c])
    {
        while(str[c] == to_find[d])
        {
            c++;
            d++;
        }
        if(to_find[d] == '\0')
        {
            d = c - d;
            c = 0;
            while(str[c])
            {
                str[c] = str[d];
                c++;
                d++;
            }
            //str[c] = '\0';
        } else
            d = 0;
        c++;
    }
    return(str);
}

int main(void)
{
    char str[] ="esty en casa de casi todos";
    char to_find[] = "casi";
    printf("%s", ft_strstr(str, to_find));
}