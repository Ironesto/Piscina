#include <stdio.h>
#include <unistd.h>

int main(int argc , char *argv[])
{
    int a;
    int c = 0;
    while(a < argc)
    {
        while(argv[a][c])
        {
            write(1,&argv[a][c],1);
            c++;
        }
        c = 0;
        a++;
        if(a < argc)
			write(1," ",1);
    }
    return(0);
}